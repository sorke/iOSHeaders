//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOUsageManager : NSObject
{
}

+ (void)registerConnectedCarInfo:(id)arg1;
+ (id)sharedManager;
- (void)captureTileCacheMissForRequestReason:(unsigned char)arg1 missType:(int)arg2 tileStyle:(int)arg3 tileZoom:(unsigned int)arg4 missCount:(unsigned int)arg5 missByteCount:(unsigned int)arg6;
- (void)captureTileCacheHitForRequestReason:(unsigned char)arg1 tileSource:(unsigned char)arg2 tileStyle:(int)arg3 tileZoom:(unsigned int)arg4 hitCount:(unsigned int)arg5 hitByteCount:(unsigned int)arg6;
- (int)_originTypeForTileLoadReason:(unsigned char)arg1;
- (void)captureFailedMsgMetricFromLogFrameworkAdaptor:(_Bool)arg1;
- (void)capturePurgeMetricWithState:(int)arg1 purgeReason:(int)arg2 fromLogFrameworkAdaptor:(_Bool)arg3;
- (void)captureNetworkMetricWithState:(int)arg1 fromLogFrameworkAdaptor:(_Bool)arg2 logCollectionRequest:(id)arg3;
- (void)captureTimeToLeaveInitialTravelTime:(double)arg1;
- (void)captureTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (_Bool)_isDiagnosticSubmissionEnabled;
- (void)clearStateTimingData;
- (void)captureMapsResultsDisplayedFeedbackForQueryString:(id)arg1 resultsArray:(id)arg2;
- (void)captureStateTransition:(id)arg1 force:(_Bool)arg2;
- (void)captureTileStateForLoadCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3;
- (void)captureTileStateForGridCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3;
- (void)captureTransitAppLaunchSource:(CDStruct_c3b9c2ee)arg1 destination:(CDStruct_c3b9c2ee)arg2 bundleIdentifier:(id)arg3;
- (void)captureDirectionsFeedbackLogMessage:(id)arg1 durationsInNavigationModes:(id)arg2;
- (void)captureRequestsForPlaceDataCache:(id)arg1 appIdentifier:(id)arg2;
- (void)captureCacheHitLogMessageForLocationShiftWithHitCount:(unsigned int)arg1 cacheMissCount:(unsigned int)arg2;
- (void)captureCacheHitLogMessageForTilesWithTileStyle:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (void)captureNetworkUsageForTile:(id)arg1 traits:(id)arg2;
- (void)_captureNetworUsageLogMessageForService:(int)arg1 requestType:(int)arg2 httpResponseStatusCode:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestDataSize:(int)arg6 responseDataSize:(int)arg7 responseTime:(int)arg8 requestAppId:(id)arg9 remoteAddressAndPort:(id)arg10 fromLogFrameworkAdaptor:(_Bool)arg11;
- (void)_captureNetworUsageLogMessageForProtobufSessionTask:(id)arg1 service:(int)arg2 requestType:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestAppId:(id)arg6 fromLogFrameworkAdaptor:(_Bool)arg7;
- (void)captureNetworkUsageForRequestToService:(int)arg1 httpResponseStatusCode:(unsigned long long)arg2 requestError:(id)arg3 responseSize:(unsigned long long)arg4 responseTime:(unsigned long long)arg5 remoteAddressAndPort:(id)arg6;
- (void)captureNetworkUsageForRequestToService:(int)arg1 httpResponseStatusCode:(unsigned long long)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 responseSize:(unsigned long long)arg5 responseTime:(unsigned long long)arg6 remoteAddressAndPort:(id)arg7;
- (void)captureNetworkUsageForProtobufSessionTask:(id)arg1 service:(int)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 fromLogFrameworkAdaptor:(_Bool)arg5;
- (void)captureNetworkUsageForProtobufSessionTask:(id)arg1 service:(int)arg2 requestType:(int)arg3 requestAppId:(id)arg4;
- (void)captureNetworkUsageForProtobufSessionTask:(id)arg1 service:(int)arg2 fromLogFrameworkAdaptor:(_Bool)arg3;
- (_Bool)shouldIgnoreUsageForCountry;
- (id)sharedLogMsgStateFactoryInstance;
- (id)sharedLogMsgEventFactoryInstance;
- (id)sharedLogManagerInstance;
- (id)sharedLoggerInstance;
- (id)init;
- (id)logContextByAddingMapViewStateWithMapRegion:(id)arg1 zoomLevel:(double)arg2 mapType:(int)arg3 toLogContext:(id)arg4;
- (id)logContextByAddingMapsSettingsStateWithPreferredTransportMode:(int)arg1 avoidTolls:(_Bool)arg2 avoidHighways:(_Bool)arg3 navVoiceVolume:(int)arg4 pauseSpokenAudioEnabled:(_Bool)arg5 findMyCarEnabled:(_Bool)arg6 trafficEnabled:(_Bool)arg7 labelEnabled:(_Bool)arg8 toLogContext:(id)arg9;
- (id)logContextByAddingMapRestoreStateWithUITargets:(id)arg1 toLogContext:(id)arg2;
- (id)logContextByAddingSuggestionsStateWithSearchFieldType:(int)arg1 searchString:(id)arg2 displayedResults:(id)arg3 selectedIndex:(int)arg4 acSequenceNumber:(int)arg5 toLogContext:(id)arg6;
- (id)logContextByAddingMapViewLocationStateWithLocationBucket:(int)arg1 currentLocationInViewport:(_Bool)arg2 toLogContext:(id)arg3;
- (id)logContextByAddingNavigationStateWithLineType:(int)arg1 navState:(int)arg2 distanceToDestination:(double)arg3 upcomingManeuverType:(int)arg4 distanceToManeuver:(int)arg5 isGroupedManeuver:(_Bool)arg6 speedBucket:(int)arg7 toLogContext:(id)arg8;
- (id)logContextByAddingPlaceCardStateWithPlaceActionDetails:(id)arg1 placeCardType:(int)arg2 mapItemCategory:(id)arg3 availableActions:(id)arg4 unactionableUIElements:(id)arg5 toLogContext:(id)arg6;
- (id)logContextByAddingPlaceCardStateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 toLogContext:(id)arg4;
- (id)logContextByAddingPlaceCardStateWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 toLogContext:(id)arg4;
- (void)captureTileCacheMissAnalyticForRequestReason:(int)arg1 missType:(int)arg2 tileStyle:(int)arg3 tileZoom:(unsigned int)arg4 missCount:(unsigned int)arg5 missByteCount:(unsigned int)arg6;
- (void)captureTileCacheHitAnalyticForRequestReason:(int)arg1 tileSource:(int)arg2 tileStyle:(int)arg3 tileZoom:(unsigned int)arg4 hitCount:(unsigned int)arg5 hitByteCount:(unsigned int)arg6;
- (void)captureParkedCarEventAtLocation:(id)arg1 atTime:(double)arg2 withUncertainty:(double)arg3;
- (void)captureBatchTrafficProbes:(id)arg1;
- (void)captureRealtimeTrafficProbes:(id)arg1 tripId:(id)arg2 probeCount:(unsigned long long)arg3 recvTime:(id)arg4;
- (void)captureWiFiConnectionQualityEvent:(id)arg1;
- (void)registerTouristInfo:(_Bool)arg1;
- (void)captureClientACSuggestionsEventWith:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 selectedIndex:(int)arg4;
- (void)captureTelemetricEnties:(id)arg1;
- (void)captureTelemetricEntityForEventKey:(int)arg1 eventValue:(unsigned long long)arg2 eventDetail:(id)arg3;
- (void)captureTelemetricEntityCountForEventKey:(int)arg1 eventDetail:(id)arg2;
- (void)captureFullNavTraceEventWithData:(id)arg1;
- (void)captureCommuteDoomWindow:(id)arg1 exitTime:(id)arg2 destinations:(id)arg3 reason:(long long)arg4 networkRequests:(unsigned long long)arg5 alerts:(unsigned long long)arg6;
- (void)captureProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4;
- (void)captureMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(_Bool)arg4 startDate:(id)arg5 forDuration:(double)arg6;
- (void)captureRefineSearchSessionEventWithSearchType:(int)arg1 refineSearchType:(int)arg2 suggestionItems:(id)arg3 searchString:(id)arg4;
- (void)captureListInteractionSessionEventWithListType:(int)arg1 listResultItems:(id)arg2 searchString:(id)arg3;
- (void)captureTimeToLeaveIntialTravelTimeEventWithTravelTime:(double)arg1;
- (void)capturerTimeToLeaveHypothesisEventWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (void)captureTransitAppLaunchEventForBundleId:(id)arg1 sourceLocation:(id)arg2 destinationLocation:(id)arg3;
- (void)captureDirectionsEventForDirectionsFeedbacks:(id)arg1 finalLocation:(id)arg2 arrivedAtDestination:(_Bool)arg3 navigationAudioFeedback:(struct GEONavigationAudioFeedback)arg4 durationOfTrip:(double)arg5 durationsInNavigationMode:(id)arg6;
- (void)captureLogFrameworkEventForMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logMessageType:(int)arg4;
- (void)captureLogFrameworkEventForMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logCollectionRequest:(id)arg4;
- (void)captureStaleResourcesEventForResources:(id)arg1;
- (void)captureCacheHitEventForLocationShiftWithHitCount:(unsigned int)arg1 cacheMissCount:(unsigned int)arg2;
- (void)captureCacheHitEventForTileCacheType:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (void)captureGenericAppErrorDomain:(id)arg1 appErrorCode:(long long)arg2;
- (void)captureNetworkEventForLoadingTileWithUsageInfo:(id)arg1 traits:(id)arg2;
- (void)captureNetworkEventForService:(int)arg1 requestType:(int)arg2 httpResponseStatusCode:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestDataSize:(int)arg6 responseDataSize:(int)arg7 responseTime:(int)arg8 requestAppId:(id)arg9 remoteAddressAndPort:(id)arg10 fromLogFrameworkAdaptor:(_Bool)arg11;
- (void)captureNetworkEventForProtobufSessionTask:(id)arg1 networkService:(int)arg2 requestType:(int)arg3 requestAppId:(id)arg4 fromLogFrameworkAdaptor:(_Bool)arg5;
- (void)captureNetworkEventForProtobufSessionTask:(id)arg1 networkService:(int)arg2 requestType:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestAppId:(id)arg6 fromLogFrameworkAdaptor:(_Bool)arg7;
- (void)capturePlaceDataCacheEventForPlaceRequest:(id)arg1 requestingAppId:(id)arg2;
- (void)captureTileSetStateEventForType:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4;
- (void)captureStateTransitionEventWithStates:(id)arg1 generateOnlyIfStateChanged:(_Bool)arg2;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 resultsArray:(id)arg4;
- (void)capturePlaceCardUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 placeCardType:(int)arg6 categoriesDisplayed:(id)arg7 categorySelected:(id)arg8;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesMetadataDisplayed:(id)arg4 categoryMetadataSelected:(id)arg5;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesDisplayed:(id)arg4 categorySelected:(id)arg5;
- (void)captureTransitPlaceCardUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 transitCardCategory:(int)arg10 transitSystem:(id)arg11 transitDepartureSequence:(id)arg12 transitIncident:(id)arg13;
- (void)capturePlaceCardUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15 categoriesDisplayed:(id)arg16 categorySelected:(id)arg17;
- (void)capturePlaceCardUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 routeDetails:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 selectedReportAnIssueIndex:(unsigned int)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4 mapRegion:(id)arg5 zoomLevel:(double)arg6 mapType:(int)arg7;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapsServerMetadata:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapRegion:(id)arg4 zoomLevel:(double)arg5 mapType:(int)arg6;
- (void)captureMapLaunchEventWithLaunchUrl:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(_Bool)arg3 ttlEventTime:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3;

@end

