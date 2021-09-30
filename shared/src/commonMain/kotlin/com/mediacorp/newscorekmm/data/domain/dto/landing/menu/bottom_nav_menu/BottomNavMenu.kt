package com.mediacorp.newscorekmm.data.domain.dto.landing.menu.bottom_nav_menu

sealed class MenuData {
    data class WithMenuData(val bottomMenus: List<MenuItem>, val topMenus: List<MenuItem>) :
        MenuData()

    object Nothing : MenuData()
}


sealed class MenuItem {

    data class WithLandingPage(val title: String, val id: String, val type: MenuType) : MenuItem() {
        override fun equals(other: Any?): Boolean {
            return other is WithLandingPage && (
                    other.id == this.id
                    )
        }

        override fun hashCode(): Int {
            var result = title.hashCode()
            result = 31 * result + id.hashCode()
            result = 31 * result + type.hashCode()
            return result
        }
    }

    data class WithAbsoluteUrl(val title: String, val url: String) : MenuItem() {
        override fun equals(other: Any?): Boolean {
            return other is WithAbsoluteUrl && this.title == other.title && this.url == other.url
        }

        override fun hashCode(): Int {
            var result = title.hashCode()
            result = 31 * result + url.hashCode()
            return result
        }
    }

    object None : MenuItem()

}

sealed class MenuType {
    object LandingPage : MenuType()
    object Article : MenuType()
    object Video : MenuType()
    object Minute : MenuType()
    object External : MenuType()
}