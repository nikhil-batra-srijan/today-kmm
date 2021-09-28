package com.mediacorp.newscorekmm.ext

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.*
import kotlinx.cinterop.cstr
import platform.Foundation.*

actual fun String.getTimeStamp(): TimestampData {
    val dateFormatter = NSDateFormatter()
    val enUSPosixLocale = NSLocale("en_US_POSIX")
    dateFormatter.locale = enUSPosixLocale
    dateFormatter.calendar = NSCalendar(NSGregorianCalendar)
    val nsPredicate1 = NSPredicate.predicateWithFormat("SELF MATCHES", "yyyy-MM-dd'T'HH:mm:ssZ".cstr)
    val nsPredicate2 = NSPredicate.predicateWithFormat("SELF MATCHES", "yyyy-MM-dd'T'HH:mm:ss".cstr)
    when {
        nsPredicate1.evaluateWithObject(this) -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ssZ"
        nsPredicate2.evaluateWithObject(this) -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss"
        else -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss"
    }
    val past = dateFormatter.dateFromString(this)
    val now = NSDate()
    return if (past != null) {
        //val days = NSCalendar.currentCalendar.components(NSCalendarUnitDay, past, now, 0).day
        //val hours = NSCalendar.currentCalendar.components(NSCalendarUnitHour, past, now, 0).hour
        val flags = NSCalendarUnitDay or NSCalendarUnitHour
        val calendar = NSCalendar(NSGregorianCalendar)
        val components = calendar.components(flags, past, now, 0)
        val days = components.day
        val hours = components.hour

        if (days <= 2) {
            if (days.toInt() == 0) {
                when {
                    hours < 1 -> {
                        WithLessThanOneHour
                    }
                    hours in 1..23 -> {
                        WithHoursAgo(hours.toString())
                    }
                    else -> NoTimeStamp
                }
            } else {
                when (days.toInt()) {
                    1 -> {
                        WithDaysAgo("1")
                    }
                    2 -> {
                        WithDaysAgo("2")
                    }
                    else -> NoTimeStamp
                }
            }

        } else {
            NoTimeStamp
        }


    } else {
        NoTimeStamp
    }
}




