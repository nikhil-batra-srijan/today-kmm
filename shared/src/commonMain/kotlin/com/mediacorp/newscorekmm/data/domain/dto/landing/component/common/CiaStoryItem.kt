package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent

data class CiaComponent(
    val uuid: String,
    val title: TitleData,
    val ctaData: CtaData,
    val ciaStoryList: List<CiaStoryItem>,
    val isDarkMode: Boolean = false
):LandingPageComponent

sealed class CiaStoryItem {
    data class WithCiaStoryItem(
        val title: String,
        val id: String,
        val contentId: String,
        val url: String,
        val imageUrl: ImageData,
        val clickTracker: String,
        val date: String,
        val duration: DurationType
    ) : CiaStoryItem()
    object None : CiaStoryItem()
}