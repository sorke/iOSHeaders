//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKSyncRemoteKnowledgeStorage.h"

@class NSDictionary, RPCompanionLinkClient, _DKEventTypeResultStatsCounter;

@interface _DKSyncRapportKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>
{
    NSDictionary *_failIfAsleepOption;
    _DKEventTypeResultStatsCounter *_failIfAsleepStats;
    RPCompanionLinkClient *_client;
    double _retryTimeout;
    unsigned long long _currentChangeSetSequenceNumber;
    _Bool _isAvailable;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

+ (id)sharedInstance;
@property _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dataFromChangeSet:(id)arg1 didCompress:(_Bool *)arg2;
- (id)changeSetFromCompressedData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)changeSetForSyncWithEventsToInsert:(id)arg1 eventIDsToDeletes:(id)arg2 error:(id *)arg3;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (long long)transportType;
- (id)name;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)handleFetchSourceDeviceIDWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleFetchSourceDeviceIDWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleFetchDeletedEventIDsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleFetchDeletedEventIDsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleFetchEventsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleFetchEventsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchEventsFromPeer:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleBeaconWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleBeaconWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)sendBeaconToPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)myDeviceID;
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
- (id)transformResponseError:(id)arg1;
- (void)handleActivateWithError:(id)arg1;
- (void)handleDeviceLost:(id)arg1;
- (void)handleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)handleDeviceFound:(id)arg1;
- (void)handleInvalidation;
- (void)startRapport;
- (void)cancelOutstandingOperations;
- (void)start;
- (void)dealloc;
- (id)init;

@end

