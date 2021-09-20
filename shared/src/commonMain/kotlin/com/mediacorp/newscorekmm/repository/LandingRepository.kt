package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.data.response.component_detail.ComponentDetailResponse
import com.mediacorp.newscorekmm.data.response.component_detail.StoryResponse
import com.mediacorp.newscorekmm.data.response.landing.BaseLabelDisplay
import com.mediacorp.newscorekmm.data.response.landing.LabelDisplayInt
import com.mediacorp.newscorekmm.data.response.landing.LabelDisplayString
import com.mediacorp.newscorekmm.domain.dto.landing.component.*
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.*
import com.mediacorp.newscorekmm.domain.dto.landing.component.dl_middle_nine_story_five_pics.MiddleNineStoriesFivePicsComponent
import com.mediacorp.newscorekmm.domain.dto.landing.landing_page.*
import com.mediacorp.newscorekmm.network.LandingService
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow

class LandingRepository internal constructor(private val landingService: LandingService) {

    private val landingPageStoryList = mutableListOf<StoryResponse>()

    fun fetchLandingPage(landingPageId: String): Flow<LandingPageData> = flow {
        landingPageStoryList.clear()
        landingService.getLanding(landingPageId)?.result?.let { landingResultResponse ->
            when {
                landingResultResponse.webview != null && landingResultResponse.webview.toInt() == 1 -> {
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


    }


    fun fetchComponentDetail(lazyLoadComponent: LazyLoadComponent): Flow<LandingPageComponent> =
        flow {
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

        }

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

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.listing4s4p -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.largeTiles2s2p -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.aLeft5s5p -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.aMiddle8s6p -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.carouselWithoutNumbersFullWidth -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.featuredVideoLeft5s5p -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.carouselJournalistsFull -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.minuteFullWidth -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.featuredImageLeft9s6p -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.featuredImageLeft8s5p -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.aLeft5s5pAds -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.featuredImageMiddle8s4p -> {

            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.infiniteScrollListingTdy -> {

            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.carouselWithoutNumbersFullWidth -> {

            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.dynamicListing
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.defaultViewMode -> {

            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.spotlight
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.full -> {

            }

            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.subscription
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.defaultViewMode -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.interactive
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.full -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.ciaWidget
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.numberedCarousel -> {

            }
            detectComponentTypeFromType(componentResponse.result.type) == ComponentType.ciaWidget
                    && detectViewModeTypeFromViewMode(viewMode) == ViewModeType.carousel -> {

            }
            else -> ComponentError
        }
    }


    private fun interpretTitle(labelDisplay: Boolean, title: String?): TitleData {
        return if (labelDisplay && title != null) WithTitle(
            title
        ) else WithoutTitle
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

    private fun interpretStoryList(
        storyResponse: List<StoryResponse>?,
        viewModeType: ViewModeType
    ): List<ComponentDetailStoryItem> {
        if (storyResponse.isNullOrEmpty()) {
            return emptyList()
        }
        when (viewModeType) {
            ViewModeType.aLeft5s5p -> TODO()
            ViewModeType.aLeft5s5pAds -> TODO()
            ViewModeType.aMiddle8s6p -> TODO()
            ViewModeType.cLeft5s5p -> TODO()
            ViewModeType.carousel -> TODO()
            ViewModeType.carouselJournalistsFull -> TODO()
            ViewModeType.carouselWithoutNumbersFullWidth -> TODO()
            ViewModeType.featuredImageLeft8s5p -> TODO()
            ViewModeType.featuredImageLeft9s6p -> TODO()
            ViewModeType.featuredImageMiddle8s4p -> TODO()
            ViewModeType.featuredVideoLeft5s5p -> TODO()
            ViewModeType.full -> TODO()
            ViewModeType.infiniteScrollListingTdy -> TODO()
            ViewModeType.largeTiles2s2p -> TODO()
            ViewModeType.left7s5p -> TODO()
            ViewModeType.listing4s4p -> TODO()
            ViewModeType.middle9s5p -> {
                storyResponse.mapIndexed { index, item ->
                    when (index) {
                        0 -> {

                        }
                        in (1..4) -> {

                        }
                        in (4..storyResponse.size) -> {

                        }
                    }
                }
            }
            ViewModeType.minuteFullWidth -> TODO()
            ViewModeType.numberedCarousel -> TODO()
            ViewModeType.defaultViewMode -> TODO()
        }
    }


    private fun getLabelDisplayFlag(labelDisplay: BaseLabelDisplay?): Boolean {
        return when (labelDisplay) {
            null -> {
                false
            }
            else -> {
                when (labelDisplay) {
                    is LabelDisplayString -> {
                        labelDisplay.labelDisplay == "visible"
                    }
                    is LabelDisplayInt -> {
                        labelDisplay.labelDisplay != 0
                    }
                    else -> false
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
    }
}



