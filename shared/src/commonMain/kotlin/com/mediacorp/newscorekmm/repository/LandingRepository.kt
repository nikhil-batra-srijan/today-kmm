package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.domain.dto.landing.landing_page.*
import com.mediacorp.newscorekmm.network.LandingService
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow

class LandingRepository internal constructor(private val landingService: LandingService) {

    fun fetchLandingPage(landingPageId: String): Flow<LandingPageData> = flow {
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
                                        && it.type != "ad_display" // This filter is temporary and will be removed once ads are implemented
                            }.let { landingPageData ->
                                when {
                                    landingPageData.isNullOrEmpty() -> {
                                        emit(LandingPageError)
                                    }
                                    else -> {
                                        landingService.getComponentDetails(
                                            landingPageData[0].uuid,
                                            landingPageData[0].viewMode
                                        )?.let {

                                        } ?: emit(
                                            LandingPageNative(
                                                emptyList(),
                                                landingPageData.map {
                                                    LazyLoadComponent(
                                                        it.uuid,
                                                        it.viewMode
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


    fun fetchComponentDetail(lazyLoadComponent: LazyLoadComponent) {

    }

    companion object
}



