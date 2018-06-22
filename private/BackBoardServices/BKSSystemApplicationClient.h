//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface BKSSystemApplicationClient : BSBaseXPCClient
{
    NSObject<OS_dispatch_queue> *_callOutQueue;
    _Bool _pendingCheckIn;
    _Bool _sentConnect;
    _Bool _waitingForPing;
    NSObject<OS_dispatch_semaphore> *_checkinSemaphore;
    NSObject<OS_dispatch_semaphore> *_pingSemaphore;
    double _systemIdleSleepInterval;
    id <BKSSystemApplicationClientDelegate> _delegate;
}

@property(nonatomic) __weak id <BKSSystemApplicationClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double systemIdleSleepInterval; // @synthesize systemIdleSleepInterval=_systemIdleSleepInterval;
- (void).cxx_destruct;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4 waitDuration:(unsigned long long)arg5;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2;
- (void)_queue_handleWatchdogPing:(id)arg1;
- (void)_connect;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasResumed;
- (void)queue_handleMessage:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)finishBooting;
- (_Bool)ping;
- (void)restart;
- (void)checkInAndWaitForDataMigration:(_Bool)arg1;
- (void)connect;
- (id)initWithCalloutQueue:(id)arg1;

@end

