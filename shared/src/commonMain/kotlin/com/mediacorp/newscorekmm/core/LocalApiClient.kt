package com.mediacorp.newscorekmm.core

import io.ktor.client.*

expect object LocalApiClient {
    val client: HttpClient
}