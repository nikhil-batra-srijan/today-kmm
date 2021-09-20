package com.mediacorp.newscorekmm.domain.dto.landing.landing_page

sealed class ViewModeType {
    object middle9s5p : ViewModeType()
    object full : ViewModeType()
    object left7s5p : ViewModeType()
    object minuteFullWidth : ViewModeType()
    object numberedCarousel : ViewModeType()
    object aMiddle8s6p : ViewModeType()
    object listing4s4p : ViewModeType()
    object largeTiles2s2p : ViewModeType()
    object carousel : ViewModeType()
    object carouselJournalistsFull : ViewModeType()
    object featuredVideoLeft5s5p : ViewModeType()
    object aLeft5s5p : ViewModeType()
    object carouselWithoutNumbersFullWidth : ViewModeType()
    object featuredImageLeft9s6p : ViewModeType()
    object featuredImageLeft8s5p : ViewModeType()
    object cLeft5s5p : ViewModeType()
    object featuredImageMiddle8s4p : ViewModeType()
    object infiniteScrollListingTdy : ViewModeType()
    object aLeft5s5pAds : ViewModeType()
    object defaultViewMode : ViewModeType()
}


fun detectViewModeTypeFromViewMode(viewMode: String): ViewModeType {
    return when (viewMode) {
        "middle_9s_5p" -> ViewModeType.middle9s5p
        "full" -> ViewModeType.full
        "left_7s_5p" -> ViewModeType.left7s5p
        "minute_full_width" -> ViewModeType.minuteFullWidth
        "numbered_carousel" -> ViewModeType.numberedCarousel
        "a_middle_8s_6p" -> ViewModeType.aMiddle8s6p
        "listing_4s_4p" -> ViewModeType.listing4s4p
        "large_tiles_2s_2p" -> ViewModeType.largeTiles2s2p
        "carousel" -> ViewModeType.carousel
        "carousel_journalists_full" -> ViewModeType.carouselJournalistsFull
        "featured_video_left_5s_5p" -> ViewModeType.featuredVideoLeft5s5p
        "a_left_5s_5p" -> ViewModeType.aLeft5s5p
        "carousel_without_numbers_full_width" -> ViewModeType.carouselWithoutNumbersFullWidth
        "featured_image_left_9s_6p" -> ViewModeType.featuredImageLeft9s6p
        "featured_image_left_8s_5p" -> ViewModeType.featuredImageLeft8s5p
        "c_left_5s_5p" -> ViewModeType.cLeft5s5p
        "featured_image_middle_8s_4p" -> ViewModeType.featuredImageMiddle8s4p
        "infinite_scroll_listing_tdy" -> ViewModeType.infiniteScrollListingTdy
        "a_left_5s_5p_ads" -> ViewModeType.aLeft5s5pAds
        else -> ViewModeType.defaultViewMode
    }
}


