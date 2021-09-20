package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class LandingResultResponse(
    @SerialName("title")
    val title: String?,
    @SerialName("webview")
    val webview: String?,
    @SerialName("view_mode")
    val viewMode: String?,
    @SerialName("brief")
    val brief: String?,
    @SerialName("url")
    val url: String?,
    @SerialName("image")
    val image: String?,
    @SerialName("image_mobile")
    val imageMobile: String?,
    @SerialName("uuid")
    val uuid: String?,
    @SerialName("layout")
    val layout: List<LayoutResponse>?,
)
