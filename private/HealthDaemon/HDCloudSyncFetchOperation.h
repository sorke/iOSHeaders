//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressReporting.h"

@class HDCloudSyncOperationConfiguration, HDCloudSyncZone, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSProgress, NSSet, NSString, NSUUID;

@interface HDCloudSyncFetchOperation : NSObject <NSProgressReporting>
{
    HDCloudSyncOperationConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_operationIdentifier;
    NSDate *_startTime;
    NSString *_cloudKitIdentifier;
    _Bool _queue_hasStarted;
    CDUnknownBlockType _completion;
    NSSet *_allContainers;
    NSSet *_allOwnerIdentifiers;
    double _timeIntervalBeforeOwnershipTransfer;
    NSMutableDictionary *_zonesByIdentifier;
    NSMutableArray *_zonesPendingDeletion;
    HDCloudSyncZone *_primaryPushZone;
    NSMutableArray *_pendingFetchRecordZonesOperations;
    NSMutableArray *_pendingFetchRecordsOperations;
    NSMutableArray *_zonesPendingPushSequenceValidation;
    NSProgress *_progress;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_deleteRecordZones:(id)arg1 container:(id)arg2;
- (void)_deleteRecordZonesWithLostManateeIdentitiesForPartialError:(id)arg1 container:(id)arg2;
- (void)_queue_scheduleZoneForDeletion:(id)arg1;
- (id)_queue_zoneForIdentifier:(id)arg1 container:(id)arg2;
- (id)_queue_zoneForIdentifier:(id)arg1;
- (long long)_typeForZoneIdentifier:(id)arg1;
- (_Bool)_canIgnorePartialFailureError:(id)arg1 error:(id *)arg2;
- (void)_persistState:(id)arg1 syncStore:(id)arg2;
- (long long)_queue_checkForOwnershipLoss;
- (long long)_queue_checkForOwnershipTakeover;
- (void)_queue_performCleanupAndFinishFetch;
- (void)_queue_garbageCollectZones;
- (id)_queue_findAbandonedZones;
- (_Bool)_orderedChangeRecordSequenceRequiresRebase:(id)arg1;
- (_Bool)_isValidChangeRecord:(id)arg1 forStoreRecord:(id)arg2;
- (void)_verifySequenceForPushStore:(id)arg1 inContainer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_checkForHeaderValidationCompletion;
- (void)_queue_validateFetchedZones;
- (long long)_queue_validatePushZone:(id)arg1 inContainer:(id)arg2 error:(id *)arg3;
- (void)_queue_verifySequenceForPushZone:(id)arg1 container:(id)arg2 store:(id)arg3;
- (long long)_queue_validateAnchorRangesForPushZone:(id)arg1 error:(id *)arg2;
- (long long)_queue_validateAnchorRangesForPushZone:(id)arg1 sequenceRecord:(id)arg2 error:(id *)arg3;
- (long long)_queue_checkForExpiredEmptyZonesWithStore:(id)arg1 pushZone:(id)arg2 state:(id)arg3 error:(id *)arg4;
- (long long)_queue_validateStoreRecordForPushZone:(id)arg1 error:(id *)arg2;
- (long long)_queue_findPushZonesWithError:(id *)arg1;
- (long long)_queue_requestOwnershipChangeWithReason:(id)arg1 error:(id *)arg2;
- (_Bool)_queue_checkForOrphanedSequenceRecords;
- (void)_queue_checkForHeaderRecordFetchCompletion;
- (void)_queue_fetchHeaderRecords;
- (void)_queue_startHeaderRecordFetchForContainer:(id)arg1;
- (void)_queue_startHeaderRecordFetchForZoneIDs:(id)arg1 container:(id)arg2;
- (void)_queue_fetchHeaderRecordsByZoneForZoneIDs:(id)arg1 container:(id)arg2;
- (id)_fetchRecordsOperationForZones:(id)arg1 container:(id)arg2;
- (void)_queue_processFetchedRecords:(id)arg1 container:(id)arg2;
- (long long)_queue_processFetchedRecord:(id)arg1 container:(id)arg2 error:(id *)arg3;
- (long long)_queue_processFetchedRecord:(id)arg1 recordClass:(Class)arg2 zone:(id)arg3 error:(id *)arg4;
- (void)_queue_checkForZoneFetchCompletion;
- (void)_queue_fetchSyncZones;
- (void)_queue_startZoneFetchForContainer:(id)arg1;
- (_Bool)_queue_hasFinished;
- (void)_queue_finishWithStatus:(long long)arg1 error:(id)arg2;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

