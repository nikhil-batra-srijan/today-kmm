package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface CtaData
data class WithLandingPageCta(val title: String, val landingPageId: String) : CtaData
data class WithArticleDetailCta(val title: String, val articleDetailId: String) : CtaData
data class WithVideoDetailCta(val title: String, val videoDetailId: String) : CtaData
data class WithWebViewCta(val title: String, val webViewUrl: String) : CtaData
object WithoutCta : CtaData