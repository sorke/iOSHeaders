//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDActiveSiriSessionInfoDelegate.h"
#import "HMFLogging.h"

@class HMDActiveSiriSessionInfo, HMDSiriRemoteInputServer, NSString;

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging>
{
    NSString *_identifier;
    HMDSiriRemoteInputServer *_server;
    HMDActiveSiriSessionInfo *_activeSessionInfo;
}

+ (id)logCategory;
+ (id)siriSessionForUIWithIdentifier:(id)arg1;
@property(retain, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo; // @synthesize activeSessionInfo=_activeSessionInfo;
@property(nonatomic) __weak HMDSiriRemoteInputServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_createArgsDictionaryWithError:(id)arg1;
- (void)sendMsg:(const char *)arg1 args:(id)arg2;
- (void)_stopStream;
- (_Bool)_startStream;
- (void)activeSiriSessionDidStop:(id)arg1;
- (void)handleResetStream;
- (void)handleStopStream;
- (void)handleStartStream;
- (void)publish;
- (void)invalidate;
- (void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4;
- (void)setActiveBulkSendSession:(id)arg1;
- (id)activeSessionToken;
- (void)deactivate;
- (_Bool)activate;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

