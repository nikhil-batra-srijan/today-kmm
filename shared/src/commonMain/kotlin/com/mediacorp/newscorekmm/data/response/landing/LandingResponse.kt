package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class LandingResponse(
    @SerialName("result")
    val result: LandingResultResponse?
)

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
    val url: String,
    @SerialName("image")
    val image: String?,
    @SerialName("image_mobile")
    val imageMobile: String?,
    @SerialName("uuid")
    val uuid: String?,
    @SerialName("layout")
    val layout: List<LayoutResponse>?,
)

@Serializable
data class LayoutResponse(
    @SerialName("layout_section")
    val layoutSection: LayoutSectionResponse?
)

@Serializable
data class LayoutSectionResponse(
    @SerialName("background_color")
    val backgroundColor: String?,
    @SerialName("background_image")
    val backgroundImage: String?,
    @SerialName("classes")
    val classes: String?,
    /*@SerialName("component")
    val component: List<ComponentResponse>,*/
    @SerialName("layoutId")
    val layoutId: String?
)

/*@Serializable
data class ComponentResponse()*/
