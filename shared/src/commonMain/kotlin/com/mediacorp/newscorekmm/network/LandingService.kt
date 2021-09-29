package com.mediacorp.newscorekmm.network

import com.mediacorp.newscorekmm.core.CommonApiClient
import com.mediacorp.newscorekmm.data.response.component_detail.ComponentDetailResponse
import com.mediacorp.newscorekmm.data.response.landing.LandingResponse
import io.ktor.client.request.*

class LandingService(private val baseUrl: String) {

    suspend fun getLanding(landingPageId: String): LandingResponse? {
        return try {
            CommonApiClient.httpClient.get("$baseUrl$LANDING_API$landingPageId")
        } catch (e: Exception) {
           print("apiException:"+e.message)
            null
        }
    }

    suspend fun getComponentDetails(uuid: String, viewMode: String): ComponentDetailResponse? {
        return try {
            CommonApiClient.httpClient.get("$baseUrl$COMPONENT_API$uuid?viewMode=$viewMode")
        } catch (e: Exception) {
            null
        }
    }

}