package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class AdResponse(
    @SerialName("adChannel")
    val adChannel: String? = null,
    @SerialName("adUnit1")
    val adUnit1: String? = null,
    @SerialName("adUnit2")
    val adUnit2: String? = null,
    @SerialName("adtag1")
    val adtag1: String? = null,
    @SerialName("device")
    val device: String? = null,
    @SerialName("id")
    val id: String? = null,
    @SerialName("infinitescroll")
    val infinitescroll: Boolean? = null,
    @SerialName("isElevator")
    val isElevator: Boolean? = null,
    @SerialName("largeads")
    val largeads: String? = null,
    @SerialName("networkCode")
    val networkCode: String? = null,
    @SerialName("noad")
    val noad: String? = null,
    @SerialName("pos")
    val pos: String? = null,
    @SerialName("prgads")
    val prgads: String? = null,
    @SerialName("replaceAdSection")
    val replaceAdSection: Boolean? = null,
    @SerialName("sizes")
    val sizes: List<List<Int>>? = null,
    @SerialName("vidnart")
    val vidnart: String? = null
)
