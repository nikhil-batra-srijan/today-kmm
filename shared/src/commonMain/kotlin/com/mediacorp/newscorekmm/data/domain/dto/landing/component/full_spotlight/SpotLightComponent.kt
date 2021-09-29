package com.mediacorp.newscorekmm.data.domain.dto.landing.component.full_spotlight

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent

data class SpotLightComponent(
    val uuid: String, val image: String,
    val spotLightRedirectionData: SpotLightRedirectionData
) : LandingPageComponent

interface SpotLightRedirectionData
data class WithLandingPageAction(val landingPageId: String) : SpotLightRedirectionData
data class WithArticleDetailAction(val articleDetailId: String) : SpotLightRedirectionData
data class WithVideoDetailAction(val videoDetailId: String) : SpotLightRedirectionData
data class WithWebViewAction(val webViewUrl: String) : SpotLightRedirectionData
object WithoutAction : SpotLightRedirectionData
