//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, MNLocation, MNNavigationSession, MNObserverHashTable;

@interface MNLocationTracker : NSObject
{
    MNObserverHashTable *_safeDelegate;
    int _state;
    GEOApplicationAuditToken *_auditToken;
    MNLocation *_lastMatchedLocation;
    MNNavigationSession *_navigationSession;
    _Bool _localizeRoadNames;
}

@property(retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) __weak MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MNObserverHashTable *safeDelegate; // @synthesize safeDelegate=_safeDelegate;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation; // @synthesize lastMatchedLocation=_lastMatchedLocation;
@property(nonatomic, setter=_setState:) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_defaultsDidChange;
- (void)_updateShouldLocalizeRoadNames;
- (_Bool)_checkArrivalForLocation:(id)arg1 route:(id)arg2 destination:(id)arg3;
- (_Bool)_checkArrivalForLocation:(id)arg1;
- (void)_roadFeaturesForFeature:(CDStruct_c707fdd0 *)arg1 outRoadName:(id *)arg2 outShieldText:(id *)arg3 outShieldType:(long long *)arg4;
- (void)_updateMatchedLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)_setIsNavigatingInLowGuidance:(_Bool)arg1;
- (_Bool)paused;
- (void)resume;
- (void)pause;
- (_Bool)shouldAllowPause;
- (void)updateVehicleHeading:(double)arg1 timestamp:(id)arg2;
- (void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2;
- (void)updateLocation:(id)arg1;
- (void)_switchedToStepAtIndex:(unsigned long long)arg1;
- (id)matchedLocationForLocation:(id)arg1;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (void)updateDestination:(id)arg1 finishedHandler:(CDUnknownBlockType)arg2;
- (void)stopTracking;
- (void)startTracking;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool shouldProjectAlongRoute;
@property(readonly, nonatomic) _Bool hasArrived;
@property(readonly, nonatomic) int transportType;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1;
- (id)init;
- (void)traceJumpedInTime;
- (void)tracePaused;
- (void)traceForcedActiveTransportTypeChange:(int)arg1;
- (void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;

@end

