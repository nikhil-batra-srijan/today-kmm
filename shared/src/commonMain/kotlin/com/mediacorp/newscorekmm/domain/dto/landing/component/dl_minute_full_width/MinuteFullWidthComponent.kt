package com.mediacorp.newscorekmm.domain.dto.landing.component.dl_minute_full_width

import com.mediacorp.newscorekmm.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.ComponentDetailStoryItem
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.CtaData
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.SubTitleData
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.TitleData

data class MinuteFullWidthComponent(
    val uuid: String,
    val title: TitleData,
    val subTitle:SubTitleData,
    val ctaData: CtaData,
    val storyList: List<ComponentDetailStoryItem>,
    val isDarkMode: Boolean = false
):LandingPageComponent
