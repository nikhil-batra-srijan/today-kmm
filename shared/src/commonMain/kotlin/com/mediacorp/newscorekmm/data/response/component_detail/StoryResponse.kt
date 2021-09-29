package com.mediacorp.newscorekmm.data.response.component_detail

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class StoryResponse(
    @SerialName("absolute_url")
    val absoluteUrl: String? = null,
    @SerialName("author")
    val author: String? = null,
    @SerialName("author_detail")
    val authorDetail: AuthorDetailResponse? = null,
    @SerialName("category")
    val category: String? = null,
    @SerialName("category_url")
    val categoryUrl: String? = null,
    @SerialName("changed_date")
    val changedDate: String? = null,
    @SerialName("content_origin")
    val contentOrigin: String? = null,
    @SerialName("date")
    val date: String? = null,
    @SerialName("description")
    val description: String? = null,
    @SerialName("duration")
    val duration: String? = null,
    @SerialName("flag")
    val flag: String? = null,
    @SerialName("image_url")
    val imageUrl: String? = null,
    @SerialName("liveblog_source")
    val liveblogSource: String? = null,
    @SerialName("media_count")
    val mediaCount: Int? = null,
    @SerialName("media_type")
    val mediaType: String? = null,
    @SerialName("nid")
    val nid: String? = null,
    @SerialName("release_date")
    val releaseDate: String? = null,
    @SerialName("show_as_web_view")
    val showAsWebView: Boolean? = null,
    @SerialName("title")
    val title: String? = null,
    @SerialName("title_url")
    val titleUrl: String? = null,
    @SerialName("type")
    val type: String? = null,
    @SerialName("uuid")
    val uuid: String? = null,
    @SerialName("video")
    val video: VideoResponse? = null,
    @SerialName("image_byline_and_source")
    val imageByLineAndSource: ImageBylineAndSource? = null
)


@Serializable
data class ImageBylineAndSource(
    @SerialName("byline")
    val byline: String? = null,
    @SerialName("source")
    val source: String? = null,
)
