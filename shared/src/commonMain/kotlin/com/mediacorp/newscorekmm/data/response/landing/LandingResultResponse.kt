package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class LandingResultResponse(
    @SerialName("title")
    val title: String? = null,
    @SerialName("webview")
    val webview: String? = null,
    @SerialName("view_mode")
    val viewMode: String? = null,
    @SerialName("brief")
    val brief: String? = null,
    @SerialName("url")
    val url: String? = null,
    @SerialName("image")
    val image: String? = null,
    @SerialName("image_mobile")
    val imageMobile: String? = null,
    @SerialName("uuid")
    val uuid: String? = null,
    @SerialName("layout")
    val layout: List<LayoutResponse>? = null,
)
