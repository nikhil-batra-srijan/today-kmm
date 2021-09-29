package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface ImageData
data class WithImage(val imageUrl: String) : ImageData
data class WithImageAndByLine(val imageUrl: String, val byLine: String) : ImageData
object WithoutImage : ImageData
object NoImage : ImageData