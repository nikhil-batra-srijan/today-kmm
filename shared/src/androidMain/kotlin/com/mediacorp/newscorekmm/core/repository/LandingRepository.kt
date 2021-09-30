package com.mediacorp.newscorekmm.core.repository

import com.mediacorp.newscorekmm.network.CiaWidgetService
import com.mediacorp.newscorekmm.network.InfiniteScrollService
import com.mediacorp.newscorekmm.network.LandingService
import com.mediacorp.newscorekmm.repository.LandingRepository

fun LandingRepository.Companion.init(baseUrl: String, token: String) = LandingRepository(
    LandingService(baseUrl),
    InfiniteScrollService(baseUrl),
    CiaWidgetService(baseUrl = baseUrl, token = "e6f6h28e26vbc8442b288eb6121d85b9a4")
)