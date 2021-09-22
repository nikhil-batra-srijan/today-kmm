package com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_listing_four_stories_four_pics

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.ComponentDetailStoryItem
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.CtaData
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.TitleData

data class ListingFourStoriesFourPicsComponent(
    val uuid: String,
    val title: TitleData,
    val ctaData: CtaData,
    val storyList: List<ComponentDetailStoryItem>,
    val isDarkMode: Boolean = false
) : LandingPageComponent
