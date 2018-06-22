//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DADisableableObject.h"

#import "DATransactionMonitorDelegate.h"
#import "UMUserSwitchStakeholder.h"

@class NSArray, NSString, NSTimer;

@interface DADMain : DADisableableObject <UMUserSwitchStakeholder, DATransactionMonitorDelegate>
{
    NSTimer *_delayedShutdownTimer;
    NSTimer *_forceShutdownTimer;
    _Bool *_runLoopStoppedRef;
    NSArray *_userSwitchTasks;
}

+ (id)sharedMain;
@property(retain, nonatomic) NSArray *userSwitchTasks; // @synthesize userSwitchTasks=_userSwitchTasks;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)_configureAggdLogging;
- (void)disable;
- (void)_setRunLoopStopped:(_Bool)arg1;
- (void)setRunLoopStoppedRef:(_Bool *)arg1;
- (void)waitForSystemAvailability;
- (void)_shutdownNotification:(id)arg1;
- (void)shutdownDAD;
- (void)addLanguageChangeHandler;
- (void)addSignalHandler;
- (void)didFinishAllXPCTransactions;
- (void)willSwitchUser;
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(CDUnknownBlockType)arg1 wrappedBlock:(CDUnknownBlockType)arg2;
- (void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)arg1;
- (void)_forceShutdownTimerFired:(id)arg1;
- (void)_shutdownDaemon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

