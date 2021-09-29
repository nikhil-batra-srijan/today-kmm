package com.mediacorp.newscorekmm.core

import io.github.aakira.napier.Napier
import io.ktor.client.*
import io.ktor.client.engine.okhttp.*
import io.ktor.client.features.json.*
import io.ktor.client.features.json.serializer.*
import io.ktor.client.features.logging.*
import java.util.concurrent.TimeUnit

actual object LocalApiClient {
   actual val client = HttpClient(OkHttp) {
      engine {
         config {
            retryOnConnectionFailure(true)
            connectTimeout(10, TimeUnit.SECONDS)
         }
      }
      install(JsonFeature) {
         serializer = KotlinxSerializer(kotlinx.serialization.json.Json {
            ignoreUnknownKeys = true // if the server sends extra fields, ignore them
         })
      }
      install(Logging) {
         level = LogLevel.HEADERS
         logger = object : Logger {
            override fun log(message: String) {
               Napier.v(tag = "AndroidHttpClient", message = message)
            }
         }
      }
   }
}