package com.mediacorp.newscorekmm.data.domain.dto.landing.component.common

interface TimestampData

object WithLessThanOneHour:TimestampData
data class WithHoursAgo(val hours:Long):TimestampData
data class WithDaysAgo(val days:String):TimestampData
object NoTimeStamp : TimestampData