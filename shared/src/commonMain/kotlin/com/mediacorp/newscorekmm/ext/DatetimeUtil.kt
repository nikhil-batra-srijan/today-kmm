package com.mediacorp.newscorekmm.ext
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.*

//fun String.getDateTime(): TimestampData {
//
//    //Past Time
//    val formattedPastTime = if (this.contains("Z", true)) {
//        Instant.parse(this)
//    } else {
//        val localDateTime = LocalDateTime.parse(this)
//        localDateTime.toInstant(TimeZone.UTC)
//    }
//
//    //Current Time
//    val currentTime = Clock.System.now()
//    currentTime.toEpochMilliseconds()
//
//    //Difference Between Two Dates
//    val diff: Long = currentTime.toEpochMilliseconds() - formattedPastTime.toEpochMilliseconds()
//    val hours = diff / (60 * 60 * 1000)
//    val days =
//        ((currentTime.toEpochMilliseconds() - formattedPastTime.toEpochMilliseconds()) / (1000 * 60 * 60 * 24))
//
//
//    if (days < 2) {
//        return when {
//            hours < 1 -> {
//                WithLessThanOneHour
//            }
//            hours in 1..23 -> {
//                WithHoursAgo(hours = hours)
//            }
//            hours in 24..47 -> {
//                WithDaysAgo("1")
//            }
//            else -> {
//                WithDaysAgo("2")
//            }
//        }
//    }
//    return NoTimeStamp
//}

fun String.getVideoDuration(): DurationType {
    val values = this.split(":")
    return when {
        values.isNullOrEmpty() -> {
            None
        }
        else -> {
            when (values.size) {
                1 -> {
                    OneMinute
                }
                2 -> {
                    val minute = values[0].toInt()
                    val seconds = values[1].toInt()
                    when {
                        seconds < 59 && minute == 0 -> {
                            OneMinute
                        }
                        minute >= 1 -> {
                            MoreThanOneMinute(minute.toString())
                        }
                        else -> None
                    }
                }
                3 -> {
                    val hour = values[0].toInt()
                    val minute = values[1].toInt()
                    val second = values[2].toInt()
                    when {
                        second < 59 && minute == 0 && hour == 0 -> {
                            OneMinute
                        }
                        minute in 1..59 && hour == 0 -> {
                            MoreThanOneMinute(minute.toString())
                        }
                        hour >= 1 -> {
                            MoreThanOneMinute(((hour * 60) + minute).toString())
                        }
                        else -> {
                            None
                        }
                    }

                }
                else -> None
            }


        }
    }
}

expect fun String.getTimeStamp(): TimestampData