package com.mediacorp.newscorekmm.core.repository

import com.mediacorp.newscorekmm.network.MenuService
import com.mediacorp.newscorekmm.repository.MenuRepository

fun MenuRepository.Companion.init(baseUrl: String): MenuRepository =
    MenuRepository(MenuService(baseUrl = baseUrl))