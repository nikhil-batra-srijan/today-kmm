package com.mediacorp.newscorekmm.core.repository

import com.mediacorp.newscorekmm.network.InfiniteScrollService
import com.mediacorp.newscorekmm.network.LandingService
import com.mediacorp.newscorekmm.repository.LandingRepository


fun LandingRepository.Companion.init(baseUrl: String) = LandingRepository(
    LandingService(baseUrl),
    InfiniteScrollService(baseUrl)
)