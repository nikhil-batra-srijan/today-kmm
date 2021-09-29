package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.data.domain.dto.landing.menu.bottom_nav_menu.MenuData
import com.mediacorp.newscorekmm.data.domain.dto.landing.menu.bottom_nav_menu.MenuItem
import com.mediacorp.newscorekmm.data.domain.dto.landing.menu.bottom_nav_menu.MenuType
import com.mediacorp.newscorekmm.data.response.menu.bottom_nav_menu.MenuResponseItem
import com.mediacorp.newscorekmm.ext.CFlow
import com.mediacorp.newscorekmm.network.MenuService
import kotlinx.coroutines.flow.flow

class MenuRepository internal constructor(val menuService: MenuService) {

    fun getPrimaryMenus() = CFlow(flow<MenuData> {
        menuService.getBottomNavMenu()?.let { bottomMenu ->

            val firstId = bottomMenu.firstOrNull()?.fieldId

            val bottomMenus: List<MenuItem> = interpretMandatoryMenuList(bottomMenu) { pureList ->
                interpretMenuList(pureList)
            }

            val topMenus: List<MenuItem> = menuService.getTopMenu()?.let { topMenu ->
                interpretMandatoryMenuList(topMenu) { pureList ->
                    val updatedList = if (firstId == null)
                        pureList.drop(1)
                    else
                        pureList.toMutableList().apply {
                            this[0] = this[0].copy(fieldId = firstId)
                        }
                    interpretMenuList(updatedList)
                }
            } ?: emptyList()

            if (!bottomMenus.isNullOrEmpty() && !topMenus.isNullOrEmpty()) {
                emit(MenuData.WithMenuData(bottomMenus = bottomMenus, topMenus = topMenus))
            } else {
                emit(MenuData.Nothing)
            }
        }
    }
    )

    private fun interpretMenuList(menuList: List<MenuResponseItem>?): List<MenuItem> {
        return if (menuList.isNullOrEmpty()) emptyList()
        else menuList.map { it.validMenuItem() }
    }

    private fun MenuResponseItem?.validMenuItem(): MenuItem {
        return if (this == null || this.title.isNullOrBlank()) MenuItem.None
        else if (!this.fieldId.isNullOrBlank() && !this.fieldType.isNullOrBlank()) {
            MenuItem.WithLandingPage(
                title = this.title,
                id = this.fieldId,
                type = this.fieldType.toMenuType()
            )
        } else if (!this.absoluteUrl.isNullOrBlank()) {
            MenuItem.WithAbsoluteUrl(this.title, this.absoluteUrl)
        } else {
            MenuItem.None
        }
    }


    private fun String.toMenuType(): MenuType {
        return when (this) {
            "landing_page" -> MenuType.LandingPage
            "external" -> MenuType.External
            "minute" -> MenuType.Minute
            "video" -> MenuType.Video
            "article" -> MenuType.Article
            else -> MenuType.External
        }
    }

    private fun <T> interpretMandatoryMenuList(
        storyResponse: List<T>?,
        block: (List<T>) -> List<MenuItem>
    ): List<MenuItem> {
        return if (storyResponse.isNullOrEmpty()) {
            emptyList()
        } else {
            block.invoke(storyResponse)
        }
    }


    companion object
}

