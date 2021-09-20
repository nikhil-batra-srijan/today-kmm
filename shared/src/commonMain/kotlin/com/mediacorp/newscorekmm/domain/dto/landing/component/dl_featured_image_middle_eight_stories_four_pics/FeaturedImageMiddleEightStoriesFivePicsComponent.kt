package com.mediacorp.newscorekmm.domain.dto.landing.component.dl_featured_image_middle_eight_stories_four_pics

import com.mediacorp.newscorekmm.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.ComponentDetailStoryItem
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.CtaData
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.TitleData

data class FeaturedImageMiddleEightStoriesFivePicsComponent(
    val uuid: String,
    val title: TitleData,
    val ctaData: CtaData,
    val storyList: List<ComponentDetailStoryItem>,
    val isDarkMode: Boolean = false
):LandingPageComponent
