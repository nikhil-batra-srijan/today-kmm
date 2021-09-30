package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface ComponentDetailStoryItem

data class FeaturedStoryItem(
    val nid: String,
    val uuid: String,
    val shareUrl: String,
    val title: String,
    val description: StoryDescriptionData,
    val imageData: ImageData,
    val byline: ByLineData,
    val timeStamp: TimestampData,
    val mediaTypeData: HeroMediaType,
    val isBookmarked: Boolean

) : ComponentDetailStoryItem

data class StoryItemWithLeftImage(
    val nid: String,
    val uuid: String,
    val shareUrl: String,
    val title: String,
    val imageData: ImageData,
    val byline: ByLineData,
    val timeStamp: TimestampData,
    val mediaTypeData: HeroMediaType,
    val isBookmarked: Boolean
) : ComponentDetailStoryItem

data class StoryItemWithoutLeftImage(
    val nid: String,
    val uuid: String,
    val shareUrl: String,
    val title: String,
    val byline: ByLineData,
    val timeStamp: TimestampData,
    val mediaTypeData: HeroMediaType,
    val isBookmarked: Boolean
) : ComponentDetailStoryItem

data class MinuteStoryItem(
    val nid: String,
    val uuid: String,
    val title: String,
    val imageData: ImageData,
) : ComponentDetailStoryItem

data class NumberedCarouselItem(
    val nid: String,
    val uuid: String,
    val index: Int,
    val shareUrl: String,
    val title: String,
    val imageData: ImageData,
    val timeStamp: TimestampData,
    val mediaTypeData: HeroMediaType,
    val isBookmarked: Boolean,
    val byline: ByLineData
) : ComponentDetailStoryItem

data class WithoutNumberCarouselItem(
    val nid: String,
    val uuid: String,
    val shareUrl: String,
    val title: String,
    val imageData: ImageData,
    val timeStamp: TimestampData,
    val mediaTypeData: HeroMediaType,
    val isBookmarked: Boolean,
    val byline: ByLineData
) : ComponentDetailStoryItem

data class JournalistCarouselItem(
    val nid: String,
    val uuid: String,
    val authorName: String,
    val authorDescription: String,
    val imageData: ImageData
) : ComponentDetailStoryItem

data class CarouselItem(
    val nid: String,
    val uuid: String,
    val index: Int,
    val shareUrl: String,
    val title: String,
    val imageData: ImageData,
    val timeStamp: TimestampData,
    val mediaTypeData: HeroMediaType,
    val isBookmarked: Boolean
) : ComponentDetailStoryItem

object ComponentDetailStoryItemError : ComponentDetailStoryItem