package com.mediacorp.newscorekmm.data.domain.dto.landing.infinite_scroll

import com.mediacorp.newscorekmm.data.domain.dto.landing.component.common.ComponentDetailStoryItem

interface InfiniteScrollData

data class InfiniteScrollComponentData(
    val uuid: String,
    val viewMode: String,
    val nextPage: Int,
    val itemList: List<ComponentDetailStoryItem>
) : InfiniteScrollData

object InfiniteScrollError : InfiniteScrollData