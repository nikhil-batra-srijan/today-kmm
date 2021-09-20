package com.mediacorp.newscorekmm.domain.dto.landing.component.common

interface StoryDescriptionData

data class WithDescription(val description:String):StoryDescriptionData
object WithoutDescription:StoryDescriptionData