package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.network.LandingService

class LandingRepository internal constructor(val landingService: LandingService) {

    fun getSomeString() = "Some string"


    companion object {
    }
}