package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class LayoutResponse(
    @SerialName("layout_section")
    val layoutSection: LayoutSectionResponse? = null
)
