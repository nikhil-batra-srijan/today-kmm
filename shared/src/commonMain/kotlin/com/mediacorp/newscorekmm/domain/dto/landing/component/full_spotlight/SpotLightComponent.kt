package com.mediacorp.newscorekmm.domain.dto.landing.component.full_spotlight

import com.mediacorp.newscorekmm.domain.dto.landing.component.LandingPageComponent

data class SpotLightComponent(
    val uuid: String, val image: String,
    val spotLightActionData: SpotLightActionData
) : LandingPageComponent

interface SpotLightActionData
data class WithLandingPageAction(val landingPageId: String) : SpotLightActionData
data class WithArticleDetailAction(val articleDetailId: String) : SpotLightActionData
data class WithVideoDetailAction(val videoDetailId: String) : SpotLightActionData
data class WithWebViewAction(val webViewUrl: String) : SpotLightActionData
object WithoutAction : SpotLightActionData
