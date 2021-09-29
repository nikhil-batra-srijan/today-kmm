package com.mediacorp.newscorekmm.data.response.component_detail

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class ComponentDetailResultResponse(
    @SerialName("data")
    val storyResponse: List<StoryResponse>? = null,
    @SerialName("field_count")
    val fieldCount: Int? = null,
    @SerialName("field_exclude_dedupe")
    val fieldExcludeDedupe: String? = null,
    @SerialName("field_offset")
    val fieldOffset: Int? = null,
    @SerialName("field_sub_description")
    val fieldSubDescription: String? = null,
    @SerialName("id")
    val id: String? = null,
    @SerialName("title")
    val title: String? = null,
    @SerialName("type")
    val type: String,
    @SerialName("uuid")
    val uuid: String,
    @SerialName("view_more_title")
    val viewMoreTitle: String? = null,
    @SerialName("view_more_url")
    val viewMoreUrl: String? = null,
    @SerialName("view_more_url_field_id")
    val viewMoreUrlFieldId: String? = null,
    @SerialName("view_more_url_field_type")
    val viewMoreUrlFieldType: String? = null,
    @SerialName("image")
    val imageUrl: String? = null,
    @SerialName("label")
    val label: String? = null,
    @SerialName("body")
    val body: String? = null,
    @SerialName("placeholder")
    val placeholder: String? = null,
    @SerialName("subscription_type")
    val subscriptionType: String? = null,
    @SerialName("sub_description")
    val subDescription: String? = null,
    @SerialName("html")
    val htmlString: String? = null,
    @SerialName("widget_id")
    val widgetId: String? = null,
    @SerialName("mobile_widget_id")
    val mobileWidgetId: String? = null
)
