package com.mediacorp.newscorekmm.core.repository

import com.mediacorp.newscorekmm.network.CiaWidgetService
import com.mediacorp.newscorekmm.repository.CiaWidgetRepository

fun CiaWidgetRepository.Companion.init(baseUrl: String) = CiaWidgetRepository(CiaWidgetService(baseUrl))