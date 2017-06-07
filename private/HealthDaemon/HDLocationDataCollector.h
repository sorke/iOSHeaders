//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/CLLocationManagerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocationManager, CMElevation, HDServer, HKLocationSeriesSample, NSString, NSUUID;
@protocol HDHealthDaemon, HDLocationEventDelegate, OS_dispatch_queue;

@interface HDLocationDataCollector : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <HDHealthDaemon> _daemon;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    CMElevation *_elevation;
    int _lastStatus;
    HKLocationSeriesSample *_seriesSample;
    double _lastPausedTime;
    unsigned long long _elevationGain;
    unsigned long long _activityType;
    NSUUID *_workoutUUID;
    id <HDLocationEventDelegate> _delegate;
    HDServer *_server;
}

@property(retain, nonatomic) HDServer *server; // @synthesize server=_server;
@property(nonatomic) __weak id <HDLocationEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_createLocationSeriesSampleAndStartLocation;
- (void)_handleElevationData:(id)arg1 error:(id)arg2;
- (void)_queue_resumeWorkout;
- (void)resumeWorkout;
- (void)_stopGPSUpdates;
- (void)_pauseLocationUpdates;
- (void)pauseWorkout;
- (void)_queue_start;
- (void)_startLocationUpdates;
- (void)startWorkout;
- (void)endWorkout;
- (void)_freezeCurrentLocationSeriesSample;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)initWithDaemon:(id)arg1 server:(id)arg2 activityType:(unsigned long long)arg3 workoutUUID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
