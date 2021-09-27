package com.mediacorp.newscorekmm.ext

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.DurationType
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.MoreThanOneMinute
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.None
import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.OneMinute
import platform.Foundation.*

actual fun getVideoDurationString(duration: String): DurationType {
    val formatter = NSDateFormatter()
    formatter.dateFormat = "hh:mm:ss"
    val date = formatter.dateFromString(duration)
    val calendar = NSCalendar(NSGregorianCalendar)
    return if (date != null) {
        val hour = calendar.component(NSHourCalendarUnit, date)
        val minute = calendar.component(NSMinuteCalendarUnit, date)
        val second = calendar.component(NSSecondCalendarUnit, date)
        when {
            second < 59L && minute == 0L && hour == 0L -> {
                OneMinute
            }
            minute in 1..59L && hour == 0L -> {
                MoreThanOneMinute(minute.toString())
            }
            hour >= 1L -> {
                MoreThanOneMinute(((hour * 60L) + minute).toString())
            }
            else -> {
                None
            }
        }
    } else {
        None
    }

}