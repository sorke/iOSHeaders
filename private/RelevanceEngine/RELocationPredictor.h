//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import "REEngineLocationManagerObserver.h"

@class NSLock, NSMapTable, NSMutableDictionary, NSString, RTRoutineManager;

@interface RELocationPredictor : REPredictor <REEngineLocationManagerObserver>
{
    RTRoutineManager *_manager;
    NSMapTable *_routineData;
    NSMutableDictionary *_overrideRoutineType;
    NSLock *_routineDataLock;
}

+ (id)supportedFeatures;
+ (double)updateInterval;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)locationManagerDidUpdateLocation:(id)arg1;
- (void)_setOverrideLocation:(long long)arg1 forEngine:(id)arg2;
- (id)locationForEngine:(id)arg1 userLocation:(long long)arg2;
- (void)removeRelevanceEngine:(id)arg1;
- (void)addRelevanceEngine:(id)arg1;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

