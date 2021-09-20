package com.mediacorp.newscorekmm.domain.dto.landing.component.default_subscription_component

import com.mediacorp.newscorekmm.domain.dto.landing.component.LandingPageComponent

data class DefaultSubscriptionComponent(
    val uuid: String,
    val title: String,
    val policyLabel: String,
    val image: SubscriptionImageData,
    val body: String,
    val placeHolder: SubscriptionPlaceholder,
    val subscriptionType: String
) : LandingPageComponent

interface SubscriptionImageData
data class WithSubscriptionImage(val imageUrl: String) : SubscriptionImageData
object WithoutSubscriptionImage : SubscriptionImageData

interface SubscriptionPlaceholder
data class WithSubscriptionPlaceholder(val placeholder: String) : SubscriptionPlaceholder
object WithoutSubscriptionSubscriptionPlaceholder : SubscriptionPlaceholder

