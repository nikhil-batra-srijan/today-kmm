package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.data.domain.dto.landing.menu.bottom_nav_menu.BottomMenu
import com.mediacorp.newscorekmm.data.response.menu.bottom_nav_menu.BottomNavMenuResponseItem
import com.mediacorp.newscorekmm.ext.CFlow
import com.mediacorp.newscorekmm.network.MenuService
import kotlinx.coroutines.flow.flow

class MenuRepository internal constructor(val menuService: MenuService) {

    fun getBottomNavMenu() = CFlow(flow<List<BottomMenu>> {
        menuService.getBottomNavMenu()?.let {
            emit(
                interpretMandatoryStoryList(it) { pureList ->
                    interpretMenuList(pureList)
                }
            )
        } ?: emit(emptyList())
    }
    )

    private fun interpretMenuList(menuList: List<BottomNavMenuResponseItem>?): List<BottomMenu> {
        return if (menuList.isNullOrEmpty()) emptyList()
        else menuList.map { it.validMenuItem() }
    }

    private fun BottomNavMenuResponseItem?.validMenuItem(): BottomMenu {
        return if (this == null || this.title.isNullOrBlank()) BottomMenu.None
        else if (!this.fieldId.isNullOrBlank() && !this.fieldType.isNullOrBlank()) {
            BottomMenu.WithLandingPage(title = this.title, id = this.fieldId, type = this.fieldType)
        } else if (!this.absoluteUrl.isNullOrBlank()) {
            BottomMenu.WithAbsoluteUrl(this.title, this.absoluteUrl)
        } else {
            BottomMenu.None
        }
    }

    private fun <T> interpretMandatoryStoryList(
        storyResponse: List<T>?,
        block: (List<T>) -> List<BottomMenu>
    ): List<BottomMenu> {
        return if (storyResponse.isNullOrEmpty()) {
            emptyList()
        } else {
            block.invoke(storyResponse)
        }
    }


    companion object
}

