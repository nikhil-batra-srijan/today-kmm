package com.mediacorp.newscorekmm.ext

import android.annotation.SuppressLint
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.*
import java.text.SimpleDateFormat
import java.util.*
import java.util.concurrent.TimeUnit

@SuppressLint("SimpleDateFormat")
actual fun String.getTimeStamp(): TimestampData {
    return try {
        val format = when {
            this.matches(Regex("yyyy-MM-dd'T'HH:mm:ssZ")) -> SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ssZ")
            this.matches(Regex("yyyy-MM-dd'T'HH:mm:ss")) -> SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss")
            else -> SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss")
        }
        val past: Date? = format.parse(this)
        val now = Date()
        if (past != null) {
            val hours: Long = TimeUnit.MILLISECONDS.toHours(now.time - past.time)
            val days: Long = TimeUnit.MILLISECONDS.toDays(now.time - past.time)

            if (days <= 2) {
                when {
                    hours < 1 -> {
                        WithLessThanOneHour
                    }
                    hours == 1L -> {
                        WithHourAgo
                    }
                    hours in 2..23 -> {
                        WithHoursAgo(hours.toString())
                    }
                    hours in 24..47 -> {
                        WithDaysAgo("1")
                    }
                    else -> {
                        WithDaysAgo("2")
                    }
                }
            } else {
                NoTimeStamp
            }
        } else {
            NoTimeStamp
        }
    } catch (j: Exception) {
        j.printStackTrace()
        NoTimeStamp
    }
}
