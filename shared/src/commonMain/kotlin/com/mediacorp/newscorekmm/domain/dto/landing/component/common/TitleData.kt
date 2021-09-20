package com.mediacorp.newscorekmm.domain.dto.landing.component.common

interface TitleData
data class WithTitle(val title: String) : TitleData
object WithoutTitle : TitleData
