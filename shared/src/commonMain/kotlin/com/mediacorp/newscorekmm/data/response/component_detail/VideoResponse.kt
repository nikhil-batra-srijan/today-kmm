package com.mediacorp.newscorekmm.data.response.component_detail

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class VideoResponse(
    @SerialName("account_id")
    val accountId: String? = null,
    @SerialName("caption")
    val caption: String? = null,
    @SerialName("check_recurring")
    val checkRecurring: Boolean? = null,
    @SerialName("duration")
    val duration: String? = null,
    @SerialName("end_time")
    val endTime: String? = null,
    @SerialName("image_byline_and_source")
    val imageBylineAndSource: ImageByLineAndSourceResponse? = null,
    @SerialName("media_id")
    val mediaId: String,
    @SerialName("player")
    val player: String,
    @SerialName("show_background_image")
    val showBackgroundImage: Boolean,
    @SerialName("show_countdown")
    val showCountdown: Boolean,
    @SerialName("start_time")
    val startTime: String? = null,
    @SerialName("video_id")
    val videoId: String? = null,
    @SerialName("video_url_mp4")
    val videoUrlMp4: String? = null
)
