package com.mediacorp.newscorekmm.data.domain.dto.landing.component.full_interactive

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.CtaData

data class InteractiveComponent(
    val uuid: String,
    val title: String,
    val html: String,
    val ctaData: CtaData,
) : LandingPageComponent

interface InteractiveViewMoreTitle
data class WithInteractiveViewMoreTitle(val title: String) : InteractiveViewMoreTitle
object WithoutInteractiveViewMoreTitle : InteractiveViewMoreTitle

interface InteractiveViewMoreUrl
data class WithInteractiveViewMoreUrl(val url: String) : InteractiveViewMoreUrl
object WithoutInteractiveViewMoreUrl : InteractiveViewMoreUrl