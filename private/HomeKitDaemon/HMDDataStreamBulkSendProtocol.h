//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDDataStreamProtocol.h"
#import "HMFLogging.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface HMDDataStreamBulkSendProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>
{
    _Bool _isConnected;
    id <HMDDataStreamProtocolDelegate> _dataStream;
    NSObject<OS_dispatch_queue> *_queue;
    id _accessory;
    NSMapTable *_listeners;
    NSMapTable *_activeBulkSendSessions;
    NSMapTable *_pendingBulkSendSessions;
}

+ (id)logCategory;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) NSMapTable *pendingBulkSendSessions; // @synthesize pendingBulkSendSessions=_pendingBulkSendSessions;
@property(retain, nonatomic) NSMapTable *activeBulkSendSessions; // @synthesize activeBulkSendSessions=_activeBulkSendSessions;
@property(retain, nonatomic) NSMapTable *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) __weak id accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HMDDataStreamProtocolDelegate> dataStream; // @synthesize dataStream=_dataStream;
- (void).cxx_destruct;
- (void)_cancelSessionWithIdentifier:(id)arg1 reason:(unsigned char)arg2;
- (void)_pumpReceiveFailure:(id)arg1 session:(id)arg2;
- (void)_pumpMessage:(id)arg1 session:(id)arg2;
- (void)_handleDataMessage:(id)arg1;
- (void)_handleCloseMessage:(id)arg1;
- (void)_handleOpenMessage:(id)arg1;
- (void)_removeBulkSendSessionCandidateForSessionIdentifier:(id)arg1;
- (id)_getBulkSendSessionCandidateForSessionIdentifier:(id)arg1;
- (void)_removeBulkSendSessionForSessionIdentifier:(id)arg1;
- (id)_getBulkSendSessionForSessionIdentifier:(id)arg1;
- (void)_rejectSessionCandidate:(id)arg1 reason:(unsigned char)arg2;
- (void)_startSessionCandidate:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_createSessionFromCandidate:(id)arg1 queue:(id)arg2;
- (id)_createSessionCandidateWithSessionIdentifier:(id)arg1;
- (void)asyncBulkSendSessionDidCancelSessionWithIdentifier:(id)arg1 reason:(unsigned char)arg2;
- (void)asyncBulkSendSessionCandidate:(id)arg1 didRejectWithReason:(unsigned char)arg2;
- (void)asyncBulkSendSessionCandidate:(id)arg1 didAcceptOnQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)dataStream:(id)arg1 didReceiveMessage:(id)arg2;
- (void)dataStreamDidOpen:(id)arg1;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)_closeAllSessionsWithError:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 fileType:(id)arg2;
- (id)initWithQueue:(id)arg1 accessory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

