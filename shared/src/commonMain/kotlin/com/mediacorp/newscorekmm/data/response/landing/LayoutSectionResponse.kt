package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable


@Serializable
data class LayoutSectionResponse(
    @SerialName("background_color")
    val backgroundColor: String? = null,
    @SerialName("background_image")
    val backgroundImage: String? = null,
    @SerialName("classes")
    val classes: String? = null,
    @SerialName("component")
    val component: List<ComponentResponse>? = null,
    @SerialName("layoutId")
    val layoutId: String? = null
)
