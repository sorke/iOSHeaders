//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKSyncRemoteKnowledgeStorage.h"

@class _DKSyncCloudKitKnowledgeStorage;

@interface _DKSyncDownCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>
{
    _Bool _isAvailable;
    _DKSyncCloudKitKnowledgeStorage *_common;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

+ (id)sharedInstance;
@property _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) _DKSyncCloudKitKnowledgeStorage *common; // @synthesize common=_common;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)transportType;
- (id)name;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchEventsFromPeer:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelOutstandingOperations;
- (void)start;
- (void)dealloc;
- (id)init;

@end

