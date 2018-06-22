//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"
#import "SCKDatabaseStore.h"
#import "SCKDatabaseStoreCoordinator.h"
#import "SCKOperationThrottlerDelegate.h"

@class CKServerChangeToken, NSDate, NSFileCoordinator, NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSSet, NSString, NSURL, SCKDatabaseSchema, SCKTimedOperationThrottler;

@interface SCKDatabaseJSONStore : NSObject <SCKOperationThrottlerDelegate, NSFilePresenter, SCKDatabaseStoreCoordinator, SCKDatabaseStore>
{
    _Bool _loadedFromDisk;
    _Bool _havePendingChanges;
    unsigned int _lastKnownStoreChangeTag;
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    SCKDatabaseSchema *_schema;
    NSFileCoordinator *_fileCoordinator;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_observers;
    NSMutableDictionary *_zoneStoresByName;
    SCKTimedOperationThrottler *_saveThrottler;
    NSURL *_storeURL;
    unsigned long long _diskReadCount;
    unsigned long long _diskWriteCount;
}

@property(readonly, nonatomic) unsigned long long diskWriteCount; // @synthesize diskWriteCount=_diskWriteCount;
@property(readonly, nonatomic) unsigned long long diskReadCount; // @synthesize diskReadCount=_diskReadCount;
@property(readonly, copy, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) SCKTimedOperationThrottler *saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property(nonatomic) _Bool havePendingChanges; // @synthesize havePendingChanges=_havePendingChanges;
@property(retain, nonatomic) NSMutableDictionary *zoneStoresByName; // @synthesize zoneStoresByName=_zoneStoresByName;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned int lastKnownStoreChangeTag; // @synthesize lastKnownStoreChangeTag=_lastKnownStoreChangeTag;
@property(nonatomic) _Bool loadedFromDisk; // @synthesize loadedFromDisk=_loadedFromDisk;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, nonatomic) SCKDatabaseSchema *schema; // @synthesize schema=_schema;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
- (void).cxx_destruct;
- (id)_decodeDate:(id)arg1;
- (id)_encodeDate:(id)arg1;
- (id)_decodeCodableObjectOfClass:(Class)arg1 from:(id)arg2 error:(id *)arg3;
- (id)_encodeCodableObject:(id)arg1;
- (void)_reloadIfNeededFromFileURL:(id)arg1;
- (void)_loadFromFileURL:(id)arg1;
- (void)_saveIfNeededToFileURL:(id)arg1;
- (void)_saveToFileURL:(id)arg1;
- (_Bool)flushToDiskWithTimeout:(double)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (id)zoneStoreForSchema:(id)arg1;
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

