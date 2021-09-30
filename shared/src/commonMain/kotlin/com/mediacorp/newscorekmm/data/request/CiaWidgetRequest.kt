package com.mediacorp.newscorekmm.data.request


import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class CiaWidgetRequest(
    @SerialName("id")
    val id: String? = null,
    @SerialName("context")
    val context: WidgetContext
)
