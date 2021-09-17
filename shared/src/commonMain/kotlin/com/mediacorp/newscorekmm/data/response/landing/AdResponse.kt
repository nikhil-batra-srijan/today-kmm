package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class AdResponse(
    @SerialName("adChannel")
    val adChannel: String?,
    @SerialName("adUnit1")
    val adUnit1: String?,
    @SerialName("adUnit2")
    val adUnit2: String?,
    @SerialName("adtag1")
    val adtag1: String?,
    @SerialName("device")
    val device: String?,
    @SerialName("id")
    val id: String?,
    @SerialName("infinitescroll")
    val infinitescroll: Boolean?,
    @SerialName("isElevator")
    val isElevator: Boolean?,
    @SerialName("largeads")
    val largeads: String?,
    @SerialName("networkCode")
    val networkCode: String?,
    @SerialName("noad")
    val noad: String?,
    @SerialName("pos")
    val pos: String?,
    @SerialName("prgads")
    val prgads: String?,
    @SerialName("replaceAdSection")
    val replaceAdSection: Boolean?,
    @SerialName("sizes")
    val sizes: List<List<Int>>?,
    @SerialName("vidnart")
    val vidnart: String?
)
