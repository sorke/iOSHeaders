//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface _DKSync2Policy : NSObject
{
    _Bool _syncDisabled;
    _Bool _pushTriggersSync;
    _Bool _requireCharging;
    NSString *_name;
    unsigned long long _maxSyncPeriodInDays;
    unsigned long long _maxSyncDownIntervalInDays;
    unsigned long long _minSyncIntervalInSeconds;
    unsigned long long _minSyncWindowInSeconds;
    unsigned long long _minSyncsPerDay;
    unsigned long long _maxSyncsPerDay;
    unsigned long long _numChangesTriggeringSync;
    unsigned long long _singleDeviceSyncIntervalInDays;
    NSDictionary *_streamNamesToSync;
    NSArray *_streamNamesWithAdditionsTriggeringSync;
    NSArray *_streamNamesWithDeletionsTriggeringSync;
    unsigned long long _syncBatchSizeInEvents;
    unsigned long long _maxBatchesPerSync;
    unsigned long long _syncTimeoutInSeconds;
    unsigned long long _triggeredSyncDelayInSeconds;
    unsigned long long _policyDownloadIntervalInDays;
    NSArray *_streamNamesToAlwaysSync;
}

+ (id)disabledFeatures;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)policyFromDictionary:(id)arg1;
+ (_Bool)cloudSyncDisabled;
+ (_Bool)rapportSyncDisabled;
+ (id)policyForSyncTransportType:(long long)arg1;
+ (id)userDefaults;
@property(retain, nonatomic) NSArray *streamNamesToAlwaysSync; // @synthesize streamNamesToAlwaysSync=_streamNamesToAlwaysSync;
@property(nonatomic) unsigned long long policyDownloadIntervalInDays; // @synthesize policyDownloadIntervalInDays=_policyDownloadIntervalInDays;
@property(nonatomic) unsigned long long triggeredSyncDelayInSeconds; // @synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds;
@property(nonatomic) unsigned long long syncTimeoutInSeconds; // @synthesize syncTimeoutInSeconds=_syncTimeoutInSeconds;
@property(nonatomic) unsigned long long maxBatchesPerSync; // @synthesize maxBatchesPerSync=_maxBatchesPerSync;
@property(nonatomic) unsigned long long syncBatchSizeInEvents; // @synthesize syncBatchSizeInEvents=_syncBatchSizeInEvents;
@property(retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync; // @synthesize streamNamesWithDeletionsTriggeringSync=_streamNamesWithDeletionsTriggeringSync;
@property(retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync; // @synthesize streamNamesWithAdditionsTriggeringSync=_streamNamesWithAdditionsTriggeringSync;
@property(retain, nonatomic) NSDictionary *streamNamesToSync; // @synthesize streamNamesToSync=_streamNamesToSync;
@property(nonatomic) unsigned long long singleDeviceSyncIntervalInDays; // @synthesize singleDeviceSyncIntervalInDays=_singleDeviceSyncIntervalInDays;
@property(nonatomic) _Bool requireCharging; // @synthesize requireCharging=_requireCharging;
@property(nonatomic) _Bool pushTriggersSync; // @synthesize pushTriggersSync=_pushTriggersSync;
@property(nonatomic) unsigned long long numChangesTriggeringSync; // @synthesize numChangesTriggeringSync=_numChangesTriggeringSync;
@property(nonatomic) unsigned long long maxSyncsPerDay; // @synthesize maxSyncsPerDay=_maxSyncsPerDay;
@property(nonatomic) unsigned long long minSyncsPerDay; // @synthesize minSyncsPerDay=_minSyncsPerDay;
@property(nonatomic) unsigned long long minSyncWindowInSeconds; // @synthesize minSyncWindowInSeconds=_minSyncWindowInSeconds;
@property(nonatomic) unsigned long long minSyncIntervalInSeconds; // @synthesize minSyncIntervalInSeconds=_minSyncIntervalInSeconds;
@property(nonatomic) unsigned long long maxSyncDownIntervalInDays; // @synthesize maxSyncDownIntervalInDays=_maxSyncDownIntervalInDays;
@property(nonatomic) unsigned long long maxSyncPeriodInDays; // @synthesize maxSyncPeriodInDays=_maxSyncPeriodInDays;
@property(nonatomic) _Bool syncDisabled; // @synthesize syncDisabled=_syncDisabled;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1 urgency:(unsigned long long)arg2;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isSingleDevice:(_Bool)arg4 previousHighWaterMark:(id)arg5;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isSingleDevice:(_Bool)arg4;
- (_Bool)highPriorityForSyncType:(id)arg1 lastSyncDate:(id)arg2;
- (_Bool)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isSingleDevice:(_Bool)arg4 isCharging:(_Bool)arg5;
- (id)streamNamesToSyncWithSyncType:(id)arg1;
- (id)_streamNamesToSyncExceptDisabledFeatures:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

