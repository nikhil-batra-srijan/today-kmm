package com.mediacorp.newscorekmm.data.response.menu.bottom_nav_menu


import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class MenuResponseItem(
    @SerialName("absolute_url")
    val absoluteUrl: String?=null,
    @SerialName("alias")
    val alias: String?=null,
    @SerialName("enabled")
    val enabled: Boolean,
    @SerialName("field_id")
    val fieldId: String?=null,
    @SerialName("field_type")
    val fieldType: String?=null,
    @SerialName("options")
    val options: Options? = null,
    @SerialName("title")
    val title: String? = null,
    @SerialName("uri")
    val uri: String? = null,
    @SerialName("weight")
    val weight: String? = null
)