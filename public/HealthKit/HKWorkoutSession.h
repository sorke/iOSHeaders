//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "_HKXPCExportable.h"

@class HKHealthStore, HKLiveWorkoutBuilder, HKTaskServerProxyProvider, HKWorkoutConfiguration, HKWorkoutSessionTaskConfiguration, NSDate, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HKWorkoutSession : NSObject <_HKXPCExportable, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <HKWorkoutSessionDelegate> _delegate;
    long long _state;
    NSDate *_startDate;
    NSDate *_endDate;
    HKWorkoutSessionTaskConfiguration *_configuration;
    HKTaskServerProxyProvider *_proxyProvider;
    id <HKWorkoutSessionDelegate> _strongDelegate;
    HKLiveWorkoutBuilder *_associatedWorkoutBuilder;
    HKHealthStore *_healthStore;
}

+ (_Bool)supportsSecureCoding;
+ (id)serverInterface;
+ (id)clientInterface;
+ (_Bool)_applicationHasRunningWorkout;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_unitTest_discardAssociatedWorkoutBuilder;
- (void)_setAssociatedWorkoutBuilder:(id)arg1;
- (id)associatedWorkoutBuilderWithDevice:(id)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3;
- (id)associatedWorkoutBuilder;
@property(readonly, nonatomic) _Bool isGymKitSession;
@property(readonly) NSDate *endDate;
@property(readonly) NSDate *startDate;
@property(readonly) long long state;
@property __weak id <HKWorkoutSessionDelegate> delegate;
@property(readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property(readonly) long long locationType;
@property(readonly) unsigned long long activityType;
@property(readonly, copy, nonatomic) NSUUID *identifier;
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)pauseWithCompletion:(CDUnknownBlockType)arg1;
- (void)pause;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)end;
- (void)stopActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopActivity;
- (void)startActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)startActivity;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepare;
- (void)client_didFailWithError:(id)arg1;
- (void)client_didGenerateEvents:(id)arg1;
- (void)client_didChangeToState:(long long)arg1 date:(id)arg2;
- (void)client_didUpdateStartDate:(id)arg1 endDate:(id)arg2;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (_Bool)_queue_shouldAttemptRecovery;
- (void)_queue_markRecoveryRequired;
- (void)_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupWithHealthStore:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithHealthStore:(id)arg1 taskConfiguration:(id)arg2 error:(id *)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

