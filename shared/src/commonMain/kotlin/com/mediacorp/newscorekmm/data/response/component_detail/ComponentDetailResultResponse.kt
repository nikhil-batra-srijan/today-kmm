package com.mediacorp.newscorekmm.data.response.component_detail

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class ComponentDetailResultResponse(
    @SerialName("data")
    val storyResponse: List<StoryResponse>?,
    @SerialName("field_count")
    val fieldCount: Int?,
    @SerialName("field_exclude_dedupe")
    val fieldExcludeDedupe: String?,
    @SerialName("field_offset")
    val fieldOffset: Int?,
    @SerialName("field_sub_description")
    val fieldSubDescription: String?,
    @SerialName("id")
    val id: String?,
    @SerialName("title")
    val title: String?,
    @SerialName("type")
    val type: String?,
    @SerialName("uuid")
    val uuid: String?,
    @SerialName("view_more_title")
    val viewMoreTitle: String?,
    @SerialName("view_more_url")
    val viewMoreUrl: String?,
    @SerialName("view_more_url_field_id")
    val viewMoreUrlFieldId: String?,
    @SerialName("view_more_url_field_type")
    val viewMoreUrlFieldType: String?,
    @SerialName("image")
    val imageUrl: String?,
    @SerialName("label")
    val label: String?,
    @SerialName("body")
    val body: String?,
    @SerialName("placeholder")
    val placeholder: String?,
    @SerialName("subscription_type")
    val subscriptionType: String?,
    @SerialName("sub_description")
    val subDescription: String?,
    @SerialName("html")
    val htmlString: String?
)
