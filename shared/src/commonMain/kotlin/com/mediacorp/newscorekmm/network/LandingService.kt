package com.mediacorp.newscorekmm.network

import com.mediacorp.newscorekmm.core.CommonApiClient
import io.ktor.client.request.*

class LandingService(val baseUrl: String) {

    suspend fun getLanding(landingId: String) {
        return CommonApiClient.httpClient.get("$baseUrl$LANDING_API$landingId")
    }

    suspend fun getComponentDetails(uuid: String, viewMode: String) {
        return CommonApiClient.httpClient.get("$baseUrl$COMPONENT_API$uuid?viewMode=$viewMode")
    }

}