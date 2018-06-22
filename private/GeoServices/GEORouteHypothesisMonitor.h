//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOETAUpdaterDelegate.h"
#import "NSSecureCoding.h"

@class GEOCommonOptions, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsRequestFeedback, GEOETARoute, GEOETAUpdater, GEOLocation, GEOMapRegion, GEOMapServiceTraits, GEORouteAttributes, GEORouteHypothesis, GEORouteHypothesizerAnalyticsStore, GEORouteMatch, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface GEORouteHypothesisMonitor : NSObject <GEOETAUpdaterDelegate, NSSecureCoding>
{
    CDUnknownBlockType _handler;
    GEODirectionsRequestFeedback *_feedback;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEOLocation *_originLocation;
    int _transportType;
    NSDate *_arrivalDate;
    GEORouteHypothesis *_hypothesis;
    GEOLocation *_lastLocation;
    GEOETAUpdater *_etaUpdater;
    GEOETARoute *_liveETARoute;
    GEOETARoute *_baselineETARoute;
    GEORouteAttributes *_routeAttributes;
    GEOCommonOptions *_commonOptions;
    GEOMapServiceTraits *_traits;
    GEORouteHypothesizerAnalyticsStore *_analyticsStore;
    GEOComposedRoute *_route;
    NSObject<OS_dispatch_queue> *_requestIsolationQueue;
    GEODirectionsRequest *_currentRequest;
    _Bool _needReroute;
    NSMutableArray *_rerouteEntries;
    GEORouteMatch *_routeMatch;
    GEOLocation *_lastMatchedLocation;
    _Bool _hasArrived;
    _Bool _isTraveling;
    double _travelScore;
    GEOMapRegion *_arrivalMapRegion;
    NSString *_traceName;
    id <GEOTTLTraceRecorder> _traceRecorder;
}

+ (id)monitorWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6;
+ (void)setTTLTraceRecorderFactory:(id)arg1;
+ (id)ttlTraceRecorderFactory;
+ (void)setServerFormattedStringFormatter:(id)arg1;
+ (id)serverFormattedStringFormatter;
+ (void)setUserPreferencesProvider:(id)arg1;
+ (id)userPreferencesProvider;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) GEORouteHypothesis *hypothesis; // @synthesize hypothesis=_hypothesis;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOComposedWaypoint *source; // @synthesize source=_source;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
- (void).cxx_destruct;
- (id)routeMatchForLocation:(id)arg1;
- (void)travelStateChanged;
- (void)checkRouteForLocation:(id)arg1;
- (void)cancelCurrentRequest;
- (void)_updateScoreForLocation:(id)arg1;
- (void)_routeRequestFailed:(id)arg1;
- (void)_recievedRouteResponse:(id)arg1 forLocation:(id)arg2 isReroute:(_Bool)arg3;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (void)_executeBlockAccessingCurrentRequest:(CDUnknownBlockType)arg1;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterRequestCompleted:(id)arg1;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)_updateRouteMatchETAAndTravelState;
- (void)_showDebugAlert;
- (void)callHandlerIvar;
- (void)clientDisplayedUINotification:(unsigned long long)arg1;
- (void)stopMonitoring;
- (void)recordETAUpdatesAfterEventStart;
- (void)_fetchETAWithRouteMatch:(id)arg1;
- (void)_recalculateETAWithRouteMatch:(id)arg1;
- (void)_updateLocation:(id)arg1 allowServer:(_Bool)arg2;
- (void)updateLocation:(id)arg1 allowServer:(_Bool)arg2 hypothesisHandler:(CDUnknownBlockType)arg3;
- (_Bool)_hasInitialRoute;
@property(readonly, nonatomic) _Bool supportsDirections;
@property(readonly, nonatomic) _Bool supportsLiveTraffic;
@property(readonly, nonatomic) NSString *routeName;
@property(readonly, copy) NSString *description;
- (void)_recordTraceForEvent:(long long)arg1 parameters:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_finishEtaUpdaterInit;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

