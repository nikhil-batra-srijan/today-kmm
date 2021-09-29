package com.mediacorp.newscorekmm.data.request

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class WidgetContext(
    @SerialName("meid")
    val meid: String,
    @SerialName("site")
    val site: String,
    @SerialName("cxense_id")
    val cxenseId: String,
    @SerialName("url")
    val url: String,
    @SerialName("content_id")
    val contentId: String
)