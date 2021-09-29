package com.mediacorp.newscorekmm.data.domain.dto.landing.component.dl_carousel_without_numbers_full_width

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.*

data class CarouselWithoutNumbersFullWidthComponent(
    val uuid: String,
    val title: TitleData,
    val subTitle:SubTitleData,
    val ctaData: CtaData,
    val storyList: List<WithoutNumberCarouselItem>,
    val isDarkMode: Boolean = false
):LandingPageComponent
