//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface IMCloudKitSyncState : NSObject
{
    _Bool _hasExited;
    _Bool _isDisablingDevices;
    _Bool _accountIsEnabled;
    unsigned long long _syncControllerSyncState;
    long long _syncControllerSyncType;
    long long _syncControllerRecordType;
    NSDate *_exitDate;
    long long _changingEnabledState;
    NSDate *_lastSyncDate;
    NSArray *_errors;
    long long _accountStatus;
    long long _syncState;
}

+ (id)logHandle;
@property(readonly, nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property(readonly, nonatomic) _Bool accountIsEnabled; // @synthesize accountIsEnabled=_accountIsEnabled;
@property(readonly, nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property(readonly, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic) _Bool isDisablingDevices; // @synthesize isDisablingDevices=_isDisablingDevices;
@property(readonly, nonatomic) long long changingEnabledState; // @synthesize changingEnabledState=_changingEnabledState;
@property(readonly, copy, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(readonly, nonatomic) _Bool hasExited; // @synthesize hasExited=_hasExited;
@property(readonly, nonatomic) long long syncControllerRecordType; // @synthesize syncControllerRecordType=_syncControllerRecordType;
@property(readonly, nonatomic) long long syncControllerSyncType; // @synthesize syncControllerSyncType=_syncControllerSyncType;
@property(readonly, nonatomic) unsigned long long syncControllerSyncState; // @synthesize syncControllerSyncState=_syncControllerSyncState;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSyncEnabledForDisplayOnly;
@property(readonly, nonatomic) _Bool canChangeEnabledSetting;
@property(readonly, nonatomic) _Bool canStartSyncing;
- (_Bool)_isChangingEnabledState;
@property(readonly, nonatomic) _Bool canEnableSyncing;
- (id)description;
@property(readonly, nonatomic) _Bool syncingFailed;
@property(readonly, nonatomic) _Bool isSyncingAvailable;
@property(readonly, nonatomic) _Bool isSyncingEnabled;
- (id)syncErrorWithDomain:(id)arg1 code:(long long)arg2;
@property(readonly, nonatomic) _Bool isSyncingPaused;
@property(readonly, nonatomic) _Bool isSyncing;
- (id)initWithAccountEnabled:(_Bool)arg1 stateDictionary:(id)arg2;
- (id)logHandle;
- (id)createSyncProgressWithSyncStatistics:(id)arg1;
- (_Bool)shouldFetchSyncStatistics;
- (_Bool)shouldRescheduleSyncSyncProgress;
- (_Bool)_shouldHideProgressInFirstSevenDays;

@end

