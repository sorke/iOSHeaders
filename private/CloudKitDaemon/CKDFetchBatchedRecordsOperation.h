//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

#import "CKDOperationPipelining.h"

@class CKDRecordCache, CKDRecordFetchAggregator, NSArray, NSDictionary, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchBatchedRecordsOperation : CKDDatabaseOperation <CKDOperationPipelining>
{
    _Bool _shouldFetchAssetContents;
    _Bool _fetchAllChanges;
    _Bool _forcePCSDecryptionAttempt;
    CKDRecordCache *_recordCache;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSSet *_desiredAssetKeys;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    unsigned long long _numRequestsSent;
    CKDRecordFetchAggregator *_recordFetcher;
    NSMutableArray *_requestInfos;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property(nonatomic) _Bool forcePCSDecryptionAttempt; // @synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property(retain, nonatomic) CKDRecordFetchAggregator *recordFetcher; // @synthesize recordFetcher=_recordFetcher;
@property(nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(retain, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
- (void).cxx_destruct;
- (void)_noteOperationFinishedBlockEnd;
- (void)_noteOperationEnding;
- (void)_noteOperationBeginning;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (id)activityCreate;
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;
- (void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3;
- (void)_handleRecordDelete:(id)arg1 recordType:(id)arg2 perRequestSchedulerInfo:(id)arg3;
- (void)_handleChangedRecords:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1;
@property(readonly, nonatomic) CKDRecordCache *recordCache; // @synthesize recordCache=_recordCache;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

