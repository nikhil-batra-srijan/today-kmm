package com.mediacorp.newscorekmm.domain.dto.landing.component.full_spotlight

import com.mediacorp.newscorekmm.domain.dto.landing.component.LandingPageComponent

data class SpotLightComponent(
    val uuid: String, val image: String, val viewMoreUrl: String,
    val viewMoreType: String
) : LandingPageComponent
