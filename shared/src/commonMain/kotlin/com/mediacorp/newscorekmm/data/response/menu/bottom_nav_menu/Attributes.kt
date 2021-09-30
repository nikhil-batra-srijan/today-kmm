package com.mediacorp.newscorekmm.data.response.menu.bottom_nav_menu


import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class Attributes(
    @SerialName("class")
    val classX: List<String>?=null
)