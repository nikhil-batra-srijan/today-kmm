package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface TimestampData

object WithLessThanOneHour:TimestampData
object WithHourAgo:TimestampData
data class WithHoursAgo(val hours:String):TimestampData
data class WithDaysAgo(val days:String):TimestampData
object NoTimeStamp : TimestampData