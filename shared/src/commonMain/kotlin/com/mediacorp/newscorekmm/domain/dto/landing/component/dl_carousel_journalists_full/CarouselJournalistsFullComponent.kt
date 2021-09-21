package com.mediacorp.newscorekmm.domain.dto.landing.component.dl_carousel_journalists_full

import com.mediacorp.newscorekmm.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.ComponentDetailStoryItem
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.CtaData
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.JournalistCarouselItem
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.TitleData

data class CarouselJournalistsFullComponent(
    val uuid: String,
    val title: TitleData,
    val ctaData: CtaData,
    val storyList: List<JournalistCarouselItem>,
    val isDarkMode: Boolean = false
):LandingPageComponent
