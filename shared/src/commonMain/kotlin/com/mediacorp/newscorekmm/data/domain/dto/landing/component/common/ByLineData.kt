package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface ByLineData

data class WithByLineArticle(val authorName: String) : ByLineData
data class WithByLineVideo(val authorName: String) : ByLineData
object WithoutByLine : ByLineData