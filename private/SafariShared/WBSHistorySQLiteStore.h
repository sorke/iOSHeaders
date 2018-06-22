//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSHistoryLoader.h"
#import "WBSHistoryLoaderDelegate.h"
#import "WBSHistoryStore.h"

@class NSArray, NSCountedSet, NSData, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, WBSHistoryCrypto, WBSPeriodicActivityScheduler, WBSSQLiteDatabase, WBSSQLiteStatementCache;

@interface WBSHistorySQLiteStore : NSObject <WBSHistoryLoaderDelegate, WBSHistoryStore, WBSHistoryLoader>
{
    NSURL *_databaseURL;
    unsigned long long _itemCountLimit;
    Class _historyItemClass;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteStatementCache *_statements;
    NSMutableDictionary *_clientVersions;
    NSMutableDictionary *_itemsByDatabaseID;
    NSMapTable *_weakVisitsByDatabaseID;
    NSMutableSet *_pendingAddsOrUpdates;
    NSMutableSet *_pendingDeletes;
    NSMutableSet *_pendingVisitDeletes;
    NSMutableSet *_pendingTombstones;
    _Bool _commitGenerationValuesOnNextWrite;
    long long _currentGeneration;
    long long _lastSyncedGeneration;
    NSData *_pushThrottlerData;
    NSData *_fetchThrottlerData;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    long long _cachedNumberOfDevicesInSyncCircle;
    _Bool _loadInProgress;
    NSArray *_loadedItems;
    NSArray *_discardedItems;
    NSCountedSet *_loadedStringsForUserTypedDomainExpansion;
    int _importState;
    NSDate *_loadStartTime;
    NSTimer *_writeTimer;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    _Bool _isClosed;
    NSDate *_lastMaintenanceDate;
    _Bool _writeLastMaintenanceDateOnNextWrite;
    _Bool _checkpointWriteAheadLogOnNextWrite;
    WBSPeriodicActivityScheduler *_maintenanceScheduler;
    _Bool _pushNotificationsAreInitialized;
    id <WBSHistoryStoreDelegate> _delegate;
    double _historyAgeLimit;
    WBSSQLiteDatabase *_database;
    WBSHistoryCrypto *_crypto;
}

@property(readonly, nonatomic) WBSHistoryCrypto *crypto; // @synthesize crypto=_crypto;
@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
@property(nonatomic) double historyAgeLimit; // @synthesize historyAgeLimit=_historyAgeLimit;
@property(nonatomic) _Bool pushNotificationsAreInitialized; // @synthesize pushNotificationsAreInitialized=_pushNotificationsAreInitialized;
@property(nonatomic) __weak id <WBSHistoryStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_visitsOrderedForInsertion:(id)arg1;
- (id)_itemsOrderedForInsertion:(id)arg1;
@property(readonly, nonatomic) NSData *salt;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)_checkpointWriteAheadLog;
- (void)_expireOldVisits;
- (void)_recomputeDerivedVisitCountScores;
- (void)_enforceAgeAndItemCountLimits:(CDUnknownBlockType)arg1;
- (void)_performMaintenance:(CDUnknownBlockType)arg1;
- (void)performMaintenance:(CDUnknownBlockType)arg1;
- (void)_scheduleMaintenance;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (void)_removeVisitsProvidedByBlockInvokedOnDatabaseQueue:(CDUnknownBlockType)arg1 addingTombstone:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_shouldEmitLegacyTombstones;
- (id)_visitsCreatedMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4;
- (id)_visitsCreatedMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3;
- (id)_visitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (id)_visitsFromRows:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (void)_setMetadataDataValue:(id)arg1 forKey:(id)arg2;
- (id)_metadataDataValueForKey:(id)arg1;
- (void)_setMetadataInt64Value:(long long)arg1 forKey:(id)arg2;
- (long long)_metadataInt64ValueForKey:(id)arg1;
- (id)_visitsWithOrigins:(id)arg1;
- (id)visitForRow:(id)arg1;
- (id)visitForItem:(id)arg1 row:(id)arg2;
- (id)existingItemFromVisitRow:(id)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(unsigned long long)arg1;
- (void)_loadClientVersions;
- (void)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (void)_insertTombstone:(id)arg1;
- (int)_setOrigin:(long long)arg1 forVisitsFromOrigin:(long long)arg2;
- (void)_updateVisitRedirectRelationships:(id)arg1;
- (void)_updateVisit:(id)arg1;
- (void)_updateItem:(id)arg1;
- (void)_insertVisit:(id)arg1;
- (void)_insertItem:(id)arg1;
- (void)_processPendingVisitDeletes;
- (void)_processPendingDeletes;
- (void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
- (void)removeVisitsOnDatabaseQueue:(id)arg1;
- (void)removeItemsOnDatabaseQueue:(id)arg1;
- (id)_deletionPlanForDeletionOfVisits:(id)arg1;
- (void)_processPendingWrites;
- (void)_writeTimerFired;
- (void)_scheduleWrite;
- (void)_loadRedirectVisitsForLoadedItems:(id)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircleOnDatabaseQueue;
- (void)_loadFromDatabase;
- (double)_ageLimitSinceReferenceDate;
- (void)_openDatabase:(id)arg1 andCheckIntegrity:(_Bool)arg2;
- (_Bool)_checkDatabaseIntegrity;
- (_Bool)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1;
- (void)_finishLoadingOnMainThread;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (void)_loadHistory;
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (id)allVisitsForItemsOnDatabaseQueue:(id)arg1;
- (void)_setLastSyncedGeneration:(unsigned long long)arg1;
- (long long)_lastSyncedGeneration;
- (void)_incrementCurrentGeneration;
- (long long)_currentGeneration;
- (void)replayAndAddTombstone:(id)arg1;
- (void)getAllTombstonesWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isUsingInMemoryDatabase;
@property(nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property(copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData;
@property(copy, nonatomic) NSData *fetchThrottlerData;
@property(copy, nonatomic) NSData *pushThrottlerData;
- (void)resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_tombstonesNeedingSync;
- (void)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1;
- (id)_visitsNeedingSyncWithVisitSyncWindow:(double)arg1;
- (void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 convertTombstonesToSecureFormat:(_Bool)arg2;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearHistoryVisitsMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 addingTombstone:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_clearHistoryVisitsMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 addingTombstone:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 addingTombstone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateGenerationForVisits:(id)arg1;
- (void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)visitTitleWasUpdated:(id)arg1;
- (void)visitsWereModified:(id)arg1;
- (void)visitsWereAdded:(id)arg1;
- (void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
- (void)itemsWereModified:(id)arg1 byUserInitiatedAction:(_Bool)arg2;
- (void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(_Bool)arg2;
- (void)waitForLoadingToComplete;
- (void)startLoading;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

