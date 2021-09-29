package com.mediacorp.newscorekmm.data.response.component_detail

import kotlinx.serialization.SerialName


data class CiaWidgetResponse(
    @SerialName("data")
    val data: WidgetData = WidgetData()
) {
    data class WidgetData(
        @SerialName("title")
        val title: String? = null,
        @SerialName("items")
    val items: List<Item> = listOf()
    )
    {
        data class Item(
            @SerialName("id")
            val id: String? = null,
            @SerialName("title")
            val title: String?,
            @SerialName("site_label")
            val siteLabel: String?,
            @SerialName("site")
            val site: String? = null,
            @SerialName("content_id")
            val contentId: String?,
            @SerialName("url")
            val url: String? = null,
            @SerialName("click_tracker")
            val clickTracker: String?,
            @SerialName("image")
            val imageUrl: String? = null,
            @SerialName("publish_date")
            val publishDate: String?,
            @SerialName("duration")
            val duration: String? = null,
            @SerialName("categories")
            val categories: List<String>? = null,
            @SerialName("thumbnail_type")
            val type: String? = null
        )
    }
}