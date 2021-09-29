package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class LandingResponse(
    @SerialName("result")
    val result: LandingResultResponse? = null
)









