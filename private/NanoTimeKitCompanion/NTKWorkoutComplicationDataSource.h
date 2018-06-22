//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class HKHealthStore, HKObserverQuery, HKSampleQuery, HKWorkout, NSArray, NSObject<OS_dispatch_queue>, _HKFirstPartyWorkoutSnapshot;

@interface NTKWorkoutComplicationDataSource : NTKComplicationDataSource
{
    NSObject<OS_dispatch_queue> *_healthQueue;
    int _lockStateNotifyToken;
    _Bool _deviceIsLocked;
    int _workoutStateNotifyToken;
    NSArray *_animationImages;
    _Bool _frozen;
    _Bool _loadingLastWorkout;
    _Bool _hasKnownLastWorkoutState;
    HKWorkout *_lastWorkout;
    _HKFirstPartyWorkoutSnapshot *_activeWorkoutSnapshot;
    HKHealthStore *_healthStore;
    HKSampleQuery *_lastWorkoutQuery;
    HKObserverQuery *_workoutObservationQuery;
}

+ (id)_templateForWorkout:(id)arg1 family:(long long)arg2;
+ (id)_unknownTemplateForFamily:(long long)arg1;
+ (id)_workoutTintColor;
+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
@property(retain, nonatomic) HKObserverQuery *workoutObservationQuery; // @synthesize workoutObservationQuery=_workoutObservationQuery;
@property(retain, nonatomic) HKSampleQuery *lastWorkoutQuery; // @synthesize lastWorkoutQuery=_lastWorkoutQuery;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) _HKFirstPartyWorkoutSnapshot *activeWorkoutSnapshot; // @synthesize activeWorkoutSnapshot=_activeWorkoutSnapshot;
@property(nonatomic) _Bool hasKnownLastWorkoutState; // @synthesize hasKnownLastWorkoutState=_hasKnownLastWorkoutState;
@property(retain, nonatomic) HKWorkout *lastWorkout; // @synthesize lastWorkout=_lastWorkout;
@property(nonatomic, getter=isLoadingLastWorkout) _Bool loadingLastWorkout; // @synthesize loadingLastWorkout=_loadingLastWorkout;
- (void).cxx_destruct;
- (void)_updateActiveWorkoutState;
- (id)_makeLastWorkoutQuery;
- (id)_makeObservationQuery;
- (void)_stopLastWorkoutQuerySynchronously:(_Bool)arg1;
- (void)_startLastWorkoutQueryIfPossible;
- (void)_invalidate;
- (void)_stopObservingSynchronously:(_Bool)arg1;
- (void)_startObserving;
- (_Bool)_hasPausedActiveWorkout;
- (_Bool)_hasActiveWorkout;
- (id)_makeAnimatedImageProvider;
- (id)_animationImages;
- (id)_templateForActiveWorkout;
- (id)_noWorkoutsTemplate;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)complicationApplicationIdentifier;
- (void)resume;
- (void)pause;
- (id)lockedTemplate;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end

