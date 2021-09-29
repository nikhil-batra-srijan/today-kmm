package com.mediacorp.newscorekmm.data.domain.dto.landing.menu.bottom_nav_menu

sealed class BottomMenu {
    data class WithLandingPage(val title: String, val id: String, val type: String) : BottomMenu()
    data class WithAbsoluteUrl(val title: String, val url: String) : BottomMenu()
    object None : BottomMenu()
}