package com.mediacorp.newscorekmm.domain.dto.landing.component.common

interface TimestampData

object WithLessThanOneHour:TimestampData
data class WithHoursAgo(val hours:String):TimestampData
data class WithDaysAgo(val hours:String):TimestampData
object NoTimeStamp : TimestampData