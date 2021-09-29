package com.mediacorp.newscorekmm.data.domain.dto.landing.landing_page

sealed class ComponentType {
    object dynamicListing : ComponentType()
    object interactive : ComponentType()
    object spotlight : ComponentType()
    object ciaWidget : ComponentType()
    object subscription : ComponentType()
    object defaultComponentType : ComponentType()
}

fun detectComponentTypeFromType(type: String): ComponentType {
    return when (type) {
        "dynamic_listing" -> ComponentType.dynamicListing
        "interactive" -> ComponentType.interactive
        "spotlight" -> ComponentType.spotlight
        "cia_widget" -> ComponentType.ciaWidget
        "subscription" -> ComponentType.subscription
        else -> ComponentType.defaultComponentType
    }
}


