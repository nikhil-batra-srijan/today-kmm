package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.ComponentError
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.CiaComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.CiaStoryItem
import com.mediacorp.newscorekmm.data.domain.dto.landing.landing_page.LazyLoadComponent
import com.mediacorp.newscorekmm.data.request.CiaWidgetRequest
import com.mediacorp.newscorekmm.data.response.component_detail.CiaWidgetResponse
import com.mediacorp.newscorekmm.ext.CFlow
import com.mediacorp.newscorekmm.network.CiaWidgetService
import kotlinx.coroutines.flow.flow

class CiaWidgetRepository internal constructor(
    private val ciaWidgetService: CiaWidgetService,
) {
    fun fetchCiaWidget(
        lazyLoadComponent: LazyLoadComponent,
        ciaWidgetRequest: CiaWidgetRequest,
        token: String
    ): CFlow<LandingPageComponent> =
        CFlow(flow
        {
            ciaWidgetService.getCiaComponent(
                lazyLoadComponent.uuid,
                lazyLoadComponent.viewMode,
                ciaWidgetRequest.id,
                ciaWidgetRequest.context.meid,
                ciaWidgetRequest.context.contentId,
                ciaWidgetRequest.context.cxenseId,
                ciaWidgetRequest.context.site,
                ciaWidgetRequest.context.url,
                token
            )?.data?.items?.let { stories ->
                interpretMandatoryStoryList(stories) { pureList ->
                    CiaComponent(

                        ciaStoryList = pureList.map { interpretCIAStoryItem(it) }
                    )
                }
            } ?: emit(ComponentError)
        })

    private fun interpretCIAStoryItem(item: CiaWidgetResponse.WidgetData.Item): CiaStoryItem {
        if () {
            CiaStoryItem.WithCiaStoryItem
        } else {
            CiaStoryItem.None
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

    companion object {}
}




