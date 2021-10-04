package com.mediacorp.newscorekmm.ext

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.*
import platform.Foundation.*

actual fun String.getTimeStamp(): TimestampData {
    val dateFormatter = NSDateFormatter()
    val enUSPosixLocale = NSLocale("en_US_POSIX")
    dateFormatter.locale = enUSPosixLocale
    dateFormatter.calendar = NSCalendar(NSGregorianCalendar)
    //val nsPredicate1 = NSPredicate.predicateWithFormat("SELF MATCHES %@", "yyyy-MM-dd'T'HH:mm:ssZ".cstr)
    //val nsPredicate2 = NSPredicate.predicateWithFormat("SELF MATCHES %@", "yyyy-MM-dd'T'HH:mm:ss".cstr)
    when {
        NSRegularExpression(
            "\\d{4}-\\d{2}-\\d{2}T\\d{2}:\\d{2}:\\d{2}Z", 0, null
        ).matchesRegex(this) -> {
            println("DateFormatterKMM: first")
            dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ssZ"
        }
        NSRegularExpression(
            "\\d{4}-\\d{2}-\\d{2}T\\d{2}:\\d{2}:\\d{2}", 0, null
        ).matchesRegex(this) -> {
            println("DateFormatterKMM: second")
            dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss"
        }
        else -> {
            println("DateFormatterKMM: else")
            dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ssZ"
        }
    }
    /* when {
         NSRegularExpression(
             "yyyy-MM-dd'T'HH:mm:ssZ", NSRegularExpressionCaseInsensitive, null
         ).matches(this) -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ssZ"
         NSRegularExpression(
             "yyyy-MM-dd'T'HH:mm:ss", NSRegularExpressionCaseInsensitive, null
         ).matches(this) -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss"
         //Regex().matches(self)
         //this.matches(Regex("yyyy-MM-dd'T'HH:mm:ssZ")) -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ssZ"
         //this.matches(Regex("yyyy-MM-dd'T'HH:mm:ss")) -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss"
         //nsPredicate1.evaluateWithObject(this) -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ssZ"
         //nsPredicate2.evaluateWithObject(this) -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss"
         else -> dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss"
     }*/
    val past = dateFormatter.dateFromString(this)
    println("DateFormatterKMM: $past")
    val now = NSDate()
    println("DateFormatterKMM: $now")
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

private fun NSRegularExpression.matchesRegex(s: String): Boolean {
    val range = NSMakeRange(0, s.length.toULong())
    val returnValue = this.rangeOfFirstMatchInString(s, 0, range) == range
    println("DateFormatterKMM: $returnValue")
    return returnValue
}


/*
func matches(_ value : String) -> Bool {
    let range = NSRange (location: 0, length: value.count)
    return regex.firstMatch(in: value, options: [], range: range) != nil
}
*/




