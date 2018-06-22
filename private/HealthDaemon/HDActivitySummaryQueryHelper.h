//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDataObserver.h"
#import "HDDatabaseProtectedDataObserver.h"

@class HDActivitySummaryBuilder, HDProfile, HDSQLitePredicate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, _HKFilter;

@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    _HKFilter *_filter;
    HDActivitySummaryBuilder *_activitySummaryBuilder;
    _Bool _initialResultsSent;
    _Bool _needsUpdateAfterUnlock;
    NSMutableDictionary *_previousActivityCachesByCacheIndex;
    long long _lastProcessedAnchor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _initialResultsHandler;
    CDUnknownBlockType _updateHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) CDUnknownBlockType initialResultsHandler; // @synthesize initialResultsHandler=_initialResultsHandler;
- (void).cxx_destruct;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)_queue_filterActivityCaches:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)_queue_addActivityCacheToCachedSamples:(id)arg1;
- (void)_queue_updateActivitySummariesWithNewActivityCaches:(id)arg1 anchor:(id)arg2;
- (void)_queue_updatePreviousActivityCachesWithNewCaches:(id)arg1;
- (id)_fetchActivityCacheIndicesWithAnchor:(long long)arg1 predicate:(id)arg2 error:(id *)arg3;
- (id)_queue_fetchActivitySummariesWithPredicate:(id)arg1 error:(id *)arg2;
- (void)_queue_deliverActivitySummariesMatchingPredicate:(id)arg1;
- (void)_queue_deliverInitialResults;
- (void)_queue_deliverUpdates;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1;
- (void)_queue_deliverErrorToClient:(id)arg1;
@property _Bool shouldIncludeStatistics;
@property _Bool shouldIncludePrivateProperties;
- (_Bool)_shouldStopProcessing;
- (void)_queue_stop;
- (void)stop;
- (void)pause;
- (void)_queue_start;
- (void)start;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 filter:(id)arg2 initialResultsHandler:(CDUnknownBlockType)arg3 updateHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

