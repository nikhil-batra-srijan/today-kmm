#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedMenuData, SharedMenuDataNothing, SharedMenuItem, SharedMenuDataWithMenuData, SharedMenuItemNone, SharedMenuItemWithAbsoluteUrl, SharedMenuType, SharedMenuItemWithLandingPage, SharedMenuTypeArticle, SharedMenuTypeExternal, SharedMenuTypeLandingPage, SharedMenuTypeMinute, SharedMenuTypeVideo, SharedComponentLabel, SharedComponentLabelNone, SharedComponentLabelWithLabel, SharedComponentType, SharedComponentTypeCiaWidget, SharedComponentTypeDefaultComponentType, SharedComponentTypeDynamicListing, SharedComponentTypeInteractive, SharedComponentTypeSpotlight, SharedComponentTypeSubscription, SharedLandingPageError, SharedLazyLoadComponent, SharedLandingPageNative, SharedLandingPageWithWebView, SharedLazyLoadComponentInfiniteLazyComponent, SharedViewModeType, SharedViewModeTypeALeft5s5p, SharedViewModeTypeALeft5s5pAds, SharedViewModeTypeAMiddle8s6p, SharedViewModeTypeCLeft5s5p, SharedViewModeTypeCarousel, SharedViewModeTypeCarouselJournalistsFull, SharedViewModeTypeCarouselWithoutNumbersFullWidth, SharedViewModeTypeDefaultViewMode, SharedViewModeTypeFeaturedImageLeft8s5p, SharedViewModeTypeFeaturedImageLeft9s6p, SharedViewModeTypeFeaturedImageMiddle8s4p, SharedViewModeTypeFeaturedVideoLeft5s5p, SharedViewModeTypeFull, SharedViewModeTypeInfinitListing, SharedViewModeTypeInfiniteScrollListingTdy, SharedViewModeTypeLargeTiles2s2p, SharedViewModeTypeLeft7s5p, SharedViewModeTypeListing4s4p, SharedViewModeTypeMiddle9s5p, SharedViewModeTypeMinuteFullWidth, SharedViewModeTypeNumberedCarousel, SharedInfiniteScrollListComponent, SharedComponentError, SharedDefaultListingComponent, SharedMiddleEightStoriesSixPicsComponent, SharedCarouselItem, SharedCiaStoryItem, SharedCiaComponentCarousel, SharedCiaComponentFiveStoriesFiveFivePics, SharedCiaComponentNumberedCarousel, SharedCiaStoryItemNone, SharedCiaStoryItemWithCiaStoryItem, SharedComponentDetailStoryItemError, SharedDefaultMediaType, SharedFeaturedStoryItem, SharedJournalistCarouselItem, SharedMinuteStoryItem, SharedMoreThanOneMinute, SharedNoImage, SharedNoTimeStamp, SharedNone, SharedNumberedCarouselItem, SharedOneMinute, SharedStoryItemWithLeftImage, SharedStoryItemWithoutLeftImage, SharedWithArticleDetailCta, SharedWithByLineArticle, SharedWithByLineVideo, SharedWithDaysAgo, SharedWithDescription, SharedWithGalleryCount, SharedWithHourAgo, SharedWithHoursAgo, SharedWithImage, SharedWithImageAndByLine, SharedWithLandingPageCta, SharedWithLessThanOneHour, SharedWithSubTitle, SharedWithTitle, SharedWithVideo, SharedWithVideoDetailCta, SharedWithWebViewCta, SharedWithoutByLine, SharedWithoutCta, SharedWithoutDescription, SharedWithoutImage, SharedWithoutNumberCarouselItem, SharedWithoutSubTitle, SharedWithoutTitle, SharedFeaturedImageLeftEightStoriesFivePicsComponent, SharedInfiniteScrollListingTdyComponent, SharedLeftFiveStoriesFivePicsAdsComponent, SharedCarouselJournalistsFullComponent, SharedMiddleNineStoriesFivePicsComponent, SharedSpotLightComponent, SharedWithArticleDetailAction, SharedWithLandingPageAction, SharedWithVideoDetailAction, SharedWithWebViewAction, SharedWithoutAction, SharedLargeTilesTwoStoriesTwoPicsComponent, SharedMinuteFullWidthComponent, SharedDefaultSubscriptionComponent, SharedWithSubscriptionImage, SharedWithSubscriptionPlaceholder, SharedWithoutSubscriptionImage, SharedWithoutSubscriptionSubscriptionPlaceholder, SharedListingFourStoriesFourPicsComponent, SharedCarouselWithoutNumbersFullWidthComponent, SharedSevenStoriesFivePicsComponent, SharedFeaturedImageNineStoriesFivePicsComponent, SharedFeaturedVideoLeftFiveStoriesFivePicsComponent, SharedFiveStoriesFivePicsComponent, SharedInteractiveComponent, SharedWithInteractiveViewMoreTitle, SharedWithInteractiveViewMoreUrl, SharedWithoutInteractiveViewMoreTitle, SharedWithoutInteractiveViewMoreUrl, SharedFeaturedImageMiddleEightStoriesFivePicsComponent, SharedCiaWidgetDataError, SharedWidgetContext, SharedCiaWidgetRequestCompanion, SharedCiaWidgetRequest, SharedWidgetContextCompanion, SharedAdResponseCompanion, SharedAdResponse, SharedComponentResponseCompanion, SharedComponentResponse, SharedBaseLabelDisplay, SharedLabelDisplayIntCompanion, SharedLabelDisplayInt, SharedLabelDisplayStringCompanion, SharedLabelDisplayString, SharedLandingResultResponse, SharedLandingResponseCompanion, SharedLandingResponse, SharedLayoutResponse, SharedLandingResultResponseCompanion, SharedLayoutSectionResponse, SharedLayoutResponseCompanion, SharedLayoutSectionResponseCompanion, SharedAuthorDetailResponseCompanion, SharedAuthorDetailResponse, SharedCiaWidgetResponseWidgetData, SharedCiaWidgetResponseCompanion, SharedCiaWidgetResponse, SharedCiaWidgetResponseLayoutConfigCompanion, SharedCiaWidgetResponseLayoutConfig, SharedCiaWidgetResponseWidgetDataItem, SharedCiaWidgetResponseWidgetDataCompanion, SharedCiaWidgetResponseWidgetDataItemCompanion, SharedComponentDetailResultResponse, SharedComponentDetailResponseCompanion, SharedComponentDetailResponse, SharedStoryResponse, SharedComponentDetailResultResponseCompanion, SharedImageByLineAndSourceResponseCompanion, SharedImageByLineAndSourceResponse, SharedImageBylineAndSourceCompanion, SharedImageBylineAndSource, SharedVideoResponse, SharedStoryResponseCompanion, SharedVideoResponseCompanion, SharedInfiniteScrollResponseCompanion, SharedInfiniteScrollResponse, SharedAttributesCompanion, SharedAttributes, SharedOptions, SharedMenuResponseItemCompanion, SharedMenuResponseItem, SharedOptionsCompanion, SharedLandingRepositoryCompanion, SharedCFlow<T>, SharedMenuRepositoryCompanion, SharedMenuService, SharedEndPoints, SharedEndPointsMenu, SharedCommonApiClient, SharedKtor_client_coreHttpClient, SharedLocalApiClient, SharedKotlinUnit, SharedLandingRepository, SharedMenuRepository, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinThrowable, SharedKotlinArray<T>, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKtor_client_coreHttpClientEngineConfig, SharedKtor_client_coreHttpClientConfig<T>, SharedKtor_client_coreHttpRequestBuilder, SharedKtor_client_coreHttpClientCall, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedKtor_client_coreHttpReceivePipeline, SharedKtor_client_coreHttpRequestPipeline, SharedKtor_client_coreHttpResponsePipeline, SharedKtor_client_coreHttpSendPipeline, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKtor_client_coreHttpRequestData, SharedKtor_client_coreHttpResponseData, SharedKtor_client_coreProxyConfig, SharedKtor_httpHeadersBuilder, SharedKtor_client_coreHttpRequestBuilderCompanion, SharedKtor_httpURLBuilder, SharedKtor_httpHttpMethod, SharedKtor_client_coreHttpClientCallCompanion, SharedKtor_client_coreTypeInfo, SharedKtor_client_coreHttpResponse, SharedKtor_utilsAttributeKey<T>, SharedKotlinAbstractCoroutineContextElement, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedKtor_utilsPipelinePhase, SharedKtor_utilsPipeline<TSubject, TContext>, SharedKtor_client_coreHttpReceivePipelinePhases, SharedKtor_client_coreHttpRequestPipelinePhases, SharedKtor_client_coreHttpResponsePipelinePhases, SharedKtor_client_coreHttpResponseContainer, SharedKtor_client_coreHttpSendPipelinePhases, SharedKtor_httpUrl, SharedKtor_httpOutgoingContent, SharedKtor_httpHttpStatusCode, SharedKtor_utilsGMTDate, SharedKtor_httpHttpProtocolVersion, SharedKtor_utilsStringValuesBuilder, SharedKtor_httpURLProtocol, SharedKtor_httpParametersBuilder, SharedKtor_httpURLBuilderCompanion, SharedKotlinCancellationException, SharedKtor_httpHttpMethodCompanion, SharedKtor_ioMemory, SharedKtor_ioIoBuffer, SharedKotlinByteArray, SharedKtor_ioByteReadPacket, SharedKtor_ioByteOrder, SharedKotlinAbstractCoroutineContextKey<B, E>, SharedKtor_httpUrlCompanion, SharedKtor_httpContentType, SharedKtor_httpHttpStatusCodeCompanion, SharedKtor_utilsGMTDateCompanion, SharedKtor_utilsWeekDay, SharedKtor_utilsMonth, SharedKtor_httpHttpProtocolVersionCompanion, SharedKtor_httpURLProtocolCompanion, SharedKtor_httpUrlEncodingOption, SharedKtor_ioMemoryCompanion, SharedKtor_ioBufferCompanion, SharedKtor_ioBuffer, SharedKtor_ioChunkBuffer, SharedKtor_ioChunkBufferCompanion, SharedKotlinCharArray, SharedKtor_ioIoBufferCompanion, SharedKotlinByteIterator, SharedKtor_ioAbstractInputCompanion, SharedKtor_ioAbstractInput, SharedKtor_ioByteReadPacketBaseCompanion, SharedKtor_ioByteReadPacketBase, SharedKtor_ioByteReadPacketPlatformBase, SharedKtor_ioByteReadPacketCompanion, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKtor_ioByteOrderCompanion, SharedKotlinKTypeProjection, SharedKtor_httpHeaderValueParam, SharedKtor_httpHeaderValueWithParametersCompanion, SharedKtor_httpHeaderValueWithParameters, SharedKtor_httpContentTypeCompanion, SharedKtor_utilsWeekDayCompanion, SharedKtor_utilsMonthCompanion, SharedKotlinx_coroutines_coreAtomicDesc, SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, SharedKotlinCharIterator, SharedKotlinKVariance, SharedKotlinKTypeProjectionCompanion, SharedKotlinx_coroutines_coreAtomicOp<__contravariant T>, SharedKotlinx_coroutines_coreOpDescriptor, SharedKotlinx_coroutines_coreLockFreeLinkedListNode, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol SharedLandingPageData, SharedLandingPageComponent, SharedComponentDetailStoryItem, SharedTitleData, SharedCtaData, SharedImageData, SharedTimestampData, SharedHeroMediaType, SharedStoryDescriptionData, SharedByLineData, SharedDurationType, SharedSubTitleData, SharedSpotLightRedirectionData, SharedSubscriptionImageData, SharedSubscriptionPlaceholder, SharedInteractiveViewMoreTitle, SharedInteractiveViewMoreUrl, SharedCiaWidgetData, SharedKotlinx_serialization_coreKSerializer, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreFlow, SharedCloseable, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinCoroutineContext, SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable, SharedKtor_client_coreHttpClientEngine, SharedKtor_client_coreHttpClientEngineCapability, SharedKtor_utilsAttributes, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinIterator, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContextKey, SharedKtor_client_coreHttpClientFeature, SharedKtor_httpHttpMessageBuilder, SharedKotlinx_coroutines_coreJob, SharedKtor_ioByteReadChannel, SharedKtor_utilsTypeInfo, SharedKtor_client_coreHttpRequest, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedKotlinSuspendFunction2, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKtor_httpHeaders, SharedKtor_utilsStringValues, SharedKotlinMapEntry, SharedKotlinx_coroutines_coreChildHandle, SharedKotlinx_coroutines_coreChildJob, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinSequence, SharedKotlinx_coroutines_coreSelectClause0, SharedKtor_ioReadSession, SharedKotlinSuspendFunction1, SharedKotlinAppendable, SharedKotlinKType, SharedKtor_httpHttpMessage, SharedKotlinFunction, SharedKtor_httpParameters, SharedKotlinComparable, SharedKotlinx_coroutines_coreParentJob, SharedKotlinx_coroutines_coreSelectInstance, SharedKotlinSuspendFunction0, SharedKtor_ioObjectPool, SharedKtor_ioInput, SharedKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("MenuData")))
@interface SharedMenuData : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuData.Nothing")))
@interface SharedMenuDataNothing : SharedMenuData
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)nothing __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuDataNothing *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuData.WithMenuData")))
@interface SharedMenuDataWithMenuData : SharedMenuData
- (instancetype)initWithBottomMenus:(NSArray<SharedMenuItem *> *)bottomMenus topMenus:(NSArray<SharedMenuItem *> *)topMenus __attribute__((swift_name("init(bottomMenus:topMenus:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSArray<SharedMenuItem *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedMenuItem *> *)component2 __attribute__((swift_name("component2()")));
- (SharedMenuDataWithMenuData *)doCopyBottomMenus:(NSArray<SharedMenuItem *> *)bottomMenus topMenus:(NSArray<SharedMenuItem *> *)topMenus __attribute__((swift_name("doCopy(bottomMenus:topMenus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedMenuItem *> *bottomMenus __attribute__((swift_name("bottomMenus")));
@property (readonly) NSArray<SharedMenuItem *> *topMenus __attribute__((swift_name("topMenus")));
@end;

__attribute__((swift_name("MenuItem")))
@interface SharedMenuItem : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItem.None")))
@interface SharedMenuItemNone : SharedMenuItem
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuItemNone *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItem.WithAbsoluteUrl")))
@interface SharedMenuItemWithAbsoluteUrl : SharedMenuItem
- (instancetype)initWithTitle:(NSString *)title url:(NSString *)url __attribute__((swift_name("init(title:url:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedMenuItemWithAbsoluteUrl *)doCopyTitle:(NSString *)title url:(NSString *)url __attribute__((swift_name("doCopy(title:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItem.WithLandingPage")))
@interface SharedMenuItemWithLandingPage : SharedMenuItem
- (instancetype)initWithTitle:(NSString *)title id:(NSString *)id type:(SharedMenuType *)type __attribute__((swift_name("init(title:id:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedMenuType *)component3 __attribute__((swift_name("component3()")));
- (SharedMenuItemWithLandingPage *)doCopyTitle:(NSString *)title id:(NSString *)id type:(SharedMenuType *)type __attribute__((swift_name("doCopy(title:id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) SharedMenuType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("MenuType")))
@interface SharedMenuType : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuType.Article")))
@interface SharedMenuTypeArticle : SharedMenuType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)article __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuTypeArticle *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuType.External")))
@interface SharedMenuTypeExternal : SharedMenuType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)external __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuTypeExternal *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuType.LandingPage")))
@interface SharedMenuTypeLandingPage : SharedMenuType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)landingPage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuTypeLandingPage *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuType.Minute")))
@interface SharedMenuTypeMinute : SharedMenuType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)minute __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuTypeMinute *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuType.Video")))
@interface SharedMenuTypeVideo : SharedMenuType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)video __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuTypeVideo *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("ComponentLabel")))
@interface SharedComponentLabel : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentLabel.None")))
@interface SharedComponentLabelNone : SharedComponentLabel
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentLabelNone *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentLabel.WithLabel")))
@interface SharedComponentLabelWithLabel : SharedComponentLabel
- (instancetype)initWithLabel:(NSString *)label __attribute__((swift_name("init(label:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedComponentLabelWithLabel *)doCopyLabel:(NSString *)label __attribute__((swift_name("doCopy(label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end;

__attribute__((swift_name("ComponentType")))
@interface SharedComponentType : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentType.ciaWidget")))
@interface SharedComponentTypeCiaWidget : SharedComponentType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)ciaWidget __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentTypeCiaWidget *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentType.defaultComponentType")))
@interface SharedComponentTypeDefaultComponentType : SharedComponentType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)defaultComponentType __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentTypeDefaultComponentType *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentType.dynamicListing")))
@interface SharedComponentTypeDynamicListing : SharedComponentType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)dynamicListing __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentTypeDynamicListing *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentType.interactive")))
@interface SharedComponentTypeInteractive : SharedComponentType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)interactive __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentTypeInteractive *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentType.spotlight")))
@interface SharedComponentTypeSpotlight : SharedComponentType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)spotlight __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentTypeSpotlight *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentType.subscription")))
@interface SharedComponentTypeSubscription : SharedComponentType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)subscription __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentTypeSubscription *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("LandingPageData")))
@protocol SharedLandingPageData
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingPageError")))
@interface SharedLandingPageError : SharedBase <SharedLandingPageData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)landingPageError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLandingPageError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingPageNative")))
@interface SharedLandingPageNative : SharedBase <SharedLandingPageData>
- (instancetype)initWithLoadedComponents:(NSArray<id<SharedLandingPageComponent>> *)loadedComponents lazyLoadComponents:(NSArray<SharedLazyLoadComponent *> *)lazyLoadComponents __attribute__((swift_name("init(loadedComponents:lazyLoadComponents:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id<SharedLandingPageComponent>> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedLazyLoadComponent *> *)component2 __attribute__((swift_name("component2()")));
- (SharedLandingPageNative *)doCopyLoadedComponents:(NSArray<id<SharedLandingPageComponent>> *)loadedComponents lazyLoadComponents:(NSArray<SharedLazyLoadComponent *> *)lazyLoadComponents __attribute__((swift_name("doCopy(loadedComponents:lazyLoadComponents:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedLazyLoadComponent *> *lazyLoadComponents __attribute__((swift_name("lazyLoadComponents")));
@property (readonly) NSArray<id<SharedLandingPageComponent>> *loadedComponents __attribute__((swift_name("loadedComponents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingPageWithWebView")))
@interface SharedLandingPageWithWebView : SharedBase <SharedLandingPageData>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedLandingPageWithWebView *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("LazyLoadComponent")))
@interface SharedLazyLoadComponent : SharedBase
- (instancetype)initWithUuid:(NSString *)uuid viewMode:(NSString *)viewMode labelDisplay:(BOOL)labelDisplay label:(SharedComponentLabel *)label __attribute__((swift_name("init(uuid:viewMode:labelDisplay:label:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedComponentLabel *label __attribute__((swift_name("label")));
@property (readonly) BOOL labelDisplay __attribute__((swift_name("labelDisplay")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@property (readonly) NSString *viewMode __attribute__((swift_name("viewMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LazyLoadComponent.InfiniteLazyComponent")))
@interface SharedLazyLoadComponentInfiniteLazyComponent : SharedLazyLoadComponent
- (instancetype)initWithPageCount:(int32_t)pageCount lazyUuid:(NSString *)lazyUuid lazyViewMode:(NSString *)lazyViewMode lazyLabelDisplay:(BOOL)lazyLabelDisplay lazyLabel:(SharedComponentLabel *)lazyLabel __attribute__((swift_name("init(pageCount:lazyUuid:lazyViewMode:lazyLabelDisplay:lazyLabel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUuid:(NSString *)uuid viewMode:(NSString *)viewMode labelDisplay:(BOOL)labelDisplay label:(SharedComponentLabel *)label __attribute__((swift_name("init(uuid:viewMode:labelDisplay:label:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (SharedLazyLoadComponentInfiniteLazyComponent *)doCopyPageCount:(int32_t)pageCount lazyUuid:(NSString *)lazyUuid lazyViewMode:(NSString *)lazyViewMode lazyLabelDisplay:(BOOL)lazyLabelDisplay lazyLabel:(SharedComponentLabel *)lazyLabel __attribute__((swift_name("doCopy(pageCount:lazyUuid:lazyViewMode:lazyLabelDisplay:lazyLabel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t pageCount __attribute__((swift_name("pageCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LazyLoadComponent.LazyComponent")))
@interface SharedLazyLoadComponentLazyComponent : SharedLazyLoadComponent
- (instancetype)initWithLazyUuid:(NSString *)lazyUuid lazyViewMode:(NSString *)lazyViewMode lazyLabelDisplay:(BOOL)lazyLabelDisplay label:(SharedComponentLabel *)label __attribute__((swift_name("init(lazyUuid:lazyViewMode:lazyLabelDisplay:label:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUuid:(NSString *)uuid viewMode:(NSString *)viewMode labelDisplay:(BOOL)labelDisplay label:(SharedComponentLabel *)label __attribute__((swift_name("init(uuid:viewMode:labelDisplay:label:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("ViewModeType")))
@interface SharedViewModeType : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.aLeft5s5p")))
@interface SharedViewModeTypeALeft5s5p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)aLeft5s5p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeALeft5s5p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.aLeft5s5pAds")))
@interface SharedViewModeTypeALeft5s5pAds : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)aLeft5s5pAds __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeALeft5s5pAds *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.aMiddle8s6p")))
@interface SharedViewModeTypeAMiddle8s6p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)aMiddle8s6p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeAMiddle8s6p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.cLeft5s5p")))
@interface SharedViewModeTypeCLeft5s5p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)cLeft5s5p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeCLeft5s5p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.carousel")))
@interface SharedViewModeTypeCarousel : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)carousel __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeCarousel *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.carouselJournalistsFull")))
@interface SharedViewModeTypeCarouselJournalistsFull : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)carouselJournalistsFull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeCarouselJournalistsFull *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.carouselWithoutNumbersFullWidth")))
@interface SharedViewModeTypeCarouselWithoutNumbersFullWidth : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)carouselWithoutNumbersFullWidth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeCarouselWithoutNumbersFullWidth *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.defaultViewMode")))
@interface SharedViewModeTypeDefaultViewMode : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)defaultViewMode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeDefaultViewMode *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.featuredImageLeft8s5p")))
@interface SharedViewModeTypeFeaturedImageLeft8s5p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)featuredImageLeft8s5p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeFeaturedImageLeft8s5p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.featuredImageLeft9s6p")))
@interface SharedViewModeTypeFeaturedImageLeft9s6p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)featuredImageLeft9s6p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeFeaturedImageLeft9s6p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.featuredImageMiddle8s4p")))
@interface SharedViewModeTypeFeaturedImageMiddle8s4p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)featuredImageMiddle8s4p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeFeaturedImageMiddle8s4p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.featuredVideoLeft5s5p")))
@interface SharedViewModeTypeFeaturedVideoLeft5s5p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)featuredVideoLeft5s5p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeFeaturedVideoLeft5s5p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.full")))
@interface SharedViewModeTypeFull : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)full __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeFull *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.infinitListing")))
@interface SharedViewModeTypeInfinitListing : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)infinitListing __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeInfinitListing *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.infiniteScrollListingTdy")))
@interface SharedViewModeTypeInfiniteScrollListingTdy : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)infiniteScrollListingTdy __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeInfiniteScrollListingTdy *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.largeTiles2s2p")))
@interface SharedViewModeTypeLargeTiles2s2p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)largeTiles2s2p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeLargeTiles2s2p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.left7s5p")))
@interface SharedViewModeTypeLeft7s5p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)left7s5p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeLeft7s5p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.listing4s4p")))
@interface SharedViewModeTypeListing4s4p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)listing4s4p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeListing4s4p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.middle9s5p")))
@interface SharedViewModeTypeMiddle9s5p : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)middle9s5p __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeMiddle9s5p *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.minuteFullWidth")))
@interface SharedViewModeTypeMinuteFullWidth : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)minuteFullWidth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeMinuteFullWidth *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeType.numberedCarousel")))
@interface SharedViewModeTypeNumberedCarousel : SharedViewModeType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)numberedCarousel __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedViewModeTypeNumberedCarousel *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("LandingPageComponent")))
@protocol SharedLandingPageComponent
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfiniteScrollListComponent")))
@interface SharedInfiniteScrollListComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (SharedInfiniteScrollListComponent *)doCopyUuid:(NSString *)uuid storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentError")))
@interface SharedComponentError : SharedBase <SharedLandingPageComponent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)componentError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultListingComponent")))
@interface SharedDefaultListingComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedDefaultListingComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiddleEightStoriesSixPicsComponent")))
@interface SharedMiddleEightStoriesSixPicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedMiddleEightStoriesSixPicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("ByLineData")))
@protocol SharedByLineData
@required
@end;

__attribute__((swift_name("ComponentDetailStoryItem")))
@protocol SharedComponentDetailStoryItem
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarouselItem")))
@interface SharedCarouselItem : SharedBase <SharedComponentDetailStoryItem>
- (instancetype)initWithNid:(NSString *)nid uuid:(NSString *)uuid index:(int32_t)index shareUrl:(NSString *)shareUrl title:(NSString *)title imageData:(id<SharedImageData>)imageData timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked __attribute__((swift_name("init(nid:uuid:index:shareUrl:title:imageData:timeStamp:mediaTypeData:isBookmarked:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (id<SharedImageData>)component6 __attribute__((swift_name("component6()")));
- (id<SharedTimestampData>)component7 __attribute__((swift_name("component7()")));
- (id<SharedHeroMediaType>)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedCarouselItem *)doCopyNid:(NSString *)nid uuid:(NSString *)uuid index:(int32_t)index shareUrl:(NSString *)shareUrl title:(NSString *)title imageData:(id<SharedImageData>)imageData timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked __attribute__((swift_name("doCopy(nid:uuid:index:shareUrl:title:imageData:timeStamp:mediaTypeData:isBookmarked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedImageData> imageData __attribute__((swift_name("imageData")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) BOOL isBookmarked __attribute__((swift_name("isBookmarked")));
@property (readonly) id<SharedHeroMediaType> mediaTypeData __attribute__((swift_name("mediaTypeData")));
@property (readonly) NSString *nid __attribute__((swift_name("nid")));
@property (readonly) NSString *shareUrl __attribute__((swift_name("shareUrl")));
@property (readonly) id<SharedTimestampData> timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaComponentCarousel")))
@interface SharedCiaComponentCarousel : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ciaStoryList:(NSArray<SharedCiaStoryItem *> *)ciaStoryList isDarkMode:(BOOL)isDarkMode ctaData:(id<SharedCtaData>)ctaData __attribute__((swift_name("init(uuid:title:ciaStoryList:isDarkMode:ctaData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedCiaStoryItem *> *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (id<SharedCtaData>)component5 __attribute__((swift_name("component5()")));
- (SharedCiaComponentCarousel *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ciaStoryList:(NSArray<SharedCiaStoryItem *> *)ciaStoryList isDarkMode:(BOOL)isDarkMode ctaData:(id<SharedCtaData>)ctaData __attribute__((swift_name("doCopy(uuid:title:ciaStoryList:isDarkMode:ctaData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCiaStoryItem *> *ciaStoryList __attribute__((swift_name("ciaStoryList")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaComponentFiveStoriesFiveFivePics")))
@interface SharedCiaComponentFiveStoriesFiveFivePics : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ciaStoryList:(NSArray<SharedCiaStoryItem *> *)ciaStoryList isDarkMode:(BOOL)isDarkMode ctaData:(id<SharedCtaData>)ctaData __attribute__((swift_name("init(uuid:title:ciaStoryList:isDarkMode:ctaData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedCiaStoryItem *> *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (id<SharedCtaData>)component5 __attribute__((swift_name("component5()")));
- (SharedCiaComponentFiveStoriesFiveFivePics *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ciaStoryList:(NSArray<SharedCiaStoryItem *> *)ciaStoryList isDarkMode:(BOOL)isDarkMode ctaData:(id<SharedCtaData>)ctaData __attribute__((swift_name("doCopy(uuid:title:ciaStoryList:isDarkMode:ctaData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCiaStoryItem *> *ciaStoryList __attribute__((swift_name("ciaStoryList")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaComponentNumberedCarousel")))
@interface SharedCiaComponentNumberedCarousel : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ciaStoryList:(NSArray<SharedCiaStoryItem *> *)ciaStoryList isDarkMode:(BOOL)isDarkMode ctaData:(id<SharedCtaData>)ctaData __attribute__((swift_name("init(uuid:title:ciaStoryList:isDarkMode:ctaData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedCiaStoryItem *> *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (id<SharedCtaData>)component5 __attribute__((swift_name("component5()")));
- (SharedCiaComponentNumberedCarousel *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ciaStoryList:(NSArray<SharedCiaStoryItem *> *)ciaStoryList isDarkMode:(BOOL)isDarkMode ctaData:(id<SharedCtaData>)ctaData __attribute__((swift_name("doCopy(uuid:title:ciaStoryList:isDarkMode:ctaData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCiaStoryItem *> *ciaStoryList __attribute__((swift_name("ciaStoryList")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("CiaStoryItem")))
@interface SharedCiaStoryItem : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaStoryItem.None")))
@interface SharedCiaStoryItemNone : SharedCiaStoryItem
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCiaStoryItemNone *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaStoryItem.WithCiaStoryItem")))
@interface SharedCiaStoryItemWithCiaStoryItem : SharedCiaStoryItem
- (instancetype)initWithTitle:(NSString *)title id:(NSString *)id contentId:(NSString *)contentId url:(NSString *)url imageUrl:(id<SharedImageData>)imageUrl clickTracker:(NSString *)clickTracker date:(id<SharedTimestampData>)date __attribute__((swift_name("init(title:id:contentId:url:imageUrl:clickTracker:date:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedImageData>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (id<SharedTimestampData>)component7 __attribute__((swift_name("component7()")));
- (SharedCiaStoryItemWithCiaStoryItem *)doCopyTitle:(NSString *)title id:(NSString *)id contentId:(NSString *)contentId url:(NSString *)url imageUrl:(id<SharedImageData>)imageUrl clickTracker:(NSString *)clickTracker date:(id<SharedTimestampData>)date __attribute__((swift_name("doCopy(title:id:contentId:url:imageUrl:clickTracker:date:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clickTracker __attribute__((swift_name("clickTracker")));
@property (readonly) NSString *contentId __attribute__((swift_name("contentId")));
@property (readonly) id<SharedTimestampData> date __attribute__((swift_name("date")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) id<SharedImageData> imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentDetailStoryItemError")))
@interface SharedComponentDetailStoryItemError : SharedBase <SharedComponentDetailStoryItem>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)componentDetailStoryItemError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentDetailStoryItemError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("CtaData")))
@protocol SharedCtaData
@required
@end;

__attribute__((swift_name("HeroMediaType")))
@protocol SharedHeroMediaType
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultMediaType")))
@interface SharedDefaultMediaType : SharedBase <SharedHeroMediaType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)defaultMediaType __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDefaultMediaType *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("DurationType")))
@protocol SharedDurationType
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturedStoryItem")))
@interface SharedFeaturedStoryItem : SharedBase <SharedComponentDetailStoryItem>
- (instancetype)initWithNid:(NSString *)nid uuid:(NSString *)uuid shareUrl:(NSString *)shareUrl title:(NSString *)title description:(id<SharedStoryDescriptionData>)description imageData:(id<SharedImageData>)imageData byline:(id<SharedByLineData>)byline timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked __attribute__((swift_name("init(nid:uuid:shareUrl:title:description:imageData:byline:timeStamp:mediaTypeData:isBookmarked:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedStoryDescriptionData>)component5 __attribute__((swift_name("component5()")));
- (id<SharedImageData>)component6 __attribute__((swift_name("component6()")));
- (id<SharedByLineData>)component7 __attribute__((swift_name("component7()")));
- (id<SharedTimestampData>)component8 __attribute__((swift_name("component8()")));
- (id<SharedHeroMediaType>)component9 __attribute__((swift_name("component9()")));
- (SharedFeaturedStoryItem *)doCopyNid:(NSString *)nid uuid:(NSString *)uuid shareUrl:(NSString *)shareUrl title:(NSString *)title description:(id<SharedStoryDescriptionData>)description imageData:(id<SharedImageData>)imageData byline:(id<SharedByLineData>)byline timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked __attribute__((swift_name("doCopy(nid:uuid:shareUrl:title:description:imageData:byline:timeStamp:mediaTypeData:isBookmarked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedByLineData> byline __attribute__((swift_name("byline")));
@property (readonly) id<SharedStoryDescriptionData> description_ __attribute__((swift_name("description_")));
@property (readonly) id<SharedImageData> imageData __attribute__((swift_name("imageData")));
@property (readonly) BOOL isBookmarked __attribute__((swift_name("isBookmarked")));
@property (readonly) id<SharedHeroMediaType> mediaTypeData __attribute__((swift_name("mediaTypeData")));
@property (readonly) NSString *nid __attribute__((swift_name("nid")));
@property (readonly) NSString *shareUrl __attribute__((swift_name("shareUrl")));
@property (readonly) id<SharedTimestampData> timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("ImageData")))
@protocol SharedImageData
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JournalistCarouselItem")))
@interface SharedJournalistCarouselItem : SharedBase <SharedComponentDetailStoryItem>
- (instancetype)initWithNid:(NSString *)nid uuid:(NSString *)uuid authorName:(NSString *)authorName authorDescription:(NSString *)authorDescription imageData:(id<SharedImageData>)imageData __attribute__((swift_name("init(nid:uuid:authorName:authorDescription:imageData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedImageData>)component5 __attribute__((swift_name("component5()")));
- (SharedJournalistCarouselItem *)doCopyNid:(NSString *)nid uuid:(NSString *)uuid authorName:(NSString *)authorName authorDescription:(NSString *)authorDescription imageData:(id<SharedImageData>)imageData __attribute__((swift_name("doCopy(nid:uuid:authorName:authorDescription:imageData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authorDescription __attribute__((swift_name("authorDescription")));
@property (readonly) NSString *authorName __attribute__((swift_name("authorName")));
@property (readonly) id<SharedImageData> imageData __attribute__((swift_name("imageData")));
@property (readonly) NSString *nid __attribute__((swift_name("nid")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MinuteStoryItem")))
@interface SharedMinuteStoryItem : SharedBase <SharedComponentDetailStoryItem>
- (instancetype)initWithNid:(NSString *)nid uuid:(NSString *)uuid title:(NSString *)title imageData:(id<SharedImageData>)imageData __attribute__((swift_name("init(nid:uuid:title:imageData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (id<SharedImageData>)component4 __attribute__((swift_name("component4()")));
- (SharedMinuteStoryItem *)doCopyNid:(NSString *)nid uuid:(NSString *)uuid title:(NSString *)title imageData:(id<SharedImageData>)imageData __attribute__((swift_name("doCopy(nid:uuid:title:imageData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedImageData> imageData __attribute__((swift_name("imageData")));
@property (readonly) NSString *nid __attribute__((swift_name("nid")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoreThanOneMinute")))
@interface SharedMoreThanOneMinute : SharedBase <SharedDurationType>
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedMoreThanOneMinute *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoImage")))
@interface SharedNoImage : SharedBase <SharedImageData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noImage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNoImage *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("TimestampData")))
@protocol SharedTimestampData
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoTimeStamp")))
@interface SharedNoTimeStamp : SharedBase <SharedTimestampData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noTimeStamp __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNoTimeStamp *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("None")))
@interface SharedNone : SharedBase <SharedDurationType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNone *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberedCarouselItem")))
@interface SharedNumberedCarouselItem : SharedBase <SharedComponentDetailStoryItem>
- (instancetype)initWithNid:(NSString *)nid uuid:(NSString *)uuid index:(int32_t)index shareUrl:(NSString *)shareUrl title:(NSString *)title imageData:(id<SharedImageData>)imageData timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked byline:(id<SharedByLineData>)byline __attribute__((swift_name("init(nid:uuid:index:shareUrl:title:imageData:timeStamp:mediaTypeData:isBookmarked:byline:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedByLineData>)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (id<SharedImageData>)component6 __attribute__((swift_name("component6()")));
- (id<SharedTimestampData>)component7 __attribute__((swift_name("component7()")));
- (id<SharedHeroMediaType>)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedNumberedCarouselItem *)doCopyNid:(NSString *)nid uuid:(NSString *)uuid index:(int32_t)index shareUrl:(NSString *)shareUrl title:(NSString *)title imageData:(id<SharedImageData>)imageData timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked byline:(id<SharedByLineData>)byline __attribute__((swift_name("doCopy(nid:uuid:index:shareUrl:title:imageData:timeStamp:mediaTypeData:isBookmarked:byline:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedByLineData> byline __attribute__((swift_name("byline")));
@property (readonly) id<SharedImageData> imageData __attribute__((swift_name("imageData")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) BOOL isBookmarked __attribute__((swift_name("isBookmarked")));
@property (readonly) id<SharedHeroMediaType> mediaTypeData __attribute__((swift_name("mediaTypeData")));
@property (readonly) NSString *nid __attribute__((swift_name("nid")));
@property (readonly) NSString *shareUrl __attribute__((swift_name("shareUrl")));
@property (readonly) id<SharedTimestampData> timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneMinute")))
@interface SharedOneMinute : SharedBase <SharedDurationType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oneMinute __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOneMinute *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("StoryDescriptionData")))
@protocol SharedStoryDescriptionData
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoryItemWithLeftImage")))
@interface SharedStoryItemWithLeftImage : SharedBase <SharedComponentDetailStoryItem>
- (instancetype)initWithNid:(NSString *)nid uuid:(NSString *)uuid shareUrl:(NSString *)shareUrl title:(NSString *)title imageData:(id<SharedImageData>)imageData byline:(id<SharedByLineData>)byline timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked __attribute__((swift_name("init(nid:uuid:shareUrl:title:imageData:byline:timeStamp:mediaTypeData:isBookmarked:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedImageData>)component5 __attribute__((swift_name("component5()")));
- (id<SharedByLineData>)component6 __attribute__((swift_name("component6()")));
- (id<SharedTimestampData>)component7 __attribute__((swift_name("component7()")));
- (id<SharedHeroMediaType>)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedStoryItemWithLeftImage *)doCopyNid:(NSString *)nid uuid:(NSString *)uuid shareUrl:(NSString *)shareUrl title:(NSString *)title imageData:(id<SharedImageData>)imageData byline:(id<SharedByLineData>)byline timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked __attribute__((swift_name("doCopy(nid:uuid:shareUrl:title:imageData:byline:timeStamp:mediaTypeData:isBookmarked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedByLineData> byline __attribute__((swift_name("byline")));
@property (readonly) id<SharedImageData> imageData __attribute__((swift_name("imageData")));
@property (readonly) BOOL isBookmarked __attribute__((swift_name("isBookmarked")));
@property (readonly) id<SharedHeroMediaType> mediaTypeData __attribute__((swift_name("mediaTypeData")));
@property (readonly) NSString *nid __attribute__((swift_name("nid")));
@property (readonly) NSString *shareUrl __attribute__((swift_name("shareUrl")));
@property (readonly) id<SharedTimestampData> timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoryItemWithoutLeftImage")))
@interface SharedStoryItemWithoutLeftImage : SharedBase <SharedComponentDetailStoryItem>
- (instancetype)initWithNid:(NSString *)nid uuid:(NSString *)uuid shareUrl:(NSString *)shareUrl title:(NSString *)title byline:(id<SharedByLineData>)byline timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked __attribute__((swift_name("init(nid:uuid:shareUrl:title:byline:timeStamp:mediaTypeData:isBookmarked:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedByLineData>)component5 __attribute__((swift_name("component5()")));
- (id<SharedTimestampData>)component6 __attribute__((swift_name("component6()")));
- (id<SharedHeroMediaType>)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (SharedStoryItemWithoutLeftImage *)doCopyNid:(NSString *)nid uuid:(NSString *)uuid shareUrl:(NSString *)shareUrl title:(NSString *)title byline:(id<SharedByLineData>)byline timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked __attribute__((swift_name("doCopy(nid:uuid:shareUrl:title:byline:timeStamp:mediaTypeData:isBookmarked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedByLineData> byline __attribute__((swift_name("byline")));
@property (readonly) BOOL isBookmarked __attribute__((swift_name("isBookmarked")));
@property (readonly) id<SharedHeroMediaType> mediaTypeData __attribute__((swift_name("mediaTypeData")));
@property (readonly) NSString *nid __attribute__((swift_name("nid")));
@property (readonly) NSString *shareUrl __attribute__((swift_name("shareUrl")));
@property (readonly) id<SharedTimestampData> timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("SubTitleData")))
@protocol SharedSubTitleData
@required
@end;

__attribute__((swift_name("TitleData")))
@protocol SharedTitleData
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithArticleDetailCta")))
@interface SharedWithArticleDetailCta : SharedBase <SharedCtaData>
- (instancetype)initWithTitle:(NSString *)title articleDetailId:(NSString *)articleDetailId __attribute__((swift_name("init(title:articleDetailId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedWithArticleDetailCta *)doCopyTitle:(NSString *)title articleDetailId:(NSString *)articleDetailId __attribute__((swift_name("doCopy(title:articleDetailId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *articleDetailId __attribute__((swift_name("articleDetailId")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithByLineArticle")))
@interface SharedWithByLineArticle : SharedBase <SharedByLineData>
- (instancetype)initWithAuthorName:(NSString *)authorName __attribute__((swift_name("init(authorName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithByLineArticle *)doCopyAuthorName:(NSString *)authorName __attribute__((swift_name("doCopy(authorName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authorName __attribute__((swift_name("authorName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithByLineVideo")))
@interface SharedWithByLineVideo : SharedBase <SharedByLineData>
- (instancetype)initWithAuthorName:(NSString *)authorName __attribute__((swift_name("init(authorName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithByLineVideo *)doCopyAuthorName:(NSString *)authorName __attribute__((swift_name("doCopy(authorName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authorName __attribute__((swift_name("authorName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithDaysAgo")))
@interface SharedWithDaysAgo : SharedBase <SharedTimestampData>
- (instancetype)initWithDays:(NSString *)days __attribute__((swift_name("init(days:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithDaysAgo *)doCopyDays:(NSString *)days __attribute__((swift_name("doCopy(days:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *days __attribute__((swift_name("days")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithDescription")))
@interface SharedWithDescription : SharedBase <SharedStoryDescriptionData>
- (instancetype)initWithDescription:(NSString *)description __attribute__((swift_name("init(description:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithDescription *)doCopyDescription:(NSString *)description __attribute__((swift_name("doCopy(description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithGalleryCount")))
@interface SharedWithGalleryCount : SharedBase <SharedHeroMediaType>
- (instancetype)initWithCount:(int32_t)count __attribute__((swift_name("init(count:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (SharedWithGalleryCount *)doCopyCount:(int32_t)count __attribute__((swift_name("doCopy(count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithHourAgo")))
@interface SharedWithHourAgo : SharedBase <SharedTimestampData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withHourAgo __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithHourAgo *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithHoursAgo")))
@interface SharedWithHoursAgo : SharedBase <SharedTimestampData>
- (instancetype)initWithHours:(NSString *)hours __attribute__((swift_name("init(hours:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithHoursAgo *)doCopyHours:(NSString *)hours __attribute__((swift_name("doCopy(hours:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *hours __attribute__((swift_name("hours")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithImage")))
@interface SharedWithImage : SharedBase <SharedImageData>
- (instancetype)initWithImageUrl:(NSString *)imageUrl __attribute__((swift_name("init(imageUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithImage *)doCopyImageUrl:(NSString *)imageUrl __attribute__((swift_name("doCopy(imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithImageAndByLine")))
@interface SharedWithImageAndByLine : SharedBase <SharedImageData>
- (instancetype)initWithImageUrl:(NSString *)imageUrl byLine:(NSString *)byLine __attribute__((swift_name("init(imageUrl:byLine:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedWithImageAndByLine *)doCopyImageUrl:(NSString *)imageUrl byLine:(NSString *)byLine __attribute__((swift_name("doCopy(imageUrl:byLine:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *byLine __attribute__((swift_name("byLine")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithLandingPageCta")))
@interface SharedWithLandingPageCta : SharedBase <SharedCtaData>
- (instancetype)initWithTitle:(NSString *)title landingPageId:(NSString *)landingPageId __attribute__((swift_name("init(title:landingPageId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedWithLandingPageCta *)doCopyTitle:(NSString *)title landingPageId:(NSString *)landingPageId __attribute__((swift_name("doCopy(title:landingPageId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *landingPageId __attribute__((swift_name("landingPageId")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithLessThanOneHour")))
@interface SharedWithLessThanOneHour : SharedBase <SharedTimestampData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withLessThanOneHour __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithLessThanOneHour *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithSubTitle")))
@interface SharedWithSubTitle : SharedBase <SharedSubTitleData>
- (instancetype)initWithTitle:(NSString *)title __attribute__((swift_name("init(title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithSubTitle *)doCopyTitle:(NSString *)title __attribute__((swift_name("doCopy(title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithTitle")))
@interface SharedWithTitle : SharedBase <SharedTitleData>
- (instancetype)initWithTitle:(NSString *)title __attribute__((swift_name("init(title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithTitle *)doCopyTitle:(NSString *)title __attribute__((swift_name("doCopy(title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithVideo")))
@interface SharedWithVideo : SharedBase <SharedHeroMediaType>
- (instancetype)initWithDuration:(id<SharedDurationType>)duration __attribute__((swift_name("init(duration:)"))) __attribute__((objc_designated_initializer));
- (id<SharedDurationType>)component1 __attribute__((swift_name("component1()")));
- (SharedWithVideo *)doCopyDuration:(id<SharedDurationType>)duration __attribute__((swift_name("doCopy(duration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedDurationType> duration __attribute__((swift_name("duration")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithVideoDetailCta")))
@interface SharedWithVideoDetailCta : SharedBase <SharedCtaData>
- (instancetype)initWithTitle:(NSString *)title videoDetailId:(NSString *)videoDetailId __attribute__((swift_name("init(title:videoDetailId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedWithVideoDetailCta *)doCopyTitle:(NSString *)title videoDetailId:(NSString *)videoDetailId __attribute__((swift_name("doCopy(title:videoDetailId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *videoDetailId __attribute__((swift_name("videoDetailId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithWebViewCta")))
@interface SharedWithWebViewCta : SharedBase <SharedCtaData>
- (instancetype)initWithTitle:(NSString *)title webViewUrl:(NSString *)webViewUrl __attribute__((swift_name("init(title:webViewUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedWithWebViewCta *)doCopyTitle:(NSString *)title webViewUrl:(NSString *)webViewUrl __attribute__((swift_name("doCopy(title:webViewUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *webViewUrl __attribute__((swift_name("webViewUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutByLine")))
@interface SharedWithoutByLine : SharedBase <SharedByLineData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutByLine __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutByLine *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutCta")))
@interface SharedWithoutCta : SharedBase <SharedCtaData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutCta __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutCta *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutDescription")))
@interface SharedWithoutDescription : SharedBase <SharedStoryDescriptionData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutDescription __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutDescription *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutImage")))
@interface SharedWithoutImage : SharedBase <SharedImageData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutImage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutImage *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutNumberCarouselItem")))
@interface SharedWithoutNumberCarouselItem : SharedBase <SharedComponentDetailStoryItem>
- (instancetype)initWithNid:(NSString *)nid uuid:(NSString *)uuid shareUrl:(NSString *)shareUrl title:(NSString *)title imageData:(id<SharedImageData>)imageData timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked byline:(id<SharedByLineData>)byline __attribute__((swift_name("init(nid:uuid:shareUrl:title:imageData:timeStamp:mediaTypeData:isBookmarked:byline:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedImageData>)component5 __attribute__((swift_name("component5()")));
- (id<SharedTimestampData>)component6 __attribute__((swift_name("component6()")));
- (id<SharedHeroMediaType>)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (id<SharedByLineData>)component9 __attribute__((swift_name("component9()")));
- (SharedWithoutNumberCarouselItem *)doCopyNid:(NSString *)nid uuid:(NSString *)uuid shareUrl:(NSString *)shareUrl title:(NSString *)title imageData:(id<SharedImageData>)imageData timeStamp:(id<SharedTimestampData>)timeStamp mediaTypeData:(id<SharedHeroMediaType>)mediaTypeData isBookmarked:(BOOL)isBookmarked byline:(id<SharedByLineData>)byline __attribute__((swift_name("doCopy(nid:uuid:shareUrl:title:imageData:timeStamp:mediaTypeData:isBookmarked:byline:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedByLineData> byline __attribute__((swift_name("byline")));
@property (readonly) id<SharedImageData> imageData __attribute__((swift_name("imageData")));
@property (readonly) BOOL isBookmarked __attribute__((swift_name("isBookmarked")));
@property (readonly) id<SharedHeroMediaType> mediaTypeData __attribute__((swift_name("mediaTypeData")));
@property (readonly) NSString *nid __attribute__((swift_name("nid")));
@property (readonly) NSString *shareUrl __attribute__((swift_name("shareUrl")));
@property (readonly) id<SharedTimestampData> timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutSubTitle")))
@interface SharedWithoutSubTitle : SharedBase <SharedSubTitleData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutSubTitle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutSubTitle *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutTitle")))
@interface SharedWithoutTitle : SharedBase <SharedTitleData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutTitle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutTitle *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturedImageLeftEightStoriesFivePicsComponent")))
@interface SharedFeaturedImageLeftEightStoriesFivePicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedFeaturedImageLeftEightStoriesFivePicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfiniteScrollListingTdyComponent")))
@interface SharedInfiniteScrollListingTdyComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid viewMode:(NSString *)viewMode title:(id<SharedTitleData>)title storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList startPage:(int32_t)startPage isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:viewMode:title:storyList:startPage:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (id<SharedTitleData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (SharedInfiniteScrollListingTdyComponent *)doCopyUuid:(NSString *)uuid viewMode:(NSString *)viewMode title:(id<SharedTitleData>)title storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList startPage:(int32_t)startPage isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:viewMode:title:storyList:startPage:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) int32_t startPage __attribute__((swift_name("startPage")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@property (readonly) NSString *viewMode __attribute__((swift_name("viewMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeftFiveStoriesFivePicsAdsComponent")))
@interface SharedLeftFiveStoriesFivePicsAdsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedLeftFiveStoriesFivePicsAdsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarouselJournalistsFullComponent")))
@interface SharedCarouselJournalistsFullComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<SharedJournalistCarouselItem *> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedJournalistCarouselItem *> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedCarouselJournalistsFullComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<SharedJournalistCarouselItem *> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<SharedJournalistCarouselItem *> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiddleNineStoriesFivePicsComponent")))
@interface SharedMiddleNineStoriesFivePicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedMiddleNineStoriesFivePicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotLightComponent")))
@interface SharedSpotLightComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid image:(NSString *)image spotLightRedirectionData:(id<SharedSpotLightRedirectionData>)spotLightRedirectionData __attribute__((swift_name("init(uuid:image:spotLightRedirectionData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (id<SharedSpotLightRedirectionData>)component3 __attribute__((swift_name("component3()")));
- (SharedSpotLightComponent *)doCopyUuid:(NSString *)uuid image:(NSString *)image spotLightRedirectionData:(id<SharedSpotLightRedirectionData>)spotLightRedirectionData __attribute__((swift_name("doCopy(uuid:image:spotLightRedirectionData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) id<SharedSpotLightRedirectionData> spotLightRedirectionData __attribute__((swift_name("spotLightRedirectionData")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("SpotLightRedirectionData")))
@protocol SharedSpotLightRedirectionData
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithArticleDetailAction")))
@interface SharedWithArticleDetailAction : SharedBase <SharedSpotLightRedirectionData>
- (instancetype)initWithArticleDetailId:(NSString *)articleDetailId __attribute__((swift_name("init(articleDetailId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithArticleDetailAction *)doCopyArticleDetailId:(NSString *)articleDetailId __attribute__((swift_name("doCopy(articleDetailId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *articleDetailId __attribute__((swift_name("articleDetailId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithLandingPageAction")))
@interface SharedWithLandingPageAction : SharedBase <SharedSpotLightRedirectionData>
- (instancetype)initWithLandingPageId:(NSString *)landingPageId __attribute__((swift_name("init(landingPageId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithLandingPageAction *)doCopyLandingPageId:(NSString *)landingPageId __attribute__((swift_name("doCopy(landingPageId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *landingPageId __attribute__((swift_name("landingPageId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithVideoDetailAction")))
@interface SharedWithVideoDetailAction : SharedBase <SharedSpotLightRedirectionData>
- (instancetype)initWithVideoDetailId:(NSString *)videoDetailId __attribute__((swift_name("init(videoDetailId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithVideoDetailAction *)doCopyVideoDetailId:(NSString *)videoDetailId __attribute__((swift_name("doCopy(videoDetailId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *videoDetailId __attribute__((swift_name("videoDetailId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithWebViewAction")))
@interface SharedWithWebViewAction : SharedBase <SharedSpotLightRedirectionData>
- (instancetype)initWithWebViewUrl:(NSString *)webViewUrl __attribute__((swift_name("init(webViewUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithWebViewAction *)doCopyWebViewUrl:(NSString *)webViewUrl __attribute__((swift_name("doCopy(webViewUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *webViewUrl __attribute__((swift_name("webViewUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutAction")))
@interface SharedWithoutAction : SharedBase <SharedSpotLightRedirectionData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutAction __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutAction *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LargeTilesTwoStoriesTwoPicsComponent")))
@interface SharedLargeTilesTwoStoriesTwoPicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedLargeTilesTwoStoriesTwoPicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MinuteFullWidthComponent")))
@interface SharedMinuteFullWidthComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title subTitle:(id<SharedSubTitleData>)subTitle ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<SharedMinuteStoryItem *> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:subTitle:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedSubTitleData>)component3 __attribute__((swift_name("component3()")));
- (id<SharedCtaData>)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedMinuteStoryItem *> *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (SharedMinuteFullWidthComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title subTitle:(id<SharedSubTitleData>)subTitle ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<SharedMinuteStoryItem *> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:subTitle:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<SharedMinuteStoryItem *> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedSubTitleData> subTitle __attribute__((swift_name("subTitle")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSubscriptionComponent")))
@interface SharedDefaultSubscriptionComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(NSString *)title policyLabel:(NSString *)policyLabel image:(id<SharedSubscriptionImageData>)image body:(NSString *)body placeHolder:(id<SharedSubscriptionPlaceholder>)placeHolder subscriptionType:(NSString *)subscriptionType __attribute__((swift_name("init(uuid:title:policyLabel:image:body:placeHolder:subscriptionType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (id<SharedSubscriptionImageData>)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (id<SharedSubscriptionPlaceholder>)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (SharedDefaultSubscriptionComponent *)doCopyUuid:(NSString *)uuid title:(NSString *)title policyLabel:(NSString *)policyLabel image:(id<SharedSubscriptionImageData>)image body:(NSString *)body placeHolder:(id<SharedSubscriptionPlaceholder>)placeHolder subscriptionType:(NSString *)subscriptionType __attribute__((swift_name("doCopy(uuid:title:policyLabel:image:body:placeHolder:subscriptionType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) id<SharedSubscriptionImageData> image __attribute__((swift_name("image")));
@property (readonly) id<SharedSubscriptionPlaceholder> placeHolder __attribute__((swift_name("placeHolder")));
@property (readonly) NSString *policyLabel __attribute__((swift_name("policyLabel")));
@property (readonly) NSString *subscriptionType __attribute__((swift_name("subscriptionType")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("SubscriptionImageData")))
@protocol SharedSubscriptionImageData
@required
@end;

__attribute__((swift_name("SubscriptionPlaceholder")))
@protocol SharedSubscriptionPlaceholder
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithSubscriptionImage")))
@interface SharedWithSubscriptionImage : SharedBase <SharedSubscriptionImageData>
- (instancetype)initWithImageUrl:(NSString *)imageUrl __attribute__((swift_name("init(imageUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithSubscriptionImage *)doCopyImageUrl:(NSString *)imageUrl __attribute__((swift_name("doCopy(imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithSubscriptionPlaceholder")))
@interface SharedWithSubscriptionPlaceholder : SharedBase <SharedSubscriptionPlaceholder>
- (instancetype)initWithPlaceholder:(NSString *)placeholder __attribute__((swift_name("init(placeholder:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithSubscriptionPlaceholder *)doCopyPlaceholder:(NSString *)placeholder __attribute__((swift_name("doCopy(placeholder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *placeholder __attribute__((swift_name("placeholder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutSubscriptionImage")))
@interface SharedWithoutSubscriptionImage : SharedBase <SharedSubscriptionImageData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutSubscriptionImage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutSubscriptionImage *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutSubscriptionSubscriptionPlaceholder")))
@interface SharedWithoutSubscriptionSubscriptionPlaceholder : SharedBase <SharedSubscriptionPlaceholder>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutSubscriptionSubscriptionPlaceholder __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutSubscriptionSubscriptionPlaceholder *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingFourStoriesFourPicsComponent")))
@interface SharedListingFourStoriesFourPicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedListingFourStoriesFourPicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarouselWithoutNumbersFullWidthComponent")))
@interface SharedCarouselWithoutNumbersFullWidthComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title subTitle:(id<SharedSubTitleData>)subTitle ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<SharedWithoutNumberCarouselItem *> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:subTitle:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedSubTitleData>)component3 __attribute__((swift_name("component3()")));
- (id<SharedCtaData>)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedWithoutNumberCarouselItem *> *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (SharedCarouselWithoutNumbersFullWidthComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title subTitle:(id<SharedSubTitleData>)subTitle ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<SharedWithoutNumberCarouselItem *> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:subTitle:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<SharedWithoutNumberCarouselItem *> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedSubTitleData> subTitle __attribute__((swift_name("subTitle")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SevenStoriesFivePicsComponent")))
@interface SharedSevenStoriesFivePicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedSevenStoriesFivePicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturedImageNineStoriesFivePicsComponent")))
@interface SharedFeaturedImageNineStoriesFivePicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedFeaturedImageNineStoriesFivePicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturedVideoLeftFiveStoriesFivePicsComponent")))
@interface SharedFeaturedVideoLeftFiveStoriesFivePicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedFeaturedVideoLeftFiveStoriesFivePicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FiveStoriesFivePicsComponent")))
@interface SharedFiveStoriesFivePicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedFiveStoriesFivePicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InteractiveComponent")))
@interface SharedInteractiveComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(NSString *)title html:(NSString *)html ctaData:(id<SharedCtaData>)ctaData __attribute__((swift_name("init(uuid:title:html:ctaData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (id<SharedCtaData>)component4 __attribute__((swift_name("component4()")));
- (SharedInteractiveComponent *)doCopyUuid:(NSString *)uuid title:(NSString *)title html:(NSString *)html ctaData:(id<SharedCtaData>)ctaData __attribute__((swift_name("doCopy(uuid:title:html:ctaData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) NSString *html __attribute__((swift_name("html")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("InteractiveViewMoreTitle")))
@protocol SharedInteractiveViewMoreTitle
@required
@end;

__attribute__((swift_name("InteractiveViewMoreUrl")))
@protocol SharedInteractiveViewMoreUrl
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithInteractiveViewMoreTitle")))
@interface SharedWithInteractiveViewMoreTitle : SharedBase <SharedInteractiveViewMoreTitle>
- (instancetype)initWithTitle:(NSString *)title __attribute__((swift_name("init(title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithInteractiveViewMoreTitle *)doCopyTitle:(NSString *)title __attribute__((swift_name("doCopy(title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithInteractiveViewMoreUrl")))
@interface SharedWithInteractiveViewMoreUrl : SharedBase <SharedInteractiveViewMoreUrl>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedWithInteractiveViewMoreUrl *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutInteractiveViewMoreTitle")))
@interface SharedWithoutInteractiveViewMoreTitle : SharedBase <SharedInteractiveViewMoreTitle>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutInteractiveViewMoreTitle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutInteractiveViewMoreTitle *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutInteractiveViewMoreUrl")))
@interface SharedWithoutInteractiveViewMoreUrl : SharedBase <SharedInteractiveViewMoreUrl>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)withoutInteractiveViewMoreUrl __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWithoutInteractiveViewMoreUrl *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturedImageMiddleEightStoriesFivePicsComponent")))
@interface SharedFeaturedImageMiddleEightStoriesFivePicsComponent : SharedBase <SharedLandingPageComponent>
- (instancetype)initWithUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(uuid:title:ctaData:storyList:isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id<SharedTitleData>)component2 __attribute__((swift_name("component2()")));
- (id<SharedCtaData>)component3 __attribute__((swift_name("component3()")));
- (NSArray<id<SharedComponentDetailStoryItem>> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (SharedFeaturedImageMiddleEightStoriesFivePicsComponent *)doCopyUuid:(NSString *)uuid title:(id<SharedTitleData>)title ctaData:(id<SharedCtaData>)ctaData storyList:(NSArray<id<SharedComponentDetailStoryItem>> *)storyList isDarkMode:(BOOL)isDarkMode __attribute__((swift_name("doCopy(uuid:title:ctaData:storyList:isDarkMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCtaData> ctaData __attribute__((swift_name("ctaData")));
@property (readonly) BOOL isDarkMode __attribute__((swift_name("isDarkMode")));
@property (readonly) NSArray<id<SharedComponentDetailStoryItem>> *storyList __attribute__((swift_name("storyList")));
@property (readonly) id<SharedTitleData> title __attribute__((swift_name("title")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("CiaWidgetData")))
@protocol SharedCiaWidgetData
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetDataError")))
@interface SharedCiaWidgetDataError : SharedBase <SharedCiaWidgetData>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ciaWidgetDataError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCiaWidgetDataError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetRequest")))
@interface SharedCiaWidgetRequest : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id context:(SharedWidgetContext *)context __attribute__((swift_name("init(id:context:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCiaWidgetRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedWidgetContext *)component2 __attribute__((swift_name("component2()")));
- (SharedCiaWidgetRequest *)doCopyId:(NSString * _Nullable)id context:(SharedWidgetContext *)context __attribute__((swift_name("doCopy(id:context:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedWidgetContext *context __attribute__((swift_name("context")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetRequest.Companion")))
@interface SharedCiaWidgetRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCiaWidgetRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetContext")))
@interface SharedWidgetContext : SharedBase
- (instancetype)initWithMeid:(NSString *)meid site:(NSString *)site cxenseId:(NSString *)cxenseId url:(NSString *)url contentId:(NSString *)contentId __attribute__((swift_name("init(meid:site:cxenseId:url:contentId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWidgetContextCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (SharedWidgetContext *)doCopyMeid:(NSString *)meid site:(NSString *)site cxenseId:(NSString *)cxenseId url:(NSString *)url contentId:(NSString *)contentId __attribute__((swift_name("doCopy(meid:site:cxenseId:url:contentId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *contentId __attribute__((swift_name("contentId")));
@property (readonly) NSString *cxenseId __attribute__((swift_name("cxenseId")));
@property (readonly) NSString *meid __attribute__((swift_name("meid")));
@property (readonly) NSString *site __attribute__((swift_name("site")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetContext.Companion")))
@interface SharedWidgetContextCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWidgetContextCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdResponse")))
@interface SharedAdResponse : SharedBase
- (instancetype)initWithAdChannel:(NSString * _Nullable)adChannel adUnit1:(NSString * _Nullable)adUnit1 adUnit2:(NSString * _Nullable)adUnit2 adtag1:(NSString * _Nullable)adtag1 device:(NSString * _Nullable)device id:(NSString * _Nullable)id infinitescroll:(SharedBoolean * _Nullable)infinitescroll isElevator:(SharedBoolean * _Nullable)isElevator largeads:(NSString * _Nullable)largeads networkCode:(NSString * _Nullable)networkCode noad:(NSString * _Nullable)noad pos:(NSString * _Nullable)pos prgads:(NSString * _Nullable)prgads replaceAdSection:(SharedBoolean * _Nullable)replaceAdSection sizes:(NSArray<NSArray<SharedInt *> *> * _Nullable)sizes vidnart:(NSString * _Nullable)vidnart __attribute__((swift_name("init(adChannel:adUnit1:adUnit2:adtag1:device:id:infinitescroll:isElevator:largeads:networkCode:noad:pos:prgads:replaceAdSection:sizes:vidnart:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAdResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (SharedBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSArray<NSArray<SharedInt *> *> * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedAdResponse *)doCopyAdChannel:(NSString * _Nullable)adChannel adUnit1:(NSString * _Nullable)adUnit1 adUnit2:(NSString * _Nullable)adUnit2 adtag1:(NSString * _Nullable)adtag1 device:(NSString * _Nullable)device id:(NSString * _Nullable)id infinitescroll:(SharedBoolean * _Nullable)infinitescroll isElevator:(SharedBoolean * _Nullable)isElevator largeads:(NSString * _Nullable)largeads networkCode:(NSString * _Nullable)networkCode noad:(NSString * _Nullable)noad pos:(NSString * _Nullable)pos prgads:(NSString * _Nullable)prgads replaceAdSection:(SharedBoolean * _Nullable)replaceAdSection sizes:(NSArray<NSArray<SharedInt *> *> * _Nullable)sizes vidnart:(NSString * _Nullable)vidnart __attribute__((swift_name("doCopy(adChannel:adUnit1:adUnit2:adtag1:device:id:infinitescroll:isElevator:largeads:networkCode:noad:pos:prgads:replaceAdSection:sizes:vidnart:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable adChannel __attribute__((swift_name("adChannel")));
@property (readonly) NSString * _Nullable adUnit1 __attribute__((swift_name("adUnit1")));
@property (readonly) NSString * _Nullable adUnit2 __attribute__((swift_name("adUnit2")));
@property (readonly) NSString * _Nullable adtag1 __attribute__((swift_name("adtag1")));
@property (readonly) NSString * _Nullable device __attribute__((swift_name("device")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable infinitescroll __attribute__((swift_name("infinitescroll")));
@property (readonly) SharedBoolean * _Nullable isElevator __attribute__((swift_name("isElevator")));
@property (readonly) NSString * _Nullable largeads __attribute__((swift_name("largeads")));
@property (readonly) NSString * _Nullable networkCode __attribute__((swift_name("networkCode")));
@property (readonly) NSString * _Nullable noad __attribute__((swift_name("noad")));
@property (readonly) NSString * _Nullable pos __attribute__((swift_name("pos")));
@property (readonly) NSString * _Nullable prgads __attribute__((swift_name("prgads")));
@property (readonly) SharedBoolean * _Nullable replaceAdSection __attribute__((swift_name("replaceAdSection")));
@property (readonly) NSArray<NSArray<SharedInt *> *> * _Nullable sizes __attribute__((swift_name("sizes")));
@property (readonly) NSString * _Nullable vidnart __attribute__((swift_name("vidnart")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdResponse.Companion")))
@interface SharedAdResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAdResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("BaseLabelDisplay")))
@interface SharedBaseLabelDisplay : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentResponse")))
@interface SharedComponentResponse : SharedBase
- (instancetype)initWithAds:(NSArray<SharedAdResponse *> * _Nullable)ads body:(NSString * _Nullable)body id:(NSString * _Nullable)id image:(NSString * _Nullable)image imageMediaMobile:(NSString * _Nullable)imageMediaMobile label:(NSString * _Nullable)label labelDisplay:(NSString * _Nullable)labelDisplay labelView:(BOOL)labelView mobileWidgetId:(NSString * _Nullable)mobileWidgetId placeholder:(NSString * _Nullable)placeholder region:(NSString * _Nullable)region subDescription:(NSString * _Nullable)subDescription subscriptionType:(NSString * _Nullable)subscriptionType type:(NSString *)type uuid:(NSString *)uuid viewMode:(NSString *)viewMode viewMoreTitle:(NSString * _Nullable)viewMoreTitle viewMoreUrl:(NSString * _Nullable)viewMoreUrl viewMoreUrlFieldId:(NSString * _Nullable)viewMoreUrlFieldId viewMoreUrlFieldType:(NSString * _Nullable)viewMoreUrlFieldType weight:(SharedInt * _Nullable)weight widgetId:(NSString * _Nullable)widgetId __attribute__((swift_name("init(ads:body:id:image:imageMediaMobile:label:labelDisplay:labelView:mobileWidgetId:placeholder:region:subDescription:subscriptionType:type:uuid:viewMode:viewMoreTitle:viewMoreUrl:viewMoreUrlFieldId:viewMoreUrlFieldType:weight:widgetId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedComponentResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedAdResponse *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (SharedInt * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedComponentResponse *)doCopyAds:(NSArray<SharedAdResponse *> * _Nullable)ads body:(NSString * _Nullable)body id:(NSString * _Nullable)id image:(NSString * _Nullable)image imageMediaMobile:(NSString * _Nullable)imageMediaMobile label:(NSString * _Nullable)label labelDisplay:(NSString * _Nullable)labelDisplay labelView:(BOOL)labelView mobileWidgetId:(NSString * _Nullable)mobileWidgetId placeholder:(NSString * _Nullable)placeholder region:(NSString * _Nullable)region subDescription:(NSString * _Nullable)subDescription subscriptionType:(NSString * _Nullable)subscriptionType type:(NSString *)type uuid:(NSString *)uuid viewMode:(NSString *)viewMode viewMoreTitle:(NSString * _Nullable)viewMoreTitle viewMoreUrl:(NSString * _Nullable)viewMoreUrl viewMoreUrlFieldId:(NSString * _Nullable)viewMoreUrlFieldId viewMoreUrlFieldType:(NSString * _Nullable)viewMoreUrlFieldType weight:(SharedInt * _Nullable)weight widgetId:(NSString * _Nullable)widgetId __attribute__((swift_name("doCopy(ads:body:id:image:imageMediaMobile:label:labelDisplay:labelView:mobileWidgetId:placeholder:region:subDescription:subscriptionType:type:uuid:viewMode:viewMoreTitle:viewMoreUrl:viewMoreUrlFieldId:viewMoreUrlFieldType:weight:widgetId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAdResponse *> * _Nullable ads __attribute__((swift_name("ads")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable imageMediaMobile __attribute__((swift_name("imageMediaMobile")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable labelDisplay __attribute__((swift_name("labelDisplay")));
@property (readonly) BOOL labelView __attribute__((swift_name("labelView")));
@property (readonly) NSString * _Nullable mobileWidgetId __attribute__((swift_name("mobileWidgetId")));
@property (readonly) NSString * _Nullable placeholder __attribute__((swift_name("placeholder")));
@property (readonly) NSString * _Nullable region __attribute__((swift_name("region")));
@property (readonly) NSString * _Nullable subDescription __attribute__((swift_name("subDescription")));
@property (readonly) NSString * _Nullable subscriptionType __attribute__((swift_name("subscriptionType")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@property (readonly) NSString *viewMode __attribute__((swift_name("viewMode")));
@property (readonly) NSString * _Nullable viewMoreTitle __attribute__((swift_name("viewMoreTitle")));
@property (readonly) NSString * _Nullable viewMoreUrl __attribute__((swift_name("viewMoreUrl")));
@property (readonly) NSString * _Nullable viewMoreUrlFieldId __attribute__((swift_name("viewMoreUrlFieldId")));
@property (readonly) NSString * _Nullable viewMoreUrlFieldType __attribute__((swift_name("viewMoreUrlFieldType")));
@property (readonly) SharedInt * _Nullable weight __attribute__((swift_name("weight")));
@property (readonly) NSString * _Nullable widgetId __attribute__((swift_name("widgetId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentResponse.Companion")))
@interface SharedComponentResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LabelDisplayInt")))
@interface SharedLabelDisplayInt : SharedBaseLabelDisplay
- (instancetype)initWithLabelDisplay:(int32_t)labelDisplay __attribute__((swift_name("init(labelDisplay:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedLabelDisplayIntCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (SharedLabelDisplayInt *)doCopyLabelDisplay:(int32_t)labelDisplay __attribute__((swift_name("doCopy(labelDisplay:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t labelDisplay __attribute__((swift_name("labelDisplay")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LabelDisplayInt.Companion")))
@interface SharedLabelDisplayIntCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLabelDisplayIntCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LabelDisplayString")))
@interface SharedLabelDisplayString : SharedBaseLabelDisplay
- (instancetype)initWithLabelDisplay:(NSString *)labelDisplay __attribute__((swift_name("init(labelDisplay:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedLabelDisplayStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedLabelDisplayString *)doCopyLabelDisplay:(NSString *)labelDisplay __attribute__((swift_name("doCopy(labelDisplay:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *labelDisplay __attribute__((swift_name("labelDisplay")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LabelDisplayString.Companion")))
@interface SharedLabelDisplayStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLabelDisplayStringCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingResponse")))
@interface SharedLandingResponse : SharedBase
- (instancetype)initWithResult:(SharedLandingResultResponse * _Nullable)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLandingResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedLandingResultResponse * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedLandingResponse *)doCopyResult:(SharedLandingResultResponse * _Nullable)result __attribute__((swift_name("doCopy(result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLandingResultResponse * _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingResponse.Companion")))
@interface SharedLandingResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLandingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingResultResponse")))
@interface SharedLandingResultResponse : SharedBase
- (instancetype)initWithTitle:(NSString * _Nullable)title webview:(NSString * _Nullable)webview viewMode:(NSString * _Nullable)viewMode brief:(NSString * _Nullable)brief url:(NSString * _Nullable)url image:(NSString * _Nullable)image imageMobile:(NSString * _Nullable)imageMobile uuid:(NSString * _Nullable)uuid layout:(NSArray<SharedLayoutResponse *> * _Nullable)layout __attribute__((swift_name("init(title:webview:viewMode:brief:url:image:imageMobile:uuid:layout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLandingResultResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<SharedLayoutResponse *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedLandingResultResponse *)doCopyTitle:(NSString * _Nullable)title webview:(NSString * _Nullable)webview viewMode:(NSString * _Nullable)viewMode brief:(NSString * _Nullable)brief url:(NSString * _Nullable)url image:(NSString * _Nullable)image imageMobile:(NSString * _Nullable)imageMobile uuid:(NSString * _Nullable)uuid layout:(NSArray<SharedLayoutResponse *> * _Nullable)layout __attribute__((swift_name("doCopy(title:webview:viewMode:brief:url:image:imageMobile:uuid:layout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable brief __attribute__((swift_name("brief")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable imageMobile __attribute__((swift_name("imageMobile")));
@property (readonly) NSArray<SharedLayoutResponse *> * _Nullable layout __attribute__((swift_name("layout")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable uuid __attribute__((swift_name("uuid")));
@property (readonly) NSString * _Nullable viewMode __attribute__((swift_name("viewMode")));
@property (readonly) NSString * _Nullable webview __attribute__((swift_name("webview")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingResultResponse.Companion")))
@interface SharedLandingResultResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLandingResultResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutResponse")))
@interface SharedLayoutResponse : SharedBase
- (instancetype)initWithLayoutSection:(SharedLayoutSectionResponse * _Nullable)layoutSection __attribute__((swift_name("init(layoutSection:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLayoutResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedLayoutSectionResponse * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedLayoutResponse *)doCopyLayoutSection:(SharedLayoutSectionResponse * _Nullable)layoutSection __attribute__((swift_name("doCopy(layoutSection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLayoutSectionResponse * _Nullable layoutSection __attribute__((swift_name("layoutSection")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutResponse.Companion")))
@interface SharedLayoutResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLayoutResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutSectionResponse")))
@interface SharedLayoutSectionResponse : SharedBase
- (instancetype)initWithBackgroundColor:(NSString * _Nullable)backgroundColor backgroundImage:(NSString * _Nullable)backgroundImage classes:(NSString * _Nullable)classes component:(NSArray<SharedComponentResponse *> * _Nullable)component layoutId:(NSString * _Nullable)layoutId __attribute__((swift_name("init(backgroundColor:backgroundImage:classes:component:layoutId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLayoutSectionResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedComponentResponse *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedLayoutSectionResponse *)doCopyBackgroundColor:(NSString * _Nullable)backgroundColor backgroundImage:(NSString * _Nullable)backgroundImage classes:(NSString * _Nullable)classes component:(NSArray<SharedComponentResponse *> * _Nullable)component layoutId:(NSString * _Nullable)layoutId __attribute__((swift_name("doCopy(backgroundColor:backgroundImage:classes:component:layoutId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString * _Nullable backgroundImage __attribute__((swift_name("backgroundImage")));
@property (readonly) NSString * _Nullable classes __attribute__((swift_name("classes")));
@property (readonly) NSArray<SharedComponentResponse *> * _Nullable component __attribute__((swift_name("component")));
@property (readonly) NSString * _Nullable layoutId __attribute__((swift_name("layoutId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutSectionResponse.Companion")))
@interface SharedLayoutSectionResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLayoutSectionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorDetailResponse")))
@interface SharedAuthorDetailResponse : SharedBase
- (instancetype)initWithImageUrl:(NSString * _Nullable)imageUrl name:(NSString * _Nullable)name url:(NSString * _Nullable)url __attribute__((swift_name("init(imageUrl:name:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAuthorDetailResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedAuthorDetailResponse *)doCopyImageUrl:(NSString * _Nullable)imageUrl name:(NSString * _Nullable)name url:(NSString * _Nullable)url __attribute__((swift_name("doCopy(imageUrl:name:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorDetailResponse.Companion")))
@interface SharedAuthorDetailResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAuthorDetailResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetResponse")))
@interface SharedCiaWidgetResponse : SharedBase
- (instancetype)initWithData:(SharedCiaWidgetResponseWidgetData *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCiaWidgetResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedCiaWidgetResponseWidgetData *)component1 __attribute__((swift_name("component1()")));
- (SharedCiaWidgetResponse *)doCopyData:(SharedCiaWidgetResponseWidgetData *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCiaWidgetResponseWidgetData *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetResponse.Companion")))
@interface SharedCiaWidgetResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCiaWidgetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetResponse.LayoutConfig")))
@interface SharedCiaWidgetResponseLayoutConfig : SharedBase
- (instancetype)initWithTitle:(NSString * _Nullable)title __attribute__((swift_name("init(title:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCiaWidgetResponseLayoutConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCiaWidgetResponseLayoutConfig *)doCopyTitle:(NSString * _Nullable)title __attribute__((swift_name("doCopy(title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetResponse.LayoutConfigCompanion")))
@interface SharedCiaWidgetResponseLayoutConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCiaWidgetResponseLayoutConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetResponse.WidgetData")))
@interface SharedCiaWidgetResponseWidgetData : SharedBase
- (instancetype)initWithLayoutConfig:(SharedCiaWidgetResponseLayoutConfig *)layoutConfig items:(NSArray<SharedCiaWidgetResponseWidgetDataItem *> *)items __attribute__((swift_name("init(layoutConfig:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCiaWidgetResponseWidgetDataCompanion *companion __attribute__((swift_name("companion")));
- (SharedCiaWidgetResponseLayoutConfig *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedCiaWidgetResponseWidgetDataItem *> *)component2 __attribute__((swift_name("component2()")));
- (SharedCiaWidgetResponseWidgetData *)doCopyLayoutConfig:(SharedCiaWidgetResponseLayoutConfig *)layoutConfig items:(NSArray<SharedCiaWidgetResponseWidgetDataItem *> *)items __attribute__((swift_name("doCopy(layoutConfig:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCiaWidgetResponseWidgetDataItem *> *items __attribute__((swift_name("items")));
@property (readonly) SharedCiaWidgetResponseLayoutConfig *layoutConfig __attribute__((swift_name("layoutConfig")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetResponse.WidgetDataCompanion")))
@interface SharedCiaWidgetResponseWidgetDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCiaWidgetResponseWidgetDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetResponse.WidgetDataItem")))
@interface SharedCiaWidgetResponseWidgetDataItem : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title siteLabel:(NSString * _Nullable)siteLabel site:(NSString * _Nullable)site contentId:(NSString * _Nullable)contentId url:(NSString * _Nullable)url clickTracker:(NSString * _Nullable)clickTracker imageUrl:(NSString * _Nullable)imageUrl publishDate:(NSString * _Nullable)publishDate duration:(NSString * _Nullable)duration categories:(NSArray<NSString *> * _Nullable)categories type:(NSString * _Nullable)type __attribute__((swift_name("init(id:title:siteLabel:site:contentId:url:clickTracker:imageUrl:publishDate:duration:categories:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCiaWidgetResponseWidgetDataItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSArray<NSString *> * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedCiaWidgetResponseWidgetDataItem *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title siteLabel:(NSString * _Nullable)siteLabel site:(NSString * _Nullable)site contentId:(NSString * _Nullable)contentId url:(NSString * _Nullable)url clickTracker:(NSString * _Nullable)clickTracker imageUrl:(NSString * _Nullable)imageUrl publishDate:(NSString * _Nullable)publishDate duration:(NSString * _Nullable)duration categories:(NSArray<NSString *> * _Nullable)categories type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(id:title:siteLabel:site:contentId:url:clickTracker:imageUrl:publishDate:duration:categories:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable categories __attribute__((swift_name("categories")));
@property (readonly) NSString * _Nullable clickTracker __attribute__((swift_name("clickTracker")));
@property (readonly) NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString * _Nullable publishDate __attribute__((swift_name("publishDate")));
@property (readonly) NSString * _Nullable site __attribute__((swift_name("site")));
@property (readonly) NSString * _Nullable siteLabel __attribute__((swift_name("siteLabel")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetResponse.WidgetDataItemCompanion")))
@interface SharedCiaWidgetResponseWidgetDataItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCiaWidgetResponseWidgetDataItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentDetailResponse")))
@interface SharedComponentDetailResponse : SharedBase
- (instancetype)initWithResult:(SharedComponentDetailResultResponse * _Nullable)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedComponentDetailResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedComponentDetailResultResponse * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedComponentDetailResponse *)doCopyResult:(SharedComponentDetailResultResponse * _Nullable)result __attribute__((swift_name("doCopy(result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedComponentDetailResultResponse * _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentDetailResponse.Companion")))
@interface SharedComponentDetailResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentDetailResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentDetailResultResponse")))
@interface SharedComponentDetailResultResponse : SharedBase
- (instancetype)initWithStoryResponse:(NSArray<SharedStoryResponse *> * _Nullable)storyResponse fieldCount:(SharedInt * _Nullable)fieldCount fieldExcludeDedupe:(NSString * _Nullable)fieldExcludeDedupe fieldOffset:(SharedInt * _Nullable)fieldOffset fieldSubDescription:(NSString * _Nullable)fieldSubDescription id:(NSString * _Nullable)id title:(NSString * _Nullable)title type:(NSString *)type uuid:(NSString *)uuid viewMoreTitle:(NSString * _Nullable)viewMoreTitle viewMoreUrl:(NSString * _Nullable)viewMoreUrl viewMoreUrlFieldId:(NSString * _Nullable)viewMoreUrlFieldId viewMoreUrlFieldType:(NSString * _Nullable)viewMoreUrlFieldType imageUrl:(NSString * _Nullable)imageUrl label:(NSString * _Nullable)label body:(NSString * _Nullable)body placeholder:(NSString * _Nullable)placeholder subscriptionType:(NSString * _Nullable)subscriptionType subDescription:(NSString * _Nullable)subDescription htmlString:(NSString * _Nullable)htmlString widgetId:(NSString * _Nullable)widgetId mobileWidgetId:(NSString * _Nullable)mobileWidgetId __attribute__((swift_name("init(storyResponse:fieldCount:fieldExcludeDedupe:fieldOffset:fieldSubDescription:id:title:type:uuid:viewMoreTitle:viewMoreUrl:viewMoreUrlFieldId:viewMoreUrlFieldType:imageUrl:label:body:placeholder:subscriptionType:subDescription:htmlString:widgetId:mobileWidgetId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedComponentDetailResultResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedStoryResponse *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (SharedComponentDetailResultResponse *)doCopyStoryResponse:(NSArray<SharedStoryResponse *> * _Nullable)storyResponse fieldCount:(SharedInt * _Nullable)fieldCount fieldExcludeDedupe:(NSString * _Nullable)fieldExcludeDedupe fieldOffset:(SharedInt * _Nullable)fieldOffset fieldSubDescription:(NSString * _Nullable)fieldSubDescription id:(NSString * _Nullable)id title:(NSString * _Nullable)title type:(NSString *)type uuid:(NSString *)uuid viewMoreTitle:(NSString * _Nullable)viewMoreTitle viewMoreUrl:(NSString * _Nullable)viewMoreUrl viewMoreUrlFieldId:(NSString * _Nullable)viewMoreUrlFieldId viewMoreUrlFieldType:(NSString * _Nullable)viewMoreUrlFieldType imageUrl:(NSString * _Nullable)imageUrl label:(NSString * _Nullable)label body:(NSString * _Nullable)body placeholder:(NSString * _Nullable)placeholder subscriptionType:(NSString * _Nullable)subscriptionType subDescription:(NSString * _Nullable)subDescription htmlString:(NSString * _Nullable)htmlString widgetId:(NSString * _Nullable)widgetId mobileWidgetId:(NSString * _Nullable)mobileWidgetId __attribute__((swift_name("doCopy(storyResponse:fieldCount:fieldExcludeDedupe:fieldOffset:fieldSubDescription:id:title:type:uuid:viewMoreTitle:viewMoreUrl:viewMoreUrlFieldId:viewMoreUrlFieldType:imageUrl:label:body:placeholder:subscriptionType:subDescription:htmlString:widgetId:mobileWidgetId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) SharedInt * _Nullable fieldCount __attribute__((swift_name("fieldCount")));
@property (readonly) NSString * _Nullable fieldExcludeDedupe __attribute__((swift_name("fieldExcludeDedupe")));
@property (readonly) SharedInt * _Nullable fieldOffset __attribute__((swift_name("fieldOffset")));
@property (readonly) NSString * _Nullable fieldSubDescription __attribute__((swift_name("fieldSubDescription")));
@property (readonly) NSString * _Nullable htmlString __attribute__((swift_name("htmlString")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable mobileWidgetId __attribute__((swift_name("mobileWidgetId")));
@property (readonly) NSString * _Nullable placeholder __attribute__((swift_name("placeholder")));
@property (readonly) NSArray<SharedStoryResponse *> * _Nullable storyResponse __attribute__((swift_name("storyResponse")));
@property (readonly) NSString * _Nullable subDescription __attribute__((swift_name("subDescription")));
@property (readonly) NSString * _Nullable subscriptionType __attribute__((swift_name("subscriptionType")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@property (readonly) NSString * _Nullable viewMoreTitle __attribute__((swift_name("viewMoreTitle")));
@property (readonly) NSString * _Nullable viewMoreUrl __attribute__((swift_name("viewMoreUrl")));
@property (readonly) NSString * _Nullable viewMoreUrlFieldId __attribute__((swift_name("viewMoreUrlFieldId")));
@property (readonly) NSString * _Nullable viewMoreUrlFieldType __attribute__((swift_name("viewMoreUrlFieldType")));
@property (readonly) NSString * _Nullable widgetId __attribute__((swift_name("widgetId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentDetailResultResponse.Companion")))
@interface SharedComponentDetailResultResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedComponentDetailResultResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageByLineAndSourceResponse")))
@interface SharedImageByLineAndSourceResponse : SharedBase
- (instancetype)initWithByline:(NSString * _Nullable)byline entryFound:(SharedBoolean * _Nullable)entryFound source:(NSString * _Nullable)source __attribute__((swift_name("init(byline:entryFound:source:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedImageByLineAndSourceResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedImageByLineAndSourceResponse *)doCopyByline:(NSString * _Nullable)byline entryFound:(SharedBoolean * _Nullable)entryFound source:(NSString * _Nullable)source __attribute__((swift_name("doCopy(byline:entryFound:source:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable byline __attribute__((swift_name("byline")));
@property (readonly) SharedBoolean * _Nullable entryFound __attribute__((swift_name("entryFound")));
@property (readonly) NSString * _Nullable source __attribute__((swift_name("source")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageByLineAndSourceResponse.Companion")))
@interface SharedImageByLineAndSourceResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedImageByLineAndSourceResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageBylineAndSource")))
@interface SharedImageBylineAndSource : SharedBase
- (instancetype)initWithByline:(NSString * _Nullable)byline source:(NSString * _Nullable)source __attribute__((swift_name("init(byline:source:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedImageBylineAndSourceCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedImageBylineAndSource *)doCopyByline:(NSString * _Nullable)byline source:(NSString * _Nullable)source __attribute__((swift_name("doCopy(byline:source:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable byline __attribute__((swift_name("byline")));
@property (readonly) NSString * _Nullable source __attribute__((swift_name("source")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageBylineAndSource.Companion")))
@interface SharedImageBylineAndSourceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedImageBylineAndSourceCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoryResponse")))
@interface SharedStoryResponse : SharedBase
- (instancetype)initWithAbsoluteUrl:(NSString * _Nullable)absoluteUrl author:(NSString * _Nullable)author authorDetail:(SharedAuthorDetailResponse * _Nullable)authorDetail category:(NSString * _Nullable)category categoryUrl:(NSString * _Nullable)categoryUrl changedDate:(NSString * _Nullable)changedDate contentOrigin:(NSString * _Nullable)contentOrigin date:(NSString * _Nullable)date description:(NSString * _Nullable)description duration:(NSString * _Nullable)duration flag:(NSString * _Nullable)flag imageUrl:(NSString * _Nullable)imageUrl liveblogSource:(NSString * _Nullable)liveblogSource mediaCount:(SharedInt * _Nullable)mediaCount mediaType:(NSString * _Nullable)mediaType nid:(NSString * _Nullable)nid releaseDate:(NSString * _Nullable)releaseDate showAsWebView:(SharedBoolean * _Nullable)showAsWebView title:(NSString * _Nullable)title titleUrl:(NSString * _Nullable)titleUrl type:(NSString * _Nullable)type uuid:(NSString * _Nullable)uuid video:(SharedVideoResponse * _Nullable)video imageByLineAndSource:(SharedImageBylineAndSource * _Nullable)imageByLineAndSource __attribute__((swift_name("init(absoluteUrl:author:authorDetail:category:categoryUrl:changedDate:contentOrigin:date:description:duration:flag:imageUrl:liveblogSource:mediaCount:mediaType:nid:releaseDate:showAsWebView:title:titleUrl:type:uuid:video:imageByLineAndSource:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedStoryResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (SharedInt * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (SharedBoolean * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (SharedVideoResponse * _Nullable)component23 __attribute__((swift_name("component23()")));
- (SharedImageBylineAndSource * _Nullable)component24 __attribute__((swift_name("component24()")));
- (SharedAuthorDetailResponse * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedStoryResponse *)doCopyAbsoluteUrl:(NSString * _Nullable)absoluteUrl author:(NSString * _Nullable)author authorDetail:(SharedAuthorDetailResponse * _Nullable)authorDetail category:(NSString * _Nullable)category categoryUrl:(NSString * _Nullable)categoryUrl changedDate:(NSString * _Nullable)changedDate contentOrigin:(NSString * _Nullable)contentOrigin date:(NSString * _Nullable)date description:(NSString * _Nullable)description duration:(NSString * _Nullable)duration flag:(NSString * _Nullable)flag imageUrl:(NSString * _Nullable)imageUrl liveblogSource:(NSString * _Nullable)liveblogSource mediaCount:(SharedInt * _Nullable)mediaCount mediaType:(NSString * _Nullable)mediaType nid:(NSString * _Nullable)nid releaseDate:(NSString * _Nullable)releaseDate showAsWebView:(SharedBoolean * _Nullable)showAsWebView title:(NSString * _Nullable)title titleUrl:(NSString * _Nullable)titleUrl type:(NSString * _Nullable)type uuid:(NSString * _Nullable)uuid video:(SharedVideoResponse * _Nullable)video imageByLineAndSource:(SharedImageBylineAndSource * _Nullable)imageByLineAndSource __attribute__((swift_name("doCopy(absoluteUrl:author:authorDetail:category:categoryUrl:changedDate:contentOrigin:date:description:duration:flag:imageUrl:liveblogSource:mediaCount:mediaType:nid:releaseDate:showAsWebView:title:titleUrl:type:uuid:video:imageByLineAndSource:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable absoluteUrl __attribute__((swift_name("absoluteUrl")));
@property (readonly) NSString * _Nullable author __attribute__((swift_name("author")));
@property (readonly) SharedAuthorDetailResponse * _Nullable authorDetail __attribute__((swift_name("authorDetail")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSString * _Nullable categoryUrl __attribute__((swift_name("categoryUrl")));
@property (readonly) NSString * _Nullable changedDate __attribute__((swift_name("changedDate")));
@property (readonly) NSString * _Nullable contentOrigin __attribute__((swift_name("contentOrigin")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString * _Nullable flag __attribute__((swift_name("flag")));
@property (readonly) SharedImageBylineAndSource * _Nullable imageByLineAndSource __attribute__((swift_name("imageByLineAndSource")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString * _Nullable liveblogSource __attribute__((swift_name("liveblogSource")));
@property (readonly) SharedInt * _Nullable mediaCount __attribute__((swift_name("mediaCount")));
@property (readonly) NSString * _Nullable mediaType __attribute__((swift_name("mediaType")));
@property (readonly) NSString * _Nullable nid __attribute__((swift_name("nid")));
@property (readonly) NSString * _Nullable releaseDate __attribute__((swift_name("releaseDate")));
@property (readonly) SharedBoolean * _Nullable showAsWebView __attribute__((swift_name("showAsWebView")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable titleUrl __attribute__((swift_name("titleUrl")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable uuid __attribute__((swift_name("uuid")));
@property (readonly) SharedVideoResponse * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoryResponse.Companion")))
@interface SharedStoryResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedStoryResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoResponse")))
@interface SharedVideoResponse : SharedBase
- (instancetype)initWithAccountId:(NSString * _Nullable)accountId caption:(NSString * _Nullable)caption checkRecurring:(SharedBoolean * _Nullable)checkRecurring duration:(NSString * _Nullable)duration endTime:(NSString * _Nullable)endTime imageBylineAndSource:(SharedImageByLineAndSourceResponse * _Nullable)imageBylineAndSource mediaId:(NSString *)mediaId player:(NSString *)player showBackgroundImage:(BOOL)showBackgroundImage showCountdown:(BOOL)showCountdown startTime:(NSString * _Nullable)startTime videoId:(NSString * _Nullable)videoId videoUrlMp4:(NSString * _Nullable)videoUrlMp4 __attribute__((swift_name("init(accountId:caption:checkRecurring:duration:endTime:imageBylineAndSource:mediaId:player:showBackgroundImage:showCountdown:startTime:videoId:videoUrlMp4:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedVideoResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedImageByLineAndSourceResponse * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedVideoResponse *)doCopyAccountId:(NSString * _Nullable)accountId caption:(NSString * _Nullable)caption checkRecurring:(SharedBoolean * _Nullable)checkRecurring duration:(NSString * _Nullable)duration endTime:(NSString * _Nullable)endTime imageBylineAndSource:(SharedImageByLineAndSourceResponse * _Nullable)imageBylineAndSource mediaId:(NSString *)mediaId player:(NSString *)player showBackgroundImage:(BOOL)showBackgroundImage showCountdown:(BOOL)showCountdown startTime:(NSString * _Nullable)startTime videoId:(NSString * _Nullable)videoId videoUrlMp4:(NSString * _Nullable)videoUrlMp4 __attribute__((swift_name("doCopy(accountId:caption:checkRecurring:duration:endTime:imageBylineAndSource:mediaId:player:showBackgroundImage:showCountdown:startTime:videoId:videoUrlMp4:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accountId __attribute__((swift_name("accountId")));
@property (readonly) NSString * _Nullable caption __attribute__((swift_name("caption")));
@property (readonly) SharedBoolean * _Nullable checkRecurring __attribute__((swift_name("checkRecurring")));
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) SharedImageByLineAndSourceResponse * _Nullable imageBylineAndSource __attribute__((swift_name("imageBylineAndSource")));
@property (readonly) NSString *mediaId __attribute__((swift_name("mediaId")));
@property (readonly) NSString *player __attribute__((swift_name("player")));
@property (readonly) BOOL showBackgroundImage __attribute__((swift_name("showBackgroundImage")));
@property (readonly) BOOL showCountdown __attribute__((swift_name("showCountdown")));
@property (readonly) NSString * _Nullable startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString * _Nullable videoId __attribute__((swift_name("videoId")));
@property (readonly) NSString * _Nullable videoUrlMp4 __attribute__((swift_name("videoUrlMp4")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoResponse.Companion")))
@interface SharedVideoResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedVideoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfiniteScrollResponse")))
@interface SharedInfiniteScrollResponse : SharedBase
- (instancetype)initWithResult:(NSArray<SharedStoryResponse *> * _Nullable)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedInfiniteScrollResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedStoryResponse *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInfiniteScrollResponse *)doCopyResult:(NSArray<SharedStoryResponse *> * _Nullable)result __attribute__((swift_name("doCopy(result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedStoryResponse *> * _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfiniteScrollResponse.Companion")))
@interface SharedInfiniteScrollResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedInfiniteScrollResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attributes")))
@interface SharedAttributes : SharedBase
- (instancetype)initWithClassX:(NSArray<NSString *> * _Nullable)classX __attribute__((swift_name("init(classX:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedAttributes *)doCopyClassX:(NSArray<NSString *> * _Nullable)classX __attribute__((swift_name("doCopy(classX:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable classX __attribute__((swift_name("classX")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attributes.Companion")))
@interface SharedAttributesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuResponseItem")))
@interface SharedMenuResponseItem : SharedBase
- (instancetype)initWithAbsoluteUrl:(NSString * _Nullable)absoluteUrl alias:(NSString * _Nullable)alias enabled:(BOOL)enabled fieldId:(NSString * _Nullable)fieldId fieldType:(NSString * _Nullable)fieldType options:(SharedOptions * _Nullable)options title:(NSString * _Nullable)title uri:(NSString * _Nullable)uri weight:(NSString * _Nullable)weight __attribute__((swift_name("init(absoluteUrl:alias:enabled:fieldId:fieldType:options:title:uri:weight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMenuResponseItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedOptions * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedMenuResponseItem *)doCopyAbsoluteUrl:(NSString * _Nullable)absoluteUrl alias:(NSString * _Nullable)alias enabled:(BOOL)enabled fieldId:(NSString * _Nullable)fieldId fieldType:(NSString * _Nullable)fieldType options:(SharedOptions * _Nullable)options title:(NSString * _Nullable)title uri:(NSString * _Nullable)uri weight:(NSString * _Nullable)weight __attribute__((swift_name("doCopy(absoluteUrl:alias:enabled:fieldId:fieldType:options:title:uri:weight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable absoluteUrl __attribute__((swift_name("absoluteUrl")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString * _Nullable fieldId __attribute__((swift_name("fieldId")));
@property (readonly) NSString * _Nullable fieldType __attribute__((swift_name("fieldType")));
@property (readonly) SharedOptions * _Nullable options __attribute__((swift_name("options")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) NSString * _Nullable weight __attribute__((swift_name("weight")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuResponseItem.Companion")))
@interface SharedMenuResponseItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuResponseItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Options")))
@interface SharedOptions : SharedBase
- (instancetype)initWithAttributes:(SharedAttributes * _Nullable)attributes modal:(NSArray<NSString *> * _Nullable)modal __attribute__((swift_name("init(attributes:modal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedOptionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedAttributes * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedOptions *)doCopyAttributes:(SharedAttributes * _Nullable)attributes modal:(NSArray<NSString *> * _Nullable)modal __attribute__((swift_name("doCopy(attributes:modal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSArray<NSString *> * _Nullable modal __attribute__((swift_name("modal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Options.Companion")))
@interface SharedOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingRepository")))
@interface SharedLandingRepository : SharedBase
@property (class, readonly, getter=companion) SharedLandingRepositoryCompanion *companion __attribute__((swift_name("companion")));
- (SharedCFlow<id<SharedLandingPageComponent>> *)fetchComponentDetailLazyLoadComponent:(SharedLazyLoadComponent *)lazyLoadComponent existingIdList:(NSArray<NSString *> *)existingIdList __attribute__((swift_name("fetchComponentDetail(lazyLoadComponent:existingIdList:)")));
- (SharedCFlow<id<SharedLandingPageComponent>> *)fetchInfiniteScrollComponentLazyLoadComponent:(SharedLazyLoadComponentInfiniteLazyComponent *)lazyLoadComponent __attribute__((swift_name("fetchInfiniteScrollComponent(lazyLoadComponent:)")));
- (SharedCFlow<id<SharedLandingPageData>> *)fetchLandingPageLandingPageId:(NSString *)landingPageId __attribute__((swift_name("fetchLandingPage(landingPageId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingRepository.Companion")))
@interface SharedLandingRepositoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLandingRepositoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AD_DISPLAY __attribute__((swift_name("AD_DISPLAY")));
@property (readonly) NSString *ARTICLE_DETAIL_CTA __attribute__((swift_name("ARTICLE_DETAIL_CTA")));
@property (readonly) NSString *DYNAMIC_LISTING __attribute__((swift_name("DYNAMIC_LISTING")));
@property (readonly) NSString *GALLERY_MEDIA_TYPE __attribute__((swift_name("GALLERY_MEDIA_TYPE")));
@property (readonly) NSString *LANDING_PAGE_CTA __attribute__((swift_name("LANDING_PAGE_CTA")));
@property (readonly) NSString *VIDEO_DETAIL_CTA __attribute__((swift_name("VIDEO_DETAIL_CTA")));
@property (readonly) NSString *VIDEO_MEDIA_TYPE __attribute__((swift_name("VIDEO_MEDIA_TYPE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuRepository")))
@interface SharedMenuRepository : SharedBase
@property (class, readonly, getter=companion) SharedMenuRepositoryCompanion *companion __attribute__((swift_name("companion")));
- (SharedCFlow<SharedMenuData *> *)getPrimaryMenus __attribute__((swift_name("getPrimaryMenus()")));
@property (readonly) SharedMenuService *menuService __attribute__((swift_name("menuService")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuRepository.Companion")))
@interface SharedMenuRepositoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMenuRepositoryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CiaWidgetService")))
@interface SharedCiaWidgetService : SharedBase
- (instancetype)initWithToken:(NSString *)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCiaComponentUuid:(NSString *)uuid viewMode:(NSString *)viewMode id:(NSString * _Nullable)id meid:(NSString *)meid contentId:(NSString *)contentId censexId:(NSString *)censexId site:(NSString *)site url:(NSString *)url completionHandler:(void (^)(SharedCiaWidgetResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getCiaComponent(uuid:viewMode:id:meid:contentId:censexId:site:url:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndPoints")))
@interface SharedEndPoints : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)endPoints __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEndPoints *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndPoints.Menu")))
@interface SharedEndPointsMenu : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)menu __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEndPointsMenu *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BOTTOM_MENU __attribute__((swift_name("BOTTOM_MENU")));
@property (readonly) NSString *TOP_MENU __attribute__((swift_name("TOP_MENU")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfiniteScrollService")))
@interface SharedInfiniteScrollService : SharedBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getInfiniteScrollListUuid:(NSString *)uuid viewMode:(NSString *)viewMode page:(int32_t)page completionHandler:(void (^)(SharedInfiniteScrollResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getInfiniteScrollList(uuid:viewMode:page:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LandingService")))
@interface SharedLandingService : SharedBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getComponentDetailsUuid:(NSString *)uuid viewMode:(NSString *)viewMode completionHandler:(void (^)(SharedComponentDetailResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getComponentDetails(uuid:viewMode:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLandingLandingPageId:(NSString *)landingPageId completionHandler:(void (^)(SharedLandingResponse * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLanding(landingPageId:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuService")))
@interface SharedMenuService : SharedBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBottomNavMenuWithCompletionHandler:(void (^)(NSArray<SharedMenuResponseItem *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getBottomNavMenu(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopMenuWithCompletionHandler:(void (^)(NSArray<SharedMenuResponseItem *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopMenu(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonApiClient")))
@interface SharedCommonApiClient : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commonApiClient __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCommonApiClient *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalApiClient")))
@interface SharedLocalApiClient : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)localApiClient __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLocalApiClient *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlow")))
@interface SharedCFlow<T> : SharedBase <SharedKotlinx_coroutines_coreFlow>
- (instancetype)initWithOrigin:(id<SharedKotlinx_coroutines_coreFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<SharedCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@end;

__attribute__((swift_name("Closeable")))
@protocol SharedCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

@interface SharedLandingRepositoryCompanion (Extensions)
- (SharedLandingRepository *)doInitBaseUrl:(NSString *)baseUrl token:(NSString *)token __attribute__((swift_name("doInit(baseUrl:token:)")));
@end;

@interface SharedMenuRepositoryCompanion (Extensions)
- (SharedMenuRepository *)doInitBaseUrl:(NSString *)baseUrl __attribute__((swift_name("doInit(baseUrl:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentTypeKt")))
@interface SharedComponentTypeKt : SharedBase
+ (SharedComponentType *)detectComponentTypeFromTypeType:(NSString *)type __attribute__((swift_name("detectComponentTypeFromType(type:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModeTypeKt")))
@interface SharedViewModeTypeKt : SharedBase
+ (SharedViewModeType *)detectViewModeTypeFromViewModeViewMode:(NSString *)viewMode __attribute__((swift_name("detectViewModeTypeFromViewMode(viewMode:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConstantsKt")))
@interface SharedApiConstantsKt : SharedBase
@property (class, readonly) NSString *BOTTOM_MENU_ITEMS __attribute__((swift_name("BOTTOM_MENU_ITEMS")));
@property (class, readonly) NSString *CIA_WIDGET_API __attribute__((swift_name("CIA_WIDGET_API")));
@property (class, readonly) NSString *COMPONENT_API __attribute__((swift_name("COMPONENT_API")));
@property (class, readonly) NSString *INFINITE_SCROLL_API __attribute__((swift_name("INFINITE_SCROLL_API")));
@property (class, readonly) NSString *LANDING_API __attribute__((swift_name("LANDING_API")));
@property (class, readonly) NSString *TOP_MENU_ITEMS __attribute__((swift_name("TOP_MENU_ITEMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleKt")))
@interface SharedSerializersModuleKt : SharedBase
+ (SharedKotlinx_serialization_coreSerializersModule *)getSerializersModule __attribute__((swift_name("getSerializersModule()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTimeStampKt")))
@interface SharedGetTimeStampKt : SharedBase
+ (id<SharedTimestampData>)getTimeStamp:(NSString *)receiver __attribute__((swift_name("getTimeStamp(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatetimeUtilKt")))
@interface SharedDatetimeUtilKt : SharedBase
+ (id<SharedDurationType>)getVideoDuration:(NSString *)receiver __attribute__((swift_name("getVideoDuration(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlowKt")))
@interface SharedCFlowKt : SharedBase
+ (SharedCFlow<id> *)wrap:(id<SharedKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("wrap(_:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SharedKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SharedKtor_client_coreHttpClient : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SharedKtor_client_coreHttpClientEngine>)engine userConfig:(SharedKtor_client_coreHttpClientConfig<SharedKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SharedKtor_client_coreHttpClient *)configBlock:(void (^)(SharedKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(SharedKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<SharedKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<SharedKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SharedKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SharedKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SharedKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SharedKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SharedKtor_client_coreHttpClientEngine <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SharedKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SharedKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SharedKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SharedKtor_client_coreHttpClientEngineConfig : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SharedKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) SharedKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SharedKtor_client_coreHttpClientConfig<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<SharedKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SharedKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SharedKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SharedKtor_httpHttpMessageBuilder
@required
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SharedKtor_client_coreHttpRequestBuilder : SharedBase <SharedKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SharedKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SharedKtor_httpURLBuilder *, SharedKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SharedKtor_client_coreHttpClientCall : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SharedKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(SharedKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<SharedKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SharedKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) SharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SharedKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SharedKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SharedKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SharedKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SharedKtor_utilsPipeline<TSubject, TContext> : SharedBase
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SharedKtor_utilsPipelinePhase *)phase block:(id<SharedKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SharedKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SharedKtor_client_coreHttpReceivePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponse *, SharedKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SharedKtor_client_coreHttpRequestPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SharedKtor_client_coreHttpResponsePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponseContainer *, SharedKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SharedKtor_client_coreHttpSendPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SharedKtor_client_coreHttpRequestData : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url method:(SharedKtor_httpHttpMethod *)method headers:(id<SharedKtor_httpHeaders>)headers body:(SharedKtor_httpOutgoingContent *)body executionContext:(id<SharedKotlinx_coroutines_coreJob>)executionContext attributes:(id<SharedKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SharedKtor_client_coreHttpResponseData : SharedBase
- (instancetype)initWithStatusCode:(SharedKtor_httpHttpStatusCode *)statusCode requestTime:(SharedKtor_utilsGMTDate *)requestTime headers:(id<SharedKtor_httpHeaders>)headers version:(SharedKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SharedKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SharedKtor_client_coreProxyConfig : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol SharedKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(SharedKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SharedKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface SharedKtor_utilsStringValuesBuilder : SharedBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) SharedMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SharedKtor_httpHeadersBuilder : SharedKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SharedKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SharedKtor_client_coreHttpRequestBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SharedKtor_httpURLBuilder : SharedBase
- (instancetype)initWithProtocol:(SharedKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(SharedKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (SharedKtor_httpURLBuilder *)pathComponents:(SharedKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (SharedKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) SharedKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SharedKotlinx_coroutines_coreJob <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SharedKotlinx_coroutines_coreJob>)plusOther_:(id<SharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SharedKtor_httpHttpMethod : SharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SharedKtor_client_coreHttpClientCallCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SharedKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SharedKtor_ioIoBuffer *)dst completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(SharedByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(SharedDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(SharedFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SharedKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(SharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(SharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<SharedKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(SharedShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<SharedKotlinSuspendFunction1>)consumer completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<SharedKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) SharedKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property SharedKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol SharedKtor_utilsTypeInfo
@required
@property (readonly) id<SharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SharedKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<SharedKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface SharedKtor_client_coreTypeInfo : SharedBase <SharedKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<SharedKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<SharedKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_client_coreTypeInfo *)doCopyType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SharedKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<SharedKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SharedKtor_httpHttpMessage
@required
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SharedKtor_client_coreHttpRequest <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SharedKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SharedKtor_client_coreHttpResponse : SharedBase <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SharedKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SharedKtor_utilsAttributeKey<T> : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SharedKtor_utilsPipelinePhase : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SharedKotlinSuspendFunction2 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SharedKtor_client_coreHttpReceivePipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SharedKtor_client_coreHttpRequestPipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SharedKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SharedKtor_client_coreHttpResponsePipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SharedKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SharedKtor_client_coreHttpResponseContainer : SharedBase
- (instancetype)initWithExpectedType:(id<SharedKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(SharedKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SharedKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SharedKtor_client_coreHttpSendPipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SharedKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SharedKtor_httpUrl : SharedBase
- (instancetype)initWithProtocol:(SharedKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SharedKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedKtor_httpUrl *)doCopyProtocol:(SharedKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SharedKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SharedKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SharedKtor_httpHeaders <SharedKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SharedKtor_httpOutgoingContent : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) SharedLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SharedKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SharedKtor_httpHttpStatusCode : SharedBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SharedKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SharedKtor_utilsGMTDate : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (SharedKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (SharedKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SharedKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SharedKtor_httpHttpProtocolVersion : SharedBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol SharedKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SharedKtor_httpURLProtocol : SharedBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface SharedKtor_httpParametersBuilder : SharedKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(SharedKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SharedKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property SharedKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SharedKtor_httpURLBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SharedKotlinx_coroutines_coreChildHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SharedKotlinx_coroutines_coreChildJob <SharedKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SharedKotlinSequence
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SharedKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SharedKotlinx_coroutines_coreSelectInstance>)select block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SharedKtor_httpHttpMethodCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SharedKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SharedKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SharedKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SharedKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SharedKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SharedKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SharedKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SharedKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface SharedKtor_ioMemory : SharedBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(SharedKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (SharedKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (SharedKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface SharedKtor_ioBuffer : SharedBase
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (SharedKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(SharedKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) SharedKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface SharedKtor_ioChunkBuffer : SharedKtor_ioBuffer
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory origin:(SharedKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<SharedKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (SharedKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) SharedKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) SharedKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol SharedKtor_ioInput <SharedKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property SharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol SharedKotlinAppendable
@required
- (id<SharedKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SharedKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SharedKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol SharedKtor_ioOutput <SharedKotlinAppendable, SharedKtor_ioCloseable>
@required
- (id<SharedKotlinAppendable>)appendCsq:(SharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property SharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface SharedKtor_ioIoBuffer : SharedKtor_ioChunkBuffer <SharedKtor_ioInput, SharedKtor_ioOutput>
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory origin:(SharedKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory origin:(SharedKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<SharedKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<SharedKotlinAppendable>)appendCsq:(SharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<SharedKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<SharedKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(SharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (SharedKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (SharedKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(SharedInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(SharedInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property SharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface SharedKtor_ioAbstractInput : SharedBase <SharedKtor_ioInput>
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) SharedKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(SharedKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(SharedKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<SharedKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<SharedKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property SharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<SharedKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface SharedKtor_ioByteReadPacketBase : SharedKtor_ioAbstractInput
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) SharedKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface SharedKtor_ioByteReadPacketPlatformBase : SharedKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface SharedKtor_ioByteReadPacket : SharedKtor_ioByteReadPacketPlatformBase <SharedKtor_ioInput>
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (SharedKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol SharedKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (SharedKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SharedKotlinSuspendFunction1 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface SharedKtor_ioByteOrder : SharedKotlinEnum<SharedKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) SharedKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (SharedKotlinArray<SharedKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol SharedKotlinKType
@required
@property (readonly) NSArray<SharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<SharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SharedKtor_httpParameters <SharedKtor_utilsStringValues>
@required
@property (readonly) SharedKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SharedKtor_httpUrlCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SharedKtor_httpHeaderValueWithParameters : SharedBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SharedKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SharedKtor_httpContentType : SharedKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SharedKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SharedKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SharedKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SharedKtor_httpHttpStatusCodeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SharedKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SharedKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SharedKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SharedKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SharedKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SharedKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SharedKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SharedKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SharedKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SharedKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SharedKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SharedKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SharedKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SharedKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SharedKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SharedKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SharedKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SharedKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SharedKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SharedKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SharedKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SharedKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SharedKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SharedKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SharedKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SharedKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SharedKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SharedKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SharedKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SharedKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SharedKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SharedKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SharedKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SharedKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SharedKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SharedKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SharedKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SharedKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SharedKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SharedKtor_utilsGMTDateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SharedKtor_utilsWeekDay : SharedKotlinEnum<SharedKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SharedKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SharedKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SharedKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SharedKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SharedKotlinArray<SharedKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SharedKtor_utilsMonth : SharedKotlinEnum<SharedKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SharedKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SharedKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SharedKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SharedKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SharedKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SharedKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SharedKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SharedKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SharedKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SharedKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SharedKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SharedKotlinArray<SharedKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SharedKtor_httpHttpProtocolVersionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SharedKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SharedKtor_httpURLProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SharedKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SharedKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SharedKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SharedKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SharedKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SharedKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface SharedKtor_httpUrlEncodingOption : SharedKotlinEnum<SharedKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) SharedKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) SharedKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) SharedKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (SharedKotlinArray<SharedKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SharedKotlinx_coroutines_coreParentJob <SharedKotlinx_coroutines_coreJob>
@required
- (SharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SharedKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SharedKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SharedKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SharedKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SharedKotlinSuspendFunction0 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface SharedKtor_ioMemoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface SharedKtor_ioBufferCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol SharedKtor_ioObjectPool <SharedKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface SharedKtor_ioChunkBufferCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<SharedKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<SharedKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface SharedKotlinCharArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface SharedKtor_ioIoBufferCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<SharedKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<SharedKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<SharedKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface SharedKtor_ioAbstractInputCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface SharedKtor_ioByteReadPacketBaseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface SharedKtor_ioByteReadPacketCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface SharedKtor_ioByteOrderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SharedKotlinKTypeProjection : SharedBase
- (instancetype)initWithVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SharedKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedKotlinKTypeProjection *)doCopyVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SharedKtor_httpHeaderValueParam : SharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SharedKtor_httpHeaderValueWithParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SharedKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SharedKtor_httpContentTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SharedKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SharedKtor_utilsWeekDayCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SharedKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SharedKtor_utilsMonthCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SharedKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SharedKotlinx_coroutines_coreAtomicDesc : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SharedKotlinx_coroutines_coreOpDescriptor : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SharedKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : SharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface SharedKotlinCharIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SharedKotlinKVariance : SharedKotlinEnum<SharedKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SharedKotlinKVariance *out __attribute__((swift_name("out")));
+ (SharedKotlinArray<SharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SharedKotlinKTypeProjectionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinKTypeProjection *)contravariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (SharedKotlinKTypeProjection *)covariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (SharedKotlinKTypeProjection *)invariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SharedKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SharedKotlinx_coroutines_coreAtomicOp<__contravariant T> : SharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<SharedKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<SharedKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SharedBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : SharedKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
