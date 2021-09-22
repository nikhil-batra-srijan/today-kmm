package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface SubTitleData
data class WithSubTitle(val title: String) : SubTitleData
object WithoutSubTitle : SubTitleData