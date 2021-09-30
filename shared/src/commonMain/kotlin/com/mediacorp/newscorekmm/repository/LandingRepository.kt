package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.ComponentError
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.*
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.default_subscription_component.*
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_carousel_journalists_full.CarouselJournalistsFullComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_carousel_without_numbers_full_width.CarouselWithoutNumbersFullWidthComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_default_listing.DefaultListingComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_featured_image_left_eight_stories_five_pics.FeaturedImageLeftEightStoriesFivePicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_featured_image_middle_eight_stories_four_pics.FeaturedImageMiddleEightStoriesFivePicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_featured_image_nine_stories_five_pics.FeaturedImageNineStoriesFivePicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_featured_video_left_five_stories_five_pics.FeaturedVideoLeftFiveStoriesFivePicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_five_stories_five_pics.FiveStoriesFivePicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_infinite_scroll_listing_tdy.InfiniteScrollListingTdyComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_large_tile_two_stories_two_pics.LargeTilesTwoStoriesTwoPicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_left_five_stories_five_pics_ads.LeftFiveStoriesFivePicsAdsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_listing_four_stories_four_pics.ListingFourStoriesFourPicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_middle_eight_stories_six_pics.MiddleEightStoriesSixPicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_middle_nine_stories_five_pics.MiddleNineStoriesFivePicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_minute_full_width.MinuteFullWidthComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_seven_stoies_five_pics.SevenStoriesFivePicsComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.full_interactive.*
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.full_spotlight.*
import com.mediacorp.newscorekmm.data.domain.dto.landing.infinite_scroll.InfiniteScrollComponentData
import com.mediacorp.newscorekmm.data.domain.dto.landing.infinite_scroll.InfiniteScrollData
import com.mediacorp.newscorekmm.data.domain.dto.landing.infinite_scroll.InfiniteScrollError
import com.mediacorp.newscorekmm.data.domain.dto.landing.landing_page.*
import com.mediacorp.newscorekmm.data.request.CiaWidgetRequest
import com.mediacorp.newscorekmm.data.request.WidgetContext
import com.mediacorp.newscorekmm.data.response.component_detail.*
import com.mediacorp.newscorekmm.ext.CFlow
import com.mediacorp.newscorekmm.ext.getTimeStamp
import com.mediacorp.newscorekmm.ext.getVideoDuration
import com.mediacorp.newscorekmm.network.CiaWidgetService
import com.mediacorp.newscorekmm.network.InfiniteScrollService
import com.mediacorp.newscorekmm.network.LandingService
import kotlinx.coroutines.flow.flow

class LandingRepository internal constructor(
    private val landingService: LandingService,
    private val infiniteScrollService: InfiniteScrollService,
    private val ciaWidgetService: CiaWidgetService
) {

    fun fetchLandingPage(landingPageId: String): CFlow<LandingPageData> = CFlow(flow {
        landingService.getLanding(landingPageId)?.result?.let { landingResultResponse ->
            when {
                !landingResultResponse.webview.isNullOrBlank() && landingResultResponse.webview.toInt() == 1 -> {
                    when {
                        landingResultResponse.url.isNullOrEmpty() -> {
                            emit(LandingPageError)
                        }
                        else -> {
                            emit(LandingPageWithWebView(landingResultResponse.url))
                        }
                    }
                }
                else -> {
                    when {
                        landingResultResponse.layout.isNullOrEmpty() -> {
                            emit(LandingPageError)
                        }
                        else -> {
                            landingResultResponse.layout.mapNotNull {
                                it.layoutSection
                            }.flatMap {
                                when {
                                    it.component.isNullOrEmpty() -> emptyList()
                                    else -> it.component
                                }
                            }.map {
                                it
                            }.filter {
                                (it.uuid.isNotEmpty() && it.uuid.isNotBlank())
                                        && (it.viewMode.isNotEmpty() && it.viewMode.isNotBlank())
                                        && (it.type.isNotEmpty() && it.type.isNotBlank())
                                        && it.type != AD_DISPLAY // This filter is temporary and will be removed once ads are implemented
                            }.let { landingPageData ->
                                when {
                                    landingPageData.isNullOrEmpty() -> {
                                        emit(LandingPageError)
                                    }
                                    else -> {
                                        landingService.getComponentDetails(
                                            landingPageData[0].uuid,
                                            landingPageData[0].viewMode
                                        )?.let { componentDetailResponse ->
                                            when (landingPageData[0].type) {
                                                DYNAMIC_LISTING -> {
                                                    val deDupedList = applyDedDupeLogic(
                                                        componentDetailResponse.result?.storyResponse,
                                                        componentDetailResponse.result?.fieldExcludeDedupe?.toInt(),
                                                        componentDetailResponse.result?.fieldCount,
                                                        componentDetailResponse.result?.fieldOffset,
                                                        componentDetailResponse.result?.storyResponse?.mapNotNull { it.nid }
                                                    )
                                                    emit(
                                                        when {
                                                            deDupedList.isEmpty() -> {
                                                                LandingPageNative(
                                                                    emptyList(),
                                                                    landingPageData.map {
                                                                        LazyLoadComponent(
                                                                            it.uuid,
                                                                            it.viewMode,
                                                                            it.labelView
                                                                        )
                                                                    }.drop(1)
                                                                )
                                                            }
                                                            else -> {
                                                                LandingPageNative(
                                                                    listOf(
                                                                        getLandingPageComponent(
                                                                            componentDetailResponse.copy(
                                                                                result = componentDetailResponse.result?.copy(
                                                                                    storyResponse = deDupedList
                                                                                )
                                                                            ),
                                                                            landingPageData[0].viewMode,
                                                                            landingPageData[0].labelView
                                                                        )
                                                                    ), landingPageData.map {
                                                                        LazyLoadComponent(
                                                                            it.uuid,
                                                                            it.viewMode,
                                                                            it.labelView
                                                                        )
                                                                    }.drop(1)
                                                                )
                                                            }
                                                        }
                                                    )
                                                }
                                                else -> {
                                                    emit(
                                                        LandingPageNative(
                                                            listOf(
                                                                getLandingPageComponent(
                                                                    componentDetailResponse,
                                                                    landingPageData[0].viewMode,
                                                                    landingPageData[0].labelView
                                                                )
                                                            ), landingPageData.map {
                                                                LazyLoadComponent(
                                                                    it.uuid,
                                                                    it.viewMode,
                                                                    it.labelView
                                                                )
                                                            }.drop(1)
                                                        )
                                                    )

                                                }
                                            }

                                        } ?: emit(
                                            LandingPageNative(
                                                emptyList(),
                                                landingPageData.map {
                                                    LazyLoadComponent(
                                                        it.uuid,
                                                        it.viewMode,
                                                        it.labelView
                                                    )
                                                }.drop(1)
                                            )
                                        )
                                    }
                                }
                            }

                        }
                    }

                }
            }

        } ?: emit(LandingPageError)
    })

    fun fetchComponentDetail(
        lazyLoadComponent: LazyLoadComponent,
        existingIdList: List<String>
    ): CFlow<LandingPageComponent> =
        CFlow(flow {
            landingService.getComponentDetails(lazyLoadComponent.uuid, lazyLoadComponent.viewMode)
                ?.let { componentDetailResponse ->
                    componentDetailResponse.result?.let { componentDetailResultResponse ->
                        when (componentDetailResultResponse.type) {
                            DYNAMIC_LISTING -> {
                                emit(
                                    getLandingPageComponent(
                                        componentDetailResponse.copy(
                                            result = componentDetailResponse.result.copy(
                                                storyResponse = applyDedDupeLogic(
                                                    componentDetailResponse.result.storyResponse,
                                                    componentDetailResponse.result.fieldExcludeDedupe?.toInt(),
                                                    componentDetailResponse.result.fieldCount,
                                                    componentDetailResponse.result.fieldOffset,
                                                    existingIdList
                                                )
                                            )
                                        ),
                                        lazyLoadComponent.viewMode,
                                        lazyLoadComponent.labelDisplay
                                    )
                                )
                            }
                            else -> {
                                emit(
                                    getLandingPageComponent(
                                        componentDetailResponse,
                                        lazyLoadComponent.viewMode,
                                        lazyLoadComponent.labelDisplay
                                    )
                                )
                            }

                        }


                    } ?: emit(ComponentError)

                } ?: emit(ComponentError)

        })

    fun fetchInfiniteScrollComponent(
        uuid: String,
        viewMode: String,
        page: Int
    ): CFlow<InfiniteScrollData> = CFlow(flow {
        infiniteScrollService.getInfiniteScrollList(uuid, viewMode, page)?.let {
            if (it.result.isNullOrEmpty()) {
                emit(InfiniteScrollError)
            } else {
                interpretStoryList(
                    it.result,
                    ViewModeType.infinitListing
                ).filter { item -> item !is ComponentDetailStoryItemError }
                    .let { infiniteStoryList ->
                        if (infiniteStoryList.isEmpty()) {
                            emit(InfiniteScrollError)
                        } else {
                            emit(
                                InfiniteScrollComponentData(
                                    uuid,
                                    viewMode,
                                    page.plus(1),
                                    infiniteStoryList
                                )
                            )

                        }
                    }

            }

        }
            ?: emit(InfiniteScrollError)
    })

    @Suppress("UNCHECKED_CAST")
    private suspend fun getLandingPageComponent(
        componentResponse: ComponentDetailResponse,
        viewMode: String,
        labelDisplay: Boolean
    ): LandingPageComponent {
        if (componentResponse.result == null) {
            return ComponentError
        }

        val compResult = componentResponse.result
        val detectedViewMode = detectViewModeTypeFromViewMode(viewMode)
        val  componentType =  detectComponentTypeFromType(componentResponse.result.type)

        println("\nLandingRepository Component viewMode =${viewMode} type =${compResult.type}")

        return when {
            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.middle9s5p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        MiddleNineStoriesFivePicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList

                        )
                    }


                }

            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.left7s5p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        SevenStoriesFivePicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.listing4s4p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        ListingFourStoriesFourPicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.largeTiles2s2p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        LargeTilesTwoStoriesTwoPicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.aLeft5s5p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        FiveStoriesFivePicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.aMiddle8s6p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        MiddleEightStoriesSixPicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.carouselWithoutNumbersFullWidth -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        CarouselWithoutNumbersFullWidthComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretSubTitle(compResult.fieldSubDescription),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList as List<WithoutNumberCarouselItem>
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.featuredVideoLeft5s5p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        FeaturedVideoLeftFiveStoriesFivePicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList, true
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.carouselJournalistsFull -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        CarouselJournalistsFullComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList as List<JournalistCarouselItem>
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.minuteFullWidth -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        MinuteFullWidthComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretSubTitle(compResult.fieldSubDescription),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList as List<MinuteStoryItem>
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.featuredImageLeft9s6p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        FeaturedImageNineStoriesFivePicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.featuredImageLeft8s5p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        FeaturedImageLeftEightStoriesFivePicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.aLeft5s5pAds -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        LeftFiveStoriesFivePicsAdsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.featuredImageMiddle8s4p -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        FeaturedImageMiddleEightStoriesFivePicsComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.infiniteScrollListingTdy -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        InfiniteScrollListingTdyComponent(
                            compResult.uuid,
                            viewMode,
                            interpretTitle(labelDisplay, compResult.title),
                            pureStoryList

                        )
                    }
                }
            }

            componentType == ComponentType.dynamicListing
                    && detectedViewMode == ViewModeType.defaultViewMode -> {
                interpretMandatoryStoryList(compResult.storyResponse)
                { storyResponse ->
                    val interpretedList = interpretStoryList(
                        storyResponse,
                        detectedViewMode
                    ).filter { it !is ComponentDetailStoryItemError }
                    interpretMandatoryStoryList(storyResponse = interpretedList) { pureStoryList ->
                        DefaultListingComponent(
                            compResult.uuid,
                            interpretTitle(labelDisplay, compResult.title),
                            interpretCta(
                                compResult.viewMoreTitle,
                                compResult.viewMoreUrlFieldId,
                                compResult.viewMoreUrlFieldType,
                                compResult.viewMoreUrl
                            ),
                            pureStoryList
                        )
                    }
                }
            }

            componentType == ComponentType.spotlight
                    && detectedViewMode == ViewModeType.full -> {
                if (!compResult.imageUrl.isNullOrBlank()) {
                    SpotLightComponent(
                        compResult.uuid,
                        compResult.imageUrl,
                        interpretViewMoreUrlType(
                            compResult.viewMoreUrlFieldType,
                            compResult.viewMoreUrlFieldId,
                            compResult.viewMoreUrl
                        )

                    )
                } else {
                    ComponentError
                }
            }

            componentType == ComponentType.subscription
                    && detectedViewMode == ViewModeType.defaultViewMode -> {
                if (!compResult.title.isNullOrBlank()
                    && !compResult.body.isNullOrBlank()
                    && !compResult.subDescription.isNullOrBlank()
                    && !compResult.subscriptionType.isNullOrBlank()
                ) {
                    DefaultSubscriptionComponent(
                        compResult.uuid,
                        title = compResult.title,
                        policyLabel = compResult.subDescription,
                        image = interpretSubscriptionImage(compResult.imageUrl),
                        body = compResult.body,
                        placeHolder = interpretSubscriptionPlaceholder(compResult.placeholder),
                        subscriptionType = compResult.subscriptionType
                    )
                } else {
                    ComponentError
                }
            }

            componentType == ComponentType.interactive
                    && detectedViewMode == ViewModeType.full -> {
                if (!compResult.htmlString.isNullOrBlank() && !compResult.title.isNullOrBlank()) {
                    InteractiveComponent(
                        compResult.uuid,
                        compResult.title,
                        compResult.htmlString,
                        interpretCta(
                            compResult.viewMoreTitle,
                            compResult.viewMoreUrlFieldId,
                            compResult.viewMoreUrlFieldType,
                            compResult.viewMoreUrl
                        )
                    )
                } else {
                    ComponentError
                }
            }

            //TODO write implementation for CIA widgets

            componentType == ComponentType.ciaWidget -> {
                fetchCiaWidget(
                    lazyLoadComponent = LazyLoadComponent(
                        compResult.uuid,
                        viewMode,
                        labelDisplay
                    ),
                    ciaWidgetRequest = CiaWidgetRequest(
                        id = compResult.widgetId,
                        context = WidgetContext(
                            meid = "e4b174a2-2008-4e90-80ca-9e4055e76b4c",
                            site = "tdy",
                            cxenseId = "1135139135324707697",
                            url = "/",
                            contentId = ""
                        )
                    ),
                    detectedViewMode
                )
            }

            componentType == ComponentType.ciaWidget
                    && detectedViewMode == ViewModeType.carousel -> ComponentError

            componentType == ComponentType.ciaWidget
                    && detectedViewMode == ViewModeType.cLeft5s5p -> ComponentError
            else -> ComponentError
        }
    }


    private suspend fun fetchCiaWidget(
        lazyLoadComponent: LazyLoadComponent,
        ciaWidgetRequest: CiaWidgetRequest,
        viewMode: ViewModeType
    ): LandingPageComponent {
        return ciaWidgetService.getCiaComponent(
            lazyLoadComponent.uuid,
            lazyLoadComponent.viewMode,
            ciaWidgetRequest.id,
            ciaWidgetRequest.context.meid,
            ciaWidgetRequest.context.contentId,
            ciaWidgetRequest.context.cxenseId,
            ciaWidgetRequest.context.site,
            ciaWidgetRequest.context.url
        )?.data?.let { data: CiaWidgetResponse.WidgetData ->
            interpretMandatoryStoryList(data.items) { pureList ->
                interpretMandatoryStoryList(
                    pureList
                        .map { interpretCIAStoryItem(it) }
                        .filter { it !is CiaStoryItem.None }
                ) { pureCiaList ->
                    when (viewMode) {
                        ViewModeType.numberedCarousel -> {
                            CiaComponentNumberedCarousel(
                                uuid = lazyLoadComponent.uuid,
                                isDarkMode = lazyLoadComponent.labelDisplay,
                                title = interpretTitle(
                                    lazyLoadComponent.labelDisplay,
                                    data.layoutConfig.title
                                ),
                                ciaStoryList = pureCiaList
                            )
                        }

                        ViewModeType.carousel -> {
                            CiaComponentCarousel(
                                uuid = lazyLoadComponent.uuid,
                                isDarkMode = lazyLoadComponent.labelDisplay,
                                title = interpretTitle(
                                    lazyLoadComponent.labelDisplay,
                                    data.layoutConfig.title
                                ),
                                ciaStoryList = pureCiaList
                            )
                        }

                        ViewModeType.cLeft5s5p -> {
                            CiaComponentFiveStoriesFiveFivePics(
                                uuid = lazyLoadComponent.uuid,
                                isDarkMode = lazyLoadComponent.labelDisplay,
                                title = interpretTitle(
                                    lazyLoadComponent.labelDisplay,
                                    data.layoutConfig.title
                                ),
                                ciaStoryList = pureCiaList
                            )
                        }
                        else -> ComponentError
                    }
                }
            }
        } ?: ComponentError
    }

    private fun interpretCIAStoryItem(item: CiaWidgetResponse.WidgetData.Item): CiaStoryItem {
        return if (!item.title.isNullOrBlank() && !item.id.isNullOrBlank() && !item.url.isNullOrBlank()
            && !item.clickTracker.isNullOrBlank() && !item.contentId.isNullOrBlank()
        ) {
            CiaStoryItem.WithCiaStoryItem(
                title = item.title,
                id = item.id,
                contentId = item.contentId,
                date = interpretTimeStampData(item.publishDate),
                clickTracker = item.clickTracker,
                imageUrl = interpretStoryItemImage(item.imageUrl, null, false),
                url = item.url
            )
        } else {
            CiaStoryItem.None
        }
    }


    private fun interpretTitle(labelDisplay: Boolean, title: String?): TitleData {
        return if (labelDisplay && !title.isNullOrBlank()) WithTitle(
            title
        ) else WithoutTitle
    }

    private fun interpretSubTitle(subDescription: String?): SubTitleData {
        return if (!subDescription.isNullOrBlank()) WithSubTitle(
            subDescription
        ) else WithoutSubTitle
    }

    private fun interpretCta(
        viewMoreTitle: String?,
        viewMoreUrlFieldId: String?,
        viewMoreUrlFieldType: String?,
        viewMoreUrl: String?
    ): CtaData {
        if (viewMoreTitle.isNullOrBlank()) {
            return WithoutCta
        }
        return if (viewMoreUrlFieldId.isNullOrBlank()) {
            if (!viewMoreUrl.isNullOrBlank()) {
                WithWebViewCta(viewMoreTitle, viewMoreUrl)
            } else {
                WithoutCta
            }
        } else {
            when (viewMoreUrlFieldType) {
                LANDING_PAGE_CTA -> {
                    WithLandingPageCta(viewMoreTitle, viewMoreUrlFieldId)
                }
                ARTICLE_DETAIL_CTA -> {
                    WithArticleDetailCta(viewMoreTitle, viewMoreUrlFieldId)
                }
                VIDEO_DETAIL_CTA -> {
                    WithVideoDetailCta(viewMoreTitle, viewMoreUrlFieldId)
                }
                else -> {
                    if (!viewMoreUrl.isNullOrBlank()) {
                        WithWebViewCta(viewMoreTitle, viewMoreUrl)
                    } else {
                        WithoutCta
                    }
                }
            }


        }
    }

    private fun interpretSubscriptionImage(imageUrl: String?): SubscriptionImageData {
        return if (imageUrl.isNullOrBlank()) {
            WithoutSubscriptionImage
        } else {
            WithSubscriptionImage(imageUrl)
        }

    }

    private fun interpretSubscriptionPlaceholder(placeholder: String?): SubscriptionPlaceholder {
        return if (placeholder.isNullOrBlank()) {
            WithoutSubscriptionSubscriptionPlaceholder
        } else {
            WithSubscriptionPlaceholder(placeholder)
        }
    }

    private fun interpretInteractiveViewMoreTitle(viewMoreTitle: String?): InteractiveViewMoreTitle {
        return if (viewMoreTitle.isNullOrBlank()) {
            WithoutInteractiveViewMoreTitle
        } else {
            WithInteractiveViewMoreTitle(viewMoreTitle)
        }
    }

    private fun interpretInteractiveViewMoreUrl(url: String?): InteractiveViewMoreUrl {
        return if (url.isNullOrBlank()) {
            WithoutInteractiveViewMoreUrl
        } else {
            WithInteractiveViewMoreUrl(url)
        }
    }

    private fun interpretViewMoreUrlType(
        viewMoreUrlFieldType: String?,
        viewMoreUrlFieldId: String?,
        viewMoreUrl: String?
    ): SpotLightRedirectionData {
        return if (viewMoreUrlFieldId.isNullOrBlank()) {
            if (!viewMoreUrl.isNullOrBlank()) {
                WithWebViewAction(viewMoreUrl)
            } else {
                WithoutAction
            }
        } else {
            when (viewMoreUrlFieldType) {
                LANDING_PAGE_CTA -> {
                    WithLandingPageAction(viewMoreUrlFieldId)
                }
                ARTICLE_DETAIL_CTA -> {
                    WithArticleDetailAction(viewMoreUrlFieldId)
                }
                VIDEO_DETAIL_CTA -> {
                    WithVideoDetailAction(viewMoreUrlFieldId)
                }
                else -> {
                    if (!viewMoreUrl.isNullOrBlank()) {
                        WithWebViewAction(viewMoreUrl)
                    } else {
                        WithoutAction
                    }
                }
            }


        }
    }

    private fun <T> interpretMandatoryStoryList(
        storyResponse: List<T>?,
        block: (List<T>) -> LandingPageComponent
    ): LandingPageComponent {
        return if (storyResponse.isNullOrEmpty()) {
            ComponentError
        } else {
            block.invoke(storyResponse)
        }
    }

    private fun interpretStoryList(
        storyResponse: List<StoryResponse>,
        viewModeType: ViewModeType
    ): List<ComponentDetailStoryItem> {
        return when (viewModeType) {
            ViewModeType.aLeft5s5p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    WithoutDescription,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..storyResponse.size) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.aLeft5s5pAds -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    WithoutDescription,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..storyResponse.size) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.aMiddle8s6p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..5) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (6..storyResponse.size) -> {
                                StoryItemWithoutLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }

                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.carouselJournalistsFull -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.author.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            in (0..storyResponse.size) -> {
                                JournalistCarouselItem(
                                    item.nid,
                                    item.uuid,
                                    item.author,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.authorDetail?.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.carouselWithoutNumbersFullWidth -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            in (0..storyResponse.size) -> {
                                WithoutNumberCarouselItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false,
                                    interpretStoryByLineData(item.author, item.mediaType)
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.featuredImageLeft8s5p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..4) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (5..storyResponse.size) -> {
                                StoryItemWithoutLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.featuredImageLeft9s6p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..5) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (6..storyResponse.size) -> {
                                StoryItemWithoutLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.featuredImageMiddle8s4p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..3) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (4..storyResponse.size) -> {
                                StoryItemWithoutLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.featuredVideoLeft5s5p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..storyResponse.size) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.infiniteScrollListingTdy -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..storyResponse.size) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.largeTiles2s2p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            in (0..storyResponse.size) -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    WithoutDescription,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.left7s5p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..4) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (5..storyResponse.size) -> {
                                StoryItemWithoutLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.listing4s4p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            in (0..storyResponse.size) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.middle9s5p -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..4) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (5..storyResponse.size) -> {
                                StoryItemWithoutLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.minuteFullWidth -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            in (0..storyResponse.size) -> {
                                MinuteStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    )
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.defaultViewMode -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            0 -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemDescription(item.description),
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource,
                                        true
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            in (1..storyResponse.size) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            ViewModeType.infinitListing -> {
                storyResponse.mapIndexed { index, item ->
                    if (!item.nid.isNullOrBlank() && !item.uuid.isNullOrBlank() && !item.absoluteUrl.isNullOrBlank() && !item.title.isNullOrBlank()) {
                        when (index) {
                            in (0..storyResponse.size) -> {
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl,
                                        item.imageByLineAndSource
                                    ),
                                    interpretStoryByLineData(item.author, item.mediaType),
                                    interpretTimeStampData(item.releaseDate),
                                    interpretEmphasisLogic(
                                        item.mediaType,
                                        item.video,
                                        item.mediaCount
                                    ),
                                    false
                                )
                            }
                            else -> ComponentDetailStoryItemError
                        }
                    } else {
                        ComponentDetailStoryItemError
                    }
                }
            }
            //CIA //TODO Add Implementation for CIA Widgets
            ViewModeType.numberedCarousel -> emptyList()
            ViewModeType.cLeft5s5p -> emptyList()
            ViewModeType.carousel -> emptyList()
            //Not for dynamic Listing
            ViewModeType.full -> emptyList()

        }
    }


    private fun interpretStoryItemDescription(description: String?): StoryDescriptionData {
        return if (description.isNullOrEmpty()) {
            WithoutDescription
        } else {
            WithDescription(
                description
            )
        }
    }

    private fun interpretStoryItemImage(
        imageUrl: String?,
        imageByLineAndSource: ImageBylineAndSource?,
        interpretByline: Boolean = false
    ): ImageData {
        return when {
            imageUrl.isNullOrBlank() -> {
                WithoutImage
            }
            else -> {
                if (imageByLineAndSource != null && interpretByline) {
                    when {
                        imageByLineAndSource.byline.isNullOrBlank() && !imageByLineAndSource.source.isNullOrBlank() -> {
                            WithImageAndByLine(imageUrl, imageByLineAndSource.source)
                        }
                        !imageByLineAndSource.byline.isNullOrBlank() && !imageByLineAndSource.source.isNullOrBlank() -> {
                            WithImageAndByLine(
                                imageUrl,
                                "${imageByLineAndSource.byline} / ${imageByLineAndSource.source}"
                            )
                        }
                        else -> WithImage(imageUrl)
                    }
                } else {
                    WithImage(imageUrl)
                }

            }
        }
    }

    private fun interpretStoryByLineData(author: String?, mediaType: String?): ByLineData {
        return if (author.isNullOrEmpty()) {
            WithoutByLine
        } else {
            if (!mediaType.isNullOrEmpty() && mediaType == VIDEO_MEDIA_TYPE) {
                WithByLineVideo(author)
            } else {
                WithByLineArticle(author)
            }
        }
    }

    private fun interpretTimeStampData(releaseDate: String?): TimestampData {
        return try {
            if (releaseDate.isNullOrBlank()) {
                NoTimeStamp
            } else {
                releaseDate.getTimeStamp()

            }
        } catch (e: Exception) {
            NoTimeStamp
        }

    }

    private fun interpretEmphasisLogic(
        mediaType: String?,
        video: VideoResponse?,
        mediaCount: Int?
    ): HeroMediaType {
        return if (mediaType.isNullOrEmpty()) {
            DefaultMediaType
        } else {
            when (mediaType) {
                VIDEO_MEDIA_TYPE -> {
                    if (video != null && !video.duration.isNullOrEmpty()) {
                        WithVideo(video.duration.getVideoDuration())
                    } else {
                        DefaultMediaType
                    }

                }
                GALLERY_MEDIA_TYPE -> {
                    if (mediaCount != null && mediaCount > 1) {
                        WithGalleryCount(mediaCount)
                    } else {
                        DefaultMediaType
                    }
                }
                else -> {
                    DefaultMediaType
                }
            }
        }
    }


    private fun getLabelDisplayFlag(labelDisplay: String?): Boolean {
        return when (labelDisplay) {
            null -> {
                false
            }
            else -> {
                when (val value = labelDisplay.toIntOrNull()) {
                    null -> labelDisplay == "visible"
                    else -> value != 0
                }
            }
        }

    }


    private fun applyDedDupeLogic(
        storyResponse: List<StoryResponse>?,
        excludeDeDupe: Int?,
        fieldCount: Int?,
        fieldOffset: Int?,
        existingIdList: List<String>?
    ): List<StoryResponse> {
        if (storyResponse.isNullOrEmpty()) {
            return emptyList()
        }
        val excludeDeDupeBool: Boolean = excludeDeDupe == 1
        if (!existingIdList.isNullOrEmpty()) {
            val list = storyResponse.filter {
                if (excludeDeDupeBool) {
                    true
                } else {
                    it.nid !in existingIdList
                }
            }
            return if (fieldCount != null && fieldCount > 0) {
                if (list.isNotEmpty() && list.size >= fieldCount) {
                    val newList = list.take(fieldCount)
                    newList
                } else {
                    list
                }
            } else {
                list
            }
        } else {
            val newStoryResponse = storyResponse.distinctBy { it.nid }
            return if (fieldCount != null && fieldCount > 0) {
                if (newStoryResponse.isNotEmpty() && newStoryResponse.size >= fieldCount) {
                    val newList = newStoryResponse.take(fieldCount)
                    newList
                } else {
                    newStoryResponse
                }
            } else {
                newStoryResponse
            }
        }
    }

    companion object {
        const val AD_DISPLAY = "ad_display"
        const val DYNAMIC_LISTING = "dynamic_listing"
        const val LANDING_PAGE_CTA = "landing_page"
        const val ARTICLE_DETAIL_CTA = "article"
        const val VIDEO_DETAIL_CTA = "video"
        const val VIDEO_MEDIA_TYPE = "video"
        const val GALLERY_MEDIA_TYPE = "gallery"
    }
}



