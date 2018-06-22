//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSeriesBuilderServer.h>

#import "HKWorkoutRouteBuilderServerInterface.h"

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface>
{
    HKWorkoutRoute *_route;
}

+ (id)taskIdentifier;
+ (id)serverEntitlements;
@property(retain, nonatomic) HKWorkoutRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (_Bool)_validateRouteData:(id)arg1 error:(out id *)arg2;
- (void)queue_recoverBuilder;
- (void)createSeriesSampleIfNeeded:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)seriesSample;
- (void)_queue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)server_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

