package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface HeroMediaType

data class WithVideo(val duration: DurationType) : HeroMediaType
data class WithGalleryCount(val count: Int) : HeroMediaType
object DefaultMediaType : HeroMediaType

interface DurationType
object OneMinute : DurationType
data class MoreThanOneMinute(val value: String) : DurationType
object None : DurationType