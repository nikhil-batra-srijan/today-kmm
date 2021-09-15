package com.mediacorp.newscorekmm.core.repository

import com.mediacorp.newscorekmm.network.LandingService
import com.mediacorp.newscorekmm.repository.LandingRepository


fun LandingRepository.Companion.create(baseUrl: String) = LandingRepository(
    LandingService(baseUrl)
)