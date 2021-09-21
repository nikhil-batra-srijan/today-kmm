package com.mediacorp.newscorekmm.domain.dto.landing.component.common

interface TimestampData

object WithLessThanOneHour:TimestampData
data class WithTimeStamp(val timeStampString:String):TimestampData
data class WithHoursAgo(val hours:String):TimestampData
data class WithDaysAgo(val days:String):TimestampData
object NoTimeStamp : TimestampData