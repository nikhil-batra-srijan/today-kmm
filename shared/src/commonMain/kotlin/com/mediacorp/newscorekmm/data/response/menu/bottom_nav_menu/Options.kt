package com.mediacorp.newscorekmm.data.response.menu.bottom_nav_menu


import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class Options(
    @SerialName("attributes")
    val attributes: Attributes?=null,
    @SerialName("modal")
    val modal: List<String>?=null
)