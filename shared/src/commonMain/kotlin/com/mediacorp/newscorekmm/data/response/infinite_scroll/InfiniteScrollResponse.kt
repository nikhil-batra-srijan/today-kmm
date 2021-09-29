package com.mediacorp.newscorekmm.data.response.infinite_scroll

import com.mediacorp.newscorekmm.data.response.component_detail.StoryResponse
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class InfiniteScrollResponse(
    @SerialName("result")
    val result: List<StoryResponse>? = null
)
