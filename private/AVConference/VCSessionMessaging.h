//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCControlChannelDelegate.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionMessaging : NSObject <VCControlChannelDelegate>
{
    NSMutableDictionary *topics;
    id controlChannelWeak;
}

- (void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;
- (void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(_Bool)arg3 toParticipant:(id)arg4;
- (void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;
- (id)newDictionaryFromUnpackedMessage:(id)arg1;
- (id)newPackedMessageFromDictionary:(id)arg1;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 receiveHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)stopMessaging;
- (void)startMessaging;
- (id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

