package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable


@Serializable
data class LayoutSectionResponse(
    @SerialName("background_color")
    val backgroundColor: String?,
    @SerialName("background_image")
    val backgroundImage: String?,
    @SerialName("classes")
    val classes: String?,
    @SerialName("component")
    val component: List<ComponentResponse>?,
    @SerialName("layoutId")
    val layoutId: String?
)
