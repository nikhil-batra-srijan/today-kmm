package com.mediacorp.newscorekmm.data.response.component_detail

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class ImageByLineAndSourceResponse(
    @SerialName("byline")
    val byline: String?,
    @SerialName("entry_found")
    val entryFound: Boolean?,
    @SerialName("source")
    val source: String?
)
