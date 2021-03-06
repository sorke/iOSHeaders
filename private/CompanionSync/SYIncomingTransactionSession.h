//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSObject<OS_os_activity>, SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession
{
    NSObject<OS_os_activity> *_sessionActivity;
    SYChangeMessage *_message;
    CDUnknownBlockType _completion;
    _Bool canRestart;
    _Bool canRollback;
    long long state;
}

- (void)setCanRollback:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRestart;
- (void)setState:(long long)arg1;
- (long long)state;
- (void).cxx_destruct;
- (void)didCompleteSession;
- (void)cancelWithError:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)_sendChanges;
- (void)_sendCancelled;
- (void)_sendComplete;
- (unsigned long long)protocolVersion;
- (_Bool)wasCancelled;
- (_Bool)isResetSync;
- (_Bool)isSending;
- (id)initWithService:(id)arg1 transaction:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

