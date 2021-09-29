package com.mediacorp.newscorekmm.data.domain.dto.landing.menu.bottom_nav_menu

sealed class MenuData {
    data class WithMenuData(val bottomMenus: List<MenuItem>, val topMenus: List<MenuItem>) :
        MenuData()
    object Nothing : MenuData()
}


sealed class MenuItem {
    data class WithLandingPage(val title: String, val id: String, val type: MenuType) : MenuItem()
    data class WithAbsoluteUrl(val title: String, val url: String) : MenuItem()
    object None : MenuItem()
}

sealed class MenuType {
    object LandingPage : MenuType()
    object Article : MenuType()
    object Video : MenuType()
    object Minute : MenuType()
    object External : MenuType()
}