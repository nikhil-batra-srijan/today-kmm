package com.mediacorp.newscorekmm.data.domain.dto.landing.landing_page

sealed class LazyLoadComponent(val uuid: String, val viewMode: String,val labelDisplay: Boolean){
    class LazyComponent(
        private val lazyUuid: String,
        private val lazyViewMode: String,
        private val lazyLabelDisplay: Boolean): LazyLoadComponent(
        lazyUuid,
        lazyViewMode,
        lazyLabelDisplay
    )

    data class InfiniteLazyComponent(
        val pageCount: Int,
        private val lazyUuid: String,
        private val lazyViewMode: String,
        private val lazyLabelDisplay: Boolean): LazyLoadComponent(
        lazyUuid,
        lazyViewMode,
        lazyLabelDisplay
    )
}

