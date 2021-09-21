package com.mediacorp.newscorekmm.repository

sealed class SomeInterface {
    data class ValueOne(val value: String) : SomeInterface()
    data class ValueTwo(val value: String) : SomeInterface()
}