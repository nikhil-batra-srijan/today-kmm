package com.mediacorp.newscorekmm.domain.dto.landing.component.full_interactive

import com.mediacorp.newscorekmm.domain.dto.landing.component.LandingPageComponent

data class InteractiveComponent(
    val uuid: String,
    val title: String,
    val html: String,
    val viewMoreTitle: InteractiveViewMoreTitle,
    val viewMoreUrl: InteractiveViewMoreUrl
) : LandingPageComponent

interface InteractiveViewMoreTitle
data class WithInteractiveViewMoreTitle(val title: String) : InteractiveViewMoreTitle
object WithoutInteractiveViewMoreTitle : InteractiveViewMoreTitle

interface InteractiveViewMoreUrl
data class WithInteractiveViewMoreUrl(val url: String) : InteractiveViewMoreUrl
object WithoutInteractiveViewMoreUrl : InteractiveViewMoreUrl