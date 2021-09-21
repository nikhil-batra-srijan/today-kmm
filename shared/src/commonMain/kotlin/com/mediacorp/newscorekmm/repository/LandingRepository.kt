package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.data.response.component_detail.ComponentDetailResponse
import com.mediacorp.newscorekmm.data.response.component_detail.StoryResponse
import com.mediacorp.newscorekmm.data.response.component_detail.VideoResponse
import com.mediacorp.newscorekmm.domain.dto.landing.component.*
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.*
import com.mediacorp.newscorekmm.domain.dto.landing.component.default_subscription_component.*
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_carousel_journalists_full.CarouselJournalistsFullComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_carousel_without_numbers_full_width.CarouselWithoutNumbersFullWidthComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_default_listing.DefaultListingComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_featured_image_left_eight_stories_five_pics.FeaturedImageLeftEightStoriesFivePicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_featured_image_middle_eight_stories_four_pics.FeaturedImageMiddleEightStoriesFivePicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_featured_image_nine_stories_five_pics.FeaturedImageNineStoriesFivePicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_featured_video_left_five_stories_five_pics.FeaturedVideoLeftFiveStoriesFivePicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_five_stories_five_pics.FiveStoriesFivePicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_infinite_scroll_listing_tdy.InfiniteScrollListingTdyComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_large_tile_two_stories_two_pics.LargeTilesTwoStoriesTwoPicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_left_five_stories_five_pics_ads.LeftFiveStoriesFivePicsAdsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_listing_four_stories_four_pics.ListingFourStoriesFourPicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_middle_eight_stories_six_pics.MiddleEightStoriesSixPicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_middle_nine_stories_five_pics.MiddleNineStoriesFivePicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_minute_full_width.MinuteFullWidthComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_seven_stoies_five_pics.SevenStoriesFivePicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.full_interactive.*
import com.mediacorp.newscorekmm.domain.dto.landing.component.full_spotlight.SpotLightComponent
import com.mediacorp.newscorekmm.domain.dto.landing.infinite_scroll.InfiniteScrollComponentData
import com.mediacorp.newscorekmm.domain.dto.landing.infinite_scroll.InfiniteScrollData
import com.mediacorp.newscorekmm.domain.dto.landing.infinite_scroll.InfiniteScrollError
import com.mediacorp.newscorekmm.domain.dto.landing.landing_page.*
import com.mediacorp.newscorekmm.ext.CFlow
import com.mediacorp.newscorekmm.network.InfiniteScrollService
import com.mediacorp.newscorekmm.network.LandingService
import kotlinx.coroutines.flow.flow

class LandingRepository internal constructor(
    private val landingService: LandingService,
    private val infiniteScrollService: InfiniteScrollService
) {

    private val landingPageStoryList = mutableListOf<StoryResponse>()

    fun getSomeInterfaceValue(): List<SomeInterface> = listOf(
        ValueOne("Hello"), ValueTwo("World")
    )

    fun fetchLandingPage(landingPageId: String): CFlow<LandingPageData> = CFlow(flow {
        landingPageStoryList.clear()
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
                                                        componentDetailResponse.result?.fieldOffset
                                                    )
                                                    when {
                                                        deDupedList.isEmpty() -> {
                                                            LandingPageNative(
                                                                emptyList(),
                                                                landingPageData.map {
                                                                    LazyLoadComponent(
                                                                        it.uuid,
                                                                        it.viewMode,
                                                                        getLabelDisplayFlag(it.labelDisplay)
                                                                    )
                                                                }.drop(1)
                                                            )
                                                        }
                                                        else -> {
                                                            landingPageStoryList.addAll(deDupedList)
                                                            emit(
                                                                LandingPageNative(
                                                                    listOf(
                                                                        getLandingPageComponent(
                                                                            componentDetailResponse.copy(
                                                                                result = componentDetailResponse.result?.copy(
                                                                                    storyResponse = deDupedList
                                                                                )
                                                                            ),
                                                                            landingPageData[0].viewMode,
                                                                            getLabelDisplayFlag(
                                                                                landingPageData[0].labelDisplay
                                                                            )
                                                                        )
                                                                    ), landingPageData.map {
                                                                        LazyLoadComponent(
                                                                            it.uuid,
                                                                            it.viewMode,
                                                                            getLabelDisplayFlag(it.labelDisplay)
                                                                        )
                                                                    }.drop(1)
                                                                )
                                                            )

                                                        }
                                                    }
                                                }
                                                else -> {
                                                    emit(
                                                        LandingPageNative(
                                                            listOf(
                                                                getLandingPageComponent(
                                                                    componentDetailResponse,
                                                                    landingPageData[0].viewMode,
                                                                    getLabelDisplayFlag(
                                                                        landingPageData[0].labelDisplay
                                                                    )
                                                                )
                                                            ), landingPageData.map {
                                                                LazyLoadComponent(
                                                                    it.uuid,
                                                                    it.viewMode,
                                                                    getLabelDisplayFlag(it.labelDisplay)
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
                                                        getLabelDisplayFlag(it.labelDisplay)
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

    fun fetchComponentDetail(lazyLoadComponent: LazyLoadComponent): CFlow<LandingPageComponent> =
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
                                                    componentDetailResponse.result.fieldOffset
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
            if (it.result == null) {
                emit(InfiniteScrollError)
            } else {
                interpretStoryList(
                    it.result,
                    ViewModeType.infinitListing
                ).let { infiniteStoryList ->
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
    private fun getLandingPageComponent(
        componentResponse: ComponentDetailResponse,
        viewMode: String,
        labelDisplay: Boolean
    ): LandingPageComponent {
        if (componentResponse.result == null) {
            return ComponentError
        }
        val compResult = componentResponse.result
        return when {
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.middle9s5p -> {
                MiddleNineStoriesFivePicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )

                )

            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.left7s5p -> {
                SevenStoriesFivePicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.listing4s4p -> {
                ListingFourStoriesFourPicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.largeTiles2s2p -> {
                LargeTilesTwoStoriesTwoPicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.aLeft5s5p -> {
                FiveStoriesFivePicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.aMiddle8s6p -> {
                MiddleEightStoriesSixPicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.carouselWithoutNumbersFullWidth -> {
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
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.featuredVideoLeft5s5p -> {
                FeaturedVideoLeftFiveStoriesFivePicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    ),
                    true
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.carouselJournalistsFull -> {
                CarouselJournalistsFullComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    ) as List<JournalistCarouselItem>
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.minuteFullWidth -> {
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
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.featuredImageLeft9s6p -> {
                FeaturedImageNineStoriesFivePicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.featuredImageLeft8s5p -> {
                FeaturedImageLeftEightStoriesFivePicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.aLeft5s5pAds -> {
                LeftFiveStoriesFivePicsAdsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.featuredImageMiddle8s4p -> {
                FeaturedImageMiddleEightStoriesFivePicsComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.infiniteScrollListingTdy -> {
                InfiniteScrollListingTdyComponent(
                    compResult.uuid,
                    viewMode,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )

                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.defaultViewMode -> {
                DefaultListingComponent(
                    compResult.uuid,
                    interpretTitle(labelDisplay, compResult.title),
                    interpretCta(
                        compResult.viewMoreTitle,
                        compResult.viewMoreUrlFieldId,
                        compResult.viewMoreUrlFieldType,
                        compResult.viewMoreUrl
                    ),
                    interpretStoryList(
                        compResult.storyResponse,
                        detectViewModeTypeFromViewMode(viewMode)
                    )
                )
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.spotlight
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.full -> {
                if (!compResult.imageUrl.isNullOrBlank() && !compResult.viewMoreUrl.isNullOrBlank() && !compResult.viewMoreUrlFieldType.isNullOrBlank()) {
                    SpotLightComponent(
                        compResult.uuid,
                        compResult.imageUrl,
                        compResult.viewMoreUrl,
                        compResult.viewMoreUrlFieldType
                    )
                } else {
                    ComponentError
                }
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.subscription
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.defaultViewMode -> {
                if (!compResult.title.isNullOrBlank()
                    && !compResult.body.isNullOrBlank()
                    && !compResult.subDescription.isNullOrBlank()
                    && !compResult.subscriptionType.isNullOrBlank()
                ) {
                    DefaultSubscriptionComponent(
                        compResult.uuid,
                        title = compResult.title,
                        policyLabel = compResult.subDescription ?: "",
                        image = interpretSubscriptionImage(compResult.imageUrl),
                        body = compResult.body,
                        placeHolder = interpretSubscriptionPlaceholder(compResult.placeholder),
                        subscriptionType = compResult.subscriptionType
                    )
                } else {
                    ComponentError
                }
            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.interactive
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.full -> {
                if (!compResult.htmlString.isNullOrBlank() && !compResult.title.isNullOrBlank()) {
                    InteractiveComponent(
                        compResult.uuid,
                        compResult.title,
                        compResult.htmlString,
                        interpretInteractiveInteractiveViewMoreTitle(compResult.viewMoreTitle),
                        interpretInteractiveInteractiveViewMoreUrl(compResult.viewMoreUrl)
                    )
                } else {
                    ComponentError
                }
            }

            //TODO write implementation for CIA widgets

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.ciaWidget
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.numberedCarousel -> ComponentError

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.ciaWidget
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.carousel -> ComponentError

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.ciaWidget
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.cLeft5s5p -> ComponentError
            else -> ComponentError
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

    private fun interpretInteractiveInteractiveViewMoreTitle(viewMoreTitle: String?): InteractiveViewMoreTitle {
        return if (viewMoreTitle.isNullOrBlank()) {
            WithoutInteractiveViewMoreTitle
        } else {
            WithInteractiveViewMoreTitle(viewMoreTitle)
        }
    }

    private fun interpretInteractiveInteractiveViewMoreUrl(url: String?): InteractiveViewMoreUrl {
        return if (url.isNullOrBlank()) {
            WithoutInteractiveViewMoreUrl
        } else {
            WithInteractiveViewMoreUrl(url)
        }
    }

    private fun interpretStoryList(
        storyResponse: List<StoryResponse>?,
        viewModeType: ViewModeType
    ): List<ComponentDetailStoryItem> {
        if (storyResponse.isNullOrEmpty()) {
            return emptyList()
        }
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                            in (0..storyResponse.size) -> {
                                FeaturedStoryItem(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    WithoutDescription,
                                    interpretStoryItemImage(
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
                                    ),
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                StoryItemWithLeftImage(
                                    item.nid,
                                    item.uuid,
                                    item.absoluteUrl,
                                    item.title,
                                    interpretStoryItemImage(
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
                                        item.imageUrl
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
        imageUrl: String?
    ): ImageData {
        //TODO write logic for image byline and source over image
        return if (imageUrl.isNullOrEmpty()) {
            WithoutImage
        } else {
            WithImage(imageUrl)
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
        return if (!releaseDate.isNullOrBlank()) {
            WithTimeStamp(releaseDate)
        } else {
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
                        WithVideo(video.duration)
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
        fieldOffset: Int?
    ): List<StoryResponse> {
        if (storyResponse.isNullOrEmpty()) {
            return emptyList()
        }
        val excludeDeDupeBool: Boolean = excludeDeDupe == 1
        if (landingPageStoryList.isNotEmpty()) {
            val list = storyResponse.filter {
                if (excludeDeDupeBool) {
                    true
                } else {
                    it.nid !in landingPageStoryList.map { item -> item.nid }
                }
            }
            return if (fieldCount != null && fieldCount > 0) {
                if (list.isNotEmpty() && list.size >= fieldCount) {
                    val newList = list.take(fieldCount)
                    landingPageStoryList.addAll(newList)
                    newList
                } else {
                    list
                }
            } else {
                landingPageStoryList.addAll(list)
                list
            }
        } else {
            val newStoryResponse = storyResponse.distinctBy { it.nid }
            return if (fieldCount != null && fieldCount > 0) {
                if (newStoryResponse.isNotEmpty() && newStoryResponse.size >= fieldCount) {
                    val newList = newStoryResponse.take(fieldCount)
                    landingPageStoryList.addAll(newList)
                    newList
                } else {
                    newStoryResponse
                }
            } else {
                landingPageStoryList.addAll(newStoryResponse)
                newStoryResponse
            }
        }
    }

    fun clearLandingPageStoryList() {
        landingPageStoryList.clear()
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



