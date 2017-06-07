//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDProcessStateObserver-Protocol.h>

@class HDDaemon, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDAppLauncher : NSObject <HDProcessStateObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_clientByBundleIdentifier;
    HDDaemon *_daemon;
}

@property(nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) NSMutableDictionary *clientByBundleIdentifier; // @synthesize clientByBundleIdentifier=_clientByBundleIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_queue_attemptRelaunchClient:(id)arg1 forSeconds:(double)arg2 retries:(int)arg3;
- (void)_queue_cleanUpClients;
- (void)processTerminated:(id)arg1;
- (void)unregisterIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
