package com.mediacorp.newscorekmm.network

import com.mediacorp.newscorekmm.core.CommonApiClient
import com.mediacorp.newscorekmm.data.response.menu.bottom_nav_menu.BottomNavMenuResponseItem
import io.ktor.client.request.*

class MenuService constructor(private val baseUrl: String) {

    suspend fun getBottomNavMenu(): List<BottomNavMenuResponseItem>? {
        return try {
            CommonApiClient.httpClient.get("$baseUrl$MENU_ITEMS${EndPoints.Menu.NAV_MENU}")
        } catch (e: Exception) {
            print("apiException:" + e.message)
            null
        }
    }

}