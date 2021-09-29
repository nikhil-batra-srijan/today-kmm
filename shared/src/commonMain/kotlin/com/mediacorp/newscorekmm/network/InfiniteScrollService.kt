package com.mediacorp.newscorekmm.network

import com.mediacorp.newscorekmm.core.CommonApiClient
import com.mediacorp.newscorekmm.data.response.infinite_scroll.InfiniteScrollResponse
import io.ktor.client.request.*

class InfiniteScrollService(private val baseUrl: String) {
    suspend fun getInfiniteScrollList(
        uuid: String,
        viewMode: String,
        page: Int
    ): InfiniteScrollResponse? {
        return try {
            CommonApiClient.httpClient.get("$baseUrl$INFINITE_SCROLL_API$uuid?viewMode=$viewMode&page=$page")
        } catch (e: Exception) {
            null
        }
    }
}