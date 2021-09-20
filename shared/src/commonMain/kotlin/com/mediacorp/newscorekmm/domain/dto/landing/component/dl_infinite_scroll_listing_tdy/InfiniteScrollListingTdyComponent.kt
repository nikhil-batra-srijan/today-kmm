package com.mediacorp.newscorekmm.domain.dto.landing.component.dl_infinite_scroll_listing_tdy

import com.mediacorp.newscorekmm.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.ComponentDetailStoryItem
import com.mediacorp.newscorekmm.domain.dto.landing.component.common.TitleData

data class InfiniteScrollListingTdyComponent(
    val uuid: String,
    val viewMode: String,
    val title: TitleData,
    val storyList: List<ComponentDetailStoryItem>,
    val startPage: Int = 0,
    val isDarkMode: Boolean = false
) : LandingPageComponent
