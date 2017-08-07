//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDActivityCacheManagerObserver-Protocol.h>

@class HDActivityCacheManager, HKHeartRateSummary, NSString;

@interface HDHeartRateSummaryQueryServer : HDQueryServer <HDActivityCacheManagerObserver>
{
    HDActivityCacheManager *_activityCacheManager;
    HKHeartRateSummary *_latestSummary;
}

- (void).cxx_destruct;
- (void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(_Bool)arg3;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_shouldListenForUpdates;
- (void)_queue_stop;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6 activityCacheManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
