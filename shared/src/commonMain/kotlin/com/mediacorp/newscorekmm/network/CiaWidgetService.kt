package com.mediacorp.newscorekmm.network

import com.mediacorp.newscorekmm.core.CommonApiClient
import com.mediacorp.newscorekmm.data.request.CiaWidgetRequest
import com.mediacorp.newscorekmm.data.request.WidgetContext
import com.mediacorp.newscorekmm.data.response.component_detail.CiaWidgetResponse
import io.ktor.client.request.*

class CiaWidgetService(private val token: String,private val baseUrl: String="") {
    suspend fun getCiaComponent(
        uuid: String,
        viewMode: String,
        id: String?,
        meid: String,
        contentId: String,
        censexId: String,
        site: String,
        url: String
    ): CiaWidgetResponse? {
        return try {
            CommonApiClient.httpClient.post("$baseUrl$CIA_WIDGET_API") {
                parameter("token", token)
                body = CiaWidgetRequest(
                    id = id,
                    context = WidgetContext(
                        meid = meid,
                        site = contentId,
                        cxenseId = censexId,
                        url = site,
                        contentId = url
                    )
                )
            }
        } catch (e: Exception) {
            null
        }
    }
}