//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteMessageTransport.h>

#import "IDSServiceDelegate.h"

@class HMFOperationBudget, IDSService, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <IDSServiceDelegate>
{
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_messageContexts;
    HMFOperationBudget *_sendMessageBudget;
    NSMutableDictionary *_pendingResponses;
    NSMutableDictionary *_receivedResponses;
    NSMutableDictionary *_requestedCapabilities;
    NSMutableDictionary *_destinationAddress;
    NSMutableDictionary *_pendingResponseTimers;
}

+ (struct _HMFRate)sendMessageRate;
+ (unsigned long long)sendMessageLimit;
+ (long long)priorityForMessage:(id)arg1;
+ (unsigned long long)restriction;
@property(readonly, nonatomic) NSMutableDictionary *pendingResponseTimers; // @synthesize pendingResponseTimers=_pendingResponseTimers;
@property(readonly, nonatomic) NSMutableDictionary *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(readonly, nonatomic) NSMutableDictionary *requestedCapabilities; // @synthesize requestedCapabilities=_requestedCapabilities;
@property(readonly, nonatomic) NSMutableDictionary *receivedResponses; // @synthesize receivedResponses=_receivedResponses;
@property(readonly, nonatomic) NSMutableDictionary *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property(readonly) HMFOperationBudget *sendMessageBudget; // @synthesize sendMessageBudget=_sendMessageBudget;
@property(readonly) NSMutableArray *messageContexts; // @synthesize messageContexts=_messageContexts;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_removePendingResponseTransaction:(id)arg1;
- (void)_removePendingResponseTimerForTransaction:(id)arg1;
- (void)_startPendingResponseTimer:(id)arg1 responseTimeout:(double)arg2 identifier:(id)arg3;
- (void)_pendingResponseTimeoutFor:(id)arg1;
- (void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long long)arg2;
- (id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 error:(id *)arg7;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int awdTransportType;
- (_Bool)canSendMessage:(id)arg1;
- (id)deviceForSenderContext:(id)arg1;
- (long long)qualityOfService;
- (void)start;
- (id)initWithAccountRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

