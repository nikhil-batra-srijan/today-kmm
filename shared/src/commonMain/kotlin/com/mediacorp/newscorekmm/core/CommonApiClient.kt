package com.mediacorp.newscorekmm.core

import io.github.aakira.napier.Napier
import io.ktor.client.*
import io.ktor.client.features.json.*
import io.ktor.client.features.json.serializer.*
import io.ktor.client.features.logging.*

object CommonApiClient {
    val httpClient = HttpClient() {
        install(JsonFeature) {
            val json = kotlinx.serialization.json.Json {
                ignoreUnknownKeys = true
                isLenient = true
                //serializersModule = getSerializersModule()
            }
            serializer = KotlinxSerializer(json)
        }
        install(Logging) {
            level = LogLevel.BODY
            logger = object : Logger {
                override fun log(message: String) {
                    Napier.v(tag = "NEWS_CORE_KMM", message = message)
                }
            }
        }


    }
}