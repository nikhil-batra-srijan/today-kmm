package com.mediacorp.newscorekmm.core

import io.ktor.client.*

expect class LocalApiClient {
    val client: HttpClient
}