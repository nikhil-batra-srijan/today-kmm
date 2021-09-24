package com.mediacorp.newscorekmm.ext

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.*
import kotlinx.datetime.*

fun String.getDateTime(): TimestampData {

    //Past Time
    val formattedPastTime = if (this.contains("Z", true)) {
        Instant.parse(this)
    } else {
        val localDateTime = LocalDateTime.parse(this)
        localDateTime.toInstant(TimeZone.UTC)
    }

    //Current Time
    val currentTime = Clock.System.now()
    currentTime.toEpochMilliseconds()

    //Difference Between Two Dates
    val diff: Long = currentTime.toEpochMilliseconds() - formattedPastTime.toEpochMilliseconds()
    val hours = diff / (60 * 60 * 1000)
    val days =
        ((currentTime.toEpochMilliseconds() - formattedPastTime.toEpochMilliseconds()) / (1000 * 60 * 60 * 24))


    if (days < 2) {
        return when {
            hours < 1 -> {
                WithLessThanOneHour
            }
            hours in 1..23 -> {
                WithHoursAgo(hours = hours.toInt().toString())
            }
            hours in 24..47 -> {
                WithDaysAgo("1")
            }
            else -> {
                WithDaysAgo("2")
            }
        }
    }
    return NoTimeStamp
}