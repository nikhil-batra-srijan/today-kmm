package com.mediacorp.newscorekmm.domain.dto.landing.component.common

interface ByLineData

data class ByLineDataArticle(val byLineString:String) : ByLineData
data class ByLineDataVideo() : ByLineData