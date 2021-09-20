package com.mediacorp.newscorekmm.core

import com.mediacorp.newscorekmm.data.response.landing.BaseLabelDisplay
import com.mediacorp.newscorekmm.data.response.landing.LabelDisplayInt
import com.mediacorp.newscorekmm.data.response.landing.LabelDisplayString
import kotlinx.serialization.modules.SerializersModule
import kotlinx.serialization.modules.polymorphic

//Common function to get polymorphic data type serializers module at run-time for api client

fun getSerializersModule() = SerializersModule {
    polymorphic(BaseLabelDisplay::class) {
        subclass(LabelDisplayString::class, LabelDisplayString.serializer())
        subclass(LabelDisplayInt::class, LabelDisplayInt.serializer())
    }
}