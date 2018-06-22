//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSActivationEvent, NSMapTable, NSObject<OS_dispatch_queue>;

@interface CSActivationEventNotifier : NSObject
{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegates;
    CSActivationEvent *_pendingActivationEvent;
    CDUnknownBlockType _pendingCompletion;
}

+ (id)sharedNotifier;
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion; // @synthesize pendingCompletion=_pendingCompletion;
@property(retain, nonatomic) CSActivationEvent *pendingActivationEvent; // @synthesize pendingActivationEvent=_pendingActivationEvent;
@property(retain, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
- (void).cxx_destruct;
- (void)receiveTestNotificationAOPMode;
- (void)receiveTestNotificationAPMode;
- (void)_setupTestNotification;
- (void)_didReceiveAOPFirstPassTrigger:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_hasPendingActivationForType:(unsigned long long)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoring;
- (void)setDelegate:(id)arg1 for:(unsigned long long)arg2;
- (void)notifyActivationEvent:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_isVoiceTriggerEvent:(id)arg1;
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

