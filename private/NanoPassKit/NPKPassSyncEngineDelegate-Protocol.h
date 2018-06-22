//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPKPassSyncChange, NPKPassSyncEngine, NPKPassSyncState, NPKPassSyncStateItem, NSData, NSString, NSUUID;

@protocol NPKPassSyncEngineDelegate <NSObject>
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 requestsRemovePassWithUniqueID:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 requestsUpdatePassData:(NSData *)arg2 forSyncStateItem:(NPKPassSyncStateItem *)arg3 completion:(void (^)(_Bool))arg4;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 requestsAddPassData:(NSData *)arg2 forSyncStateItem:(NPKPassSyncStateItem *)arg3 completion:(void (^)(_Bool))arg4;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendReconciledStateAcceptedWithHash:(NSData *)arg2;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendProposedReconciledState:(NPKPassSyncState *)arg2;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendReconciledStateUnrecognizedWithHash:(NSData *)arg2 currentPassSyncState:(NPKPassSyncState *)arg3;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendStateChangeProcessedWithUUID:(NSUUID *)arg2 changeAccepted:(_Bool)arg3;
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 sendStateChange:(NPKPassSyncChange *)arg2;

@optional
- (void)passSyncEngine:(NPKPassSyncEngine *)arg1 receivedStateChangeProcessed:(NPKPassSyncChange *)arg2 changeAccepted:(_Bool)arg3;
- (void)passSyncEngineEncounteredUnexpectedEvent:(NPKPassSyncEngine *)arg1;
- (void)passSyncEngineStateChanged:(NPKPassSyncEngine *)arg1;
@end

