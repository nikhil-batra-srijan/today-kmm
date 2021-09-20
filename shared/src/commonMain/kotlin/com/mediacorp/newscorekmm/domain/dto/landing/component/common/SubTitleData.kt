package com.mediacorp.newscorekmm.domain.dto.landing.component.common

interface SubTitleData
data class WithSubTitle(val title: String) : SubTitleData
object WithoutSubTitle : SubTitleData