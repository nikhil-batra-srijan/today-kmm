package com.mediacorp.newscorekmm.data.domain.dto.landing.landing_page

sealed class LazyLoadComponent(
    val uuid: String,
    val viewMode: String,
    val labelDisplay: Boolean,
    val label: ComponentLabel
) {
    class LazyComponent(
        private val lazyUuid: String,
        private val lazyViewMode: String,
        private val lazyLabelDisplay: Boolean,
        label: ComponentLabel
    ) : LazyLoadComponent(
        lazyUuid,
        lazyViewMode,
        lazyLabelDisplay,
        label
    )

    data class InfiniteLazyComponent constructor(
        val pageCount: Int,
        private val lazyUuid: String,
        private val lazyViewMode: String,
        private val lazyLabelDisplay: Boolean,
        private val lazyLabel: ComponentLabel
    ) : LazyLoadComponent(
        lazyUuid,
        lazyViewMode,
        lazyLabelDisplay,
        lazyLabel
    )
}

sealed class ComponentLabel {
    data class WithLabel(val label: String) : ComponentLabel()
    object None : ComponentLabel()
}

