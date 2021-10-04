package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent

data class CiaComponentCarousel(
    val uuid: String,
    val title: TitleData,
    val ciaStoryList: List<CiaStoryItem>,
    val isDarkMode: Boolean = false,
    val ctaData: CtaData
) : LandingPageComponent

data class CiaComponentNumberedCarousel(
    val uuid: String,
    val title: TitleData,
    val ciaStoryList: List<CiaStoryItem>,
    val isDarkMode: Boolean = false,
    val ctaData: CtaData
) : LandingPageComponent

data class CiaComponentFiveStoriesFiveFivePics(
    val uuid: String,
    val title: TitleData,
    val ciaStoryList: List<CiaStoryItem>,
    val isDarkMode: Boolean = false,
    val ctaData: CtaData
) : LandingPageComponent

sealed class CiaStoryItem{
    data class WithCiaStoryItem(
        val title: String,
        val id: String,
        val contentId: String,
        val url: String,
        val imageUrl: ImageData,
        val clickTracker: String,
        val date: TimestampData
    ) : CiaStoryItem()

    object None: CiaStoryItem ()
}
