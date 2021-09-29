package com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_minute_full_width

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.*

data class MinuteFullWidthComponent(
    val uuid: String,
    val title: TitleData,
    val subTitle:SubTitleData,
    val ctaData: CtaData,
    val storyList: List<MinuteStoryItem>,
    val isDarkMode: Boolean = false
):LandingPageComponent
