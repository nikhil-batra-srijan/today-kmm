package com.mediacorp.newscorekmm.data.response.component_detail

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class ComponentDetailResponse(
    @SerialName("result")
    val result: ComponentDetailResultResponse?
)
