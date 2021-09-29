package com.mediacorp.newscorekmm.data.response.menu.bottom_nav_menu


import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class MenuResponseItem(
    @SerialName("absolute_url")
    val absoluteUrl: String?,
    @SerialName("alias")
    val alias: String,
    @SerialName("enabled")
    val enabled: Boolean,
    @SerialName("field_id")
    val fieldId: String?,
    @SerialName("field_type")
    val fieldType: String?,
    @SerialName("options")
    val options: Options,
    @SerialName("title")
    val title: String?,
    @SerialName("uri")
    val uri: String?,
    @SerialName("weight")
    val weight: String
)