package com.mediacorp.newscorekmm.data.domain.dto.landing.infinite_scroll

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.ComponentDetailStoryItem


data class InfiniteScrollListComponent(
    val uuid: String,
    val storyList: List<ComponentDetailStoryItem>,
    val isDarkMode: Boolean = false
) : LandingPageComponent
