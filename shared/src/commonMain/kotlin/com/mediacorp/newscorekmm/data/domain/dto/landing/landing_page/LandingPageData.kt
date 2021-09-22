package com.mediacorp.newscorekmm.data.domain.dto.landing.landing_page

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.LandingPageComponent

//Chief type
interface LandingPageData

//Landing Page as Native View
data class LandingPageNative(
    val loadedComponents: List<LandingPageComponent>,
    val lazyLoadComponents: List<LazyLoadComponent>
) : LandingPageData

//Landing Page as Webview
data class LandingPageWithWebView(val url: String) : LandingPageData

//Landing Page error
object LandingPageError : LandingPageData
