package com.mediacorp.newscorekmm.data.response.landing

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class ComponentResponse(
    @SerialName("ads")
    val ads: List<AdResponse>? = null,
    @SerialName("body")
    val body: String? = null,
    @SerialName("id")
    val id: String? = null,
    @SerialName("image")
    val image: String? = null,
    @SerialName("image_media_mobile")
    val imageMediaMobile: String? = null,
    @SerialName("label")
    val label: String? = null,
    @SerialName("label_display")
    val labelDisplay: String? = null,
    @SerialName("label_view")
    val labelView: Boolean = false,
    @SerialName("mobile_widget_id")
    val mobileWidgetId: String? = null,
    @SerialName("placeholder")
    val placeholder: String? = null,
    @SerialName("region")
    val region: String? = null,
    @SerialName("sub_description")
    val subDescription: String? = null,
    @SerialName("subscription_type")
    val subscriptionType: String? = null,
    @SerialName("type")
    val type: String,
    @SerialName("uuid")
    val uuid: String,
    @SerialName("view_mode")
    val viewMode: String,
    @SerialName("view_more_title")
    val viewMoreTitle: String? = null,
    @SerialName("view_more_url")
    val viewMoreUrl: String? = null,
    @SerialName("view_more_url_field_id")
    val viewMoreUrlFieldId: String? = null,
    @SerialName("view_more_url_field_type")
    val viewMoreUrlFieldType: String? = null,
    @SerialName("weight")
    val weight: Int? = null,
    @SerialName("widget_id")
    val widgetId: String? = null

)

abstract class BaseLabelDisplay

@Serializable
data class LabelDisplayString(val labelDisplay: String) : BaseLabelDisplay()

@Serializable
data class LabelDisplayInt(val labelDisplay: Int) : BaseLabelDisplay()

