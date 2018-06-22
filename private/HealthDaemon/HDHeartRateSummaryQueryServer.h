//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import "HDActivityCacheManagerObserver.h"

@class HDActivityCacheManager, HKHeartRateSummary, NSString;

@interface HDHeartRateSummaryQueryServer : HDQueryServer <HDActivityCacheManagerObserver>
{
    HKHeartRateSummary *_latestSummary;
    HDActivityCacheManager *_activityCacheManager;
}

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 error:(id *)arg6;
+ (Class)queryClass;
@property(nonatomic) __weak HDActivityCacheManager *activityCacheManager; // @synthesize activityCacheManager=_activityCacheManager;
- (void).cxx_destruct;
- (void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(_Bool)arg3;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_shouldListenForUpdates;
- (void)_queue_stop;
- (void)_queue_start;
- (id)heartRateSummaryQueryClientProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

