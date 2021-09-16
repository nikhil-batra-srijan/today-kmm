package com.mediacorp.newscorekmm.repository

import com.mediacorp.newscorekmm.network.LandingService

class LandingRepository internal constructor(val landingService: LandingService) {

    fun getSomeString(): List<Sample> {
        return listOf(SampleOne(), SampleTwo())
    }


    companion object {
        data class SampleOne(val abcc: String = " Hello Interface One") : Sample
        data class SampleTwo(val abcc: String = " Hello Interface Two") : Sample
    }
}


interface Sample {}

