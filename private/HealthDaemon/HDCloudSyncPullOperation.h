//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressReporting.h"

@class CKContainer, CKServerChangeToken, HDCloudSyncOperationConfiguration, HDCloudSyncStore, HDCloudSyncStoreRecord, HDCloudSyncZone, NSDate, NSFileHandle, NSMutableArray, NSObject<OS_dispatch_queue>, NSProgress, NSString, NSUUID, _HDCloudSyncStorePersistableState;

@interface HDCloudSyncPullOperation : NSObject <NSProgressReporting>
{
    HDCloudSyncOperationConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    HDCloudSyncStoreRecord *_storeRecord;
    HDCloudSyncZone *_pullZone;
    CKContainer *_container;
    HDCloudSyncStore *_syncStore;
    NSMutableArray *_fetchedChangeRecords;
    CKServerChangeToken *_initialServerChangeToken;
    CKServerChangeToken *_serverChangeToken;
    NSFileHandle *_fileHandle;
    NSProgress *_allAssetProgress;
    NSProgress *_perAssetRecordProgress;
    NSUUID *_operationIdentifier;
    NSDate *_startTime;
    NSString *_cloudKitIdentifier;
    _Bool _hasAppliedChange;
    _Bool _queue_hasStarted;
    CDUnknownBlockType _completion;
    NSProgress *_progress;
}

+ (id)_assetFileHandleWithName:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_queue_endFetchChangesOperation:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_queue_recordChangeApplied;
- (_Bool)_applySyncChanges:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (id)_zipArchiveExtractorForChangeRecord:(id)arg1 assetContentInMemory:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_queue_persistFetchedArchiveAsset:(id)arg1 error:(id *)arg2;
- (void)_fetchRecordsCompletionForOperation:(id)arg1 recordsByRecordID:(id)arg2 operatioError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_perRecordCompletionForOperation:(id)arg1 record:(id)arg2 recordID:(id)arg3 recordAssetContentInMemory:(_Bool)arg4 error:(id)arg5 errorCompletion:(CDUnknownBlockType)arg6;
- (void)_queue_fetchAssetForChangeRecord:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (_Bool)_shouldApplyAnchorRangeMap:(id)arg1 receivedAnchorMap:(id)arg2;
- (_Bool)_isValidAnchorRangeMap:(id)arg1 lastAnchorMap:(id)arg2 error:(id *)arg3;
- (id)_queue_requiredRecordsWithFetchedChangeRecords:(id)arg1 error:(id *)arg2;
- (_Bool)_isValidChangeRecord:(id)arg1;
- (void)_recordChangedForOperation:(id)arg1 record:(id)arg2;
- (_Bool)_queue_updatePersistedServerChangeToken:(id)arg1 error:(id *)arg2;
- (void)_recordZoneFetchCompletionForOperation:(id)arg1 recordZoneID:(id)arg2 serverChangeToken:(id)arg3 recordZoneError:(id)arg4;
- (void)_queue_fetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2;
- (void)_queue_helpFetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2 recordIndex:(long long)arg3;
- (void)_fetchRecordZoneChangesCompletionForOperation:(id)arg1 error:(id)arg2;
- (void)_queue_setupAndTriggerFetchChangesOperation:(id)arg1;
- (id)_queue_getFetchChangesOperation;
- (void)_queue_startPullOperation;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) _HDCloudSyncStorePersistableState *persistedStoreState;
- (id)initWithConfiguration:(id)arg1 pullZone:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

