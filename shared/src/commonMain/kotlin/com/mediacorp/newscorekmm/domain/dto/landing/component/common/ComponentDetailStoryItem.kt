package com.mediacorp.newscorekmm.domain.dto.landing.component.common

interface ComponentDetailStoryItem

data class FeaturedStoryItemWithDescription(
    val nid: String,
    val uuid:String,
    val shareUrl:String,
    val title: String,
    val description: String,
    val imageData: ImageData,
    val byline:ByLineData,
    val timeStamp:TimestampData

    ) : ComponentDetailStoryItem

data class FeaturedStoryItemWithoutDescription(
    val nid: String,
    val uuid:String,
    val shareUrl:String,
) : ComponentDetailStoryItem

data class StoryItemWithLeftImage(
    val nid: String,
    val uuid:String,
    val shareUrl:String,

) : ComponentDetailStoryItem

data class StoryItemWithoutLeftImage(
    val nid: String,
    val uuid:String,
    val shareUrl:String,
) : ComponentDetailStoryItem

data class MinuteStoryItem(
    val nid: String,
    val uuid:String,
    val shareUrl:String,
) : ComponentDetailStoryItem

data class NumberedCarouselItem(
    val nid: String,
    val uuid:String,
    val shareUrl:String,
) : ComponentDetailStoryItem

data class WithoutNumberCarouselItem(
    val nid: String,
    val uuid:String,
    val shareUrl:String,
) : ComponentDetailStoryItem

data class CarouselItem(
    val nid: String,
    val uuid:String,
    val shareUrl:String,
) : ComponentDetailStoryItem