package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class ComponentResponse(
    @SerialName("ads")
    val ads: List<AdResponse>?,
    @SerialName("body")
    val body: String?,
    @SerialName("id")
    val id: String?,
    @SerialName("image")
    val image: String?,
    @SerialName("image_media_mobile")
    val imageMediaMobile: String?,
    @SerialName("label")
    val label: String?,
    @SerialName("label_display")
    val labelDisplay: String?,
    @SerialName("mobile_widget_id")
    val mobileWidgetId: String?,
    @SerialName("placeholder")
    val placeholder: String?,
    @SerialName("region")
    val region: String?,
    @SerialName("sub_description")
    val subDescription: String?,
    @SerialName("subscription_type")
    val subscriptionType: String?,
    @SerialName("type")
    val type: String?,
    @SerialName("uuid")
    val uuid: String?,
    @SerialName("view_mode")
    val viewMode: String?,
    @SerialName("view_more_title")
    val viewMoreTitle: String?,
    @SerialName("view_more_url")
    val viewMoreUrl: String?,
    @SerialName("view_more_url_field_id")
    val viewMoreUrlFieldId: String?,
    @SerialName("view_more_url_field_type")
    val viewMoreUrlFieldType: String?,
    @SerialName("weight")
    val weight: Int?,
    @SerialName("widget_id")
    val widgetId: String?

)
