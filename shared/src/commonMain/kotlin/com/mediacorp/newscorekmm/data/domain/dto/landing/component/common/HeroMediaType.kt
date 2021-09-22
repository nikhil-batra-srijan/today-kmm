package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface HeroMediaType

data class WithVideo(val duration: String) : HeroMediaType
data class WithGalleryCount(val count: Int) : HeroMediaType
object DefaultMediaType : HeroMediaType