package com.mediacorp.newscorekmm.core

import io.github.aakira.napier.Napier
import io.ktor.client.*
import io.ktor.client.engine.ios.*
import io.ktor.client.features.logging.*

actual object LocalApiClient {
    actual val client = HttpClient(Ios) {
        engine {
            configureRequest {
                setAllowsCellularAccess(true)
            }
        }
        install(Logging) {
            level = LogLevel.HEADERS
            logger = object : Logger {
                override fun log(message: String) {
                    Napier.v(tag = "IosHttpClient", message = message)
                }
            }
        }
    }
}