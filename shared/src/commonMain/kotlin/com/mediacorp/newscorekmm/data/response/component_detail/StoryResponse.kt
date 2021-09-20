package com.mediacorp.newscorekmm.data.response.component_detail

import com.mediacorp.newscorekmm.data.response.landing.BaseLabelDisplay
import kotlinx.serialization.Polymorphic
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class StoryResponse(
    @SerialName("absolute_url")
    val absoluteUrl: String?,
    @SerialName("author")
    val author: String?,
    @SerialName("author_detail")
    val authorDetail: AuthorDetailResponse?,
    @SerialName("category")
    val category: String?,
    @SerialName("category_url")
    val categoryUrl: String?,
    @SerialName("changed_date")
    val changedDate: String?,
    @SerialName("content_origin")
    val contentOrigin: String?,
    @SerialName("date")
    val date: String?,
    @SerialName("description")
    val description: String?,
    @SerialName("duration")
    val duration: String?,
    @SerialName("flag")
    val flag: String?,
    @SerialName("image_url")
    val imageUrl: String?,
    @SerialName("liveblog_source")
    val liveblogSource: String?,
    @SerialName("media_count")
    val mediaCount: Int?,
    @SerialName("media_type")
    val mediaType: String?,
    @SerialName("nid")
    val nid: String?,
    @SerialName("release_date")
    val releaseDate: String?,
    @SerialName("show_as_web_view")
    val showAsWebView: Boolean?,
    @SerialName("title")
    val title: String?,
    @SerialName("title_url")
    val titleUrl: String?,
    @SerialName("type")
    val type: String?,
    @SerialName("uuid")
    val uuid: String?,
    @SerialName("video")
    val video: VideoResponse?
    //TODO Add byline and source implementation for image
    /*,
    @SerialName("image_byline_and_source")
    @Polymorphic
    val imageByLineAndSource: BaseImageByLineAndSource*/
)

abstract class BaseImageByLineAndSource

@Serializable
data class ImageByLineAndSourceObject(val imageByLineAndSource: ImageBylineAndSource) :
    BaseImageByLineAndSource()

@Serializable
data class ImageByLineAndSourceList(val imageByLineAndSource: List<ImageBylineAndSource>) :
    BaseImageByLineAndSource()


@Serializable
data class ImageBylineAndSource(
    @SerialName("byline")
    val byline: String?,
    @SerialName("source")
    val source: String?,
)
