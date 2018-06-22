//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCControlChannel.h>

#import "VCControlChannelTransactionDelegate.h"
#import "VCControlChannelencryptionDelegate.h"
#import "VCSecurityEventHandler.h"

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCControlChannelMultiWay : VCControlChannel <VCControlChannelencryptionDelegate, VCControlChannelTransactionDelegate, VCSecurityEventHandler>
{
    unsigned int _transportSessionID;
    int _vfdMessage;
    int _vfdCancel;
    struct _opaque_pthread_t *_pidReceiveProc;
    NSMutableDictionary *_dialogs;
    NSMutableArray *_activeParticipants;
    _Bool _isCCReliableDataNotReceivedReported;
    _Bool _isEncryptionEnabled;
    NSMutableDictionary *_cryptors;
    void *_currentSendMKI;
}

@property(readonly) _Bool isEncryptionEnabled; // @synthesize isEncryptionEnabled=_isEncryptionEnabled;
@property(readonly, nonatomic) NSMutableDictionary *dialogs; // @synthesize dialogs=_dialogs;
@property(nonatomic) int vfdCancel; // @synthesize vfdCancel=_vfdCancel;
@property(nonatomic) int vfdMessage; // @synthesize vfdMessage=_vfdMessage;
@property(nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
- (void)handleEncryptionInfoChange:(id)arg1;
- (void)flushReportingStats;
- (void)flushRealTimeReportingStats;
- (void)deregisterPeriodicTask;
- (void)registerPeriodicTask;
- (void)periodicTask:(void *)arg1;
- (id)lastUsedMKIBytes;
- (_Bool)isParticipantActive:(unsigned long long)arg1;
- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
- (void)scheduleAfter:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeActiveParticipant:(unsigned long long)arg1;
- (void)addActiveParticipant:(unsigned long long)arg1;
- (void)broadcastUnreliableMessage:(id)arg1;
- (void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (_Bool)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2;
- (void)messageReceived:(id)arg1 participantInfo:(CDStruct_81244b4e *)arg2;
- (id)processEncryptedMessage:(id)arg1 sequenceNumber:(id)arg2 MKIData:(id)arg3 participantID:(id)arg4;
- (_Bool)decryptMessageWithMKI:(void *)arg1 message:(id)arg2 buffer:(char *)arg3 size:(unsigned int)arg4 sequenceNumber:(unsigned short)arg5;
- (void)flushActiveMessages;
- (void)dealloc;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (_Bool)decryptWithMKI:(void *)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;
- (_Bool)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;
- (int)updateEncryption:(CDStruct_5b6da142 *)arg1 derivedSSRC:(unsigned int)arg2;
- (int)getKeyDerivationCryptoSet:(CDStruct_5b6da142 *)arg1 withKeyMaterial:(id)arg2 derivedSSRC:(unsigned int *)arg3;
- (void)updateEncryptionWithKeyMaterial:(id)arg1;
- (void)initializeSRTPInfo:(struct tagSRTPINFO *)arg1;
- (void)finalizeEncryption;
- (void)initializeEncryption;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

