package com.mediacorp.newscorekmm.network

import com.mediacorp.newscorekmm.core.CommonApiClient
import com.mediacorp.newscorekmm.data.response.menu.bottom_nav_menu.MenuResponseItem
import io.ktor.client.request.*

class MenuService constructor(private val baseUrl: String) {

    suspend fun getBottomNavMenu(): List<MenuResponseItem>? {
        return try {
            CommonApiClient.httpClient.get("$baseUrl$BOTTOM_MENU_ITEMS${EndPoints.Menu.BOTTOM_MENU}")
        } catch (e: Exception) {
            print("apiException:" + e.message)
            null
        }
    }

    suspend fun getTopMenu(): List<MenuResponseItem>? {
        return try {
            CommonApiClient.httpClient.get("$baseUrl$TOP_MENU_ITEMS${EndPoints.Menu.TOP_MENU}")
        } catch (e: Exception) {
            print("apiException:" + e.message)
            null
        }
    }

}