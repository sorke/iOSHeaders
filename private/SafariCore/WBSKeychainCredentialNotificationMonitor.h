//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSKeychainCredentialNotificationMonitor-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSKeychainCredentialNotificationMonitor : NSObject <WBSKeychainCredentialNotificationMonitor>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_observers;
    int _keychainChangedNotificationToken;
    double _coalescingInterval;
    NSDate *_lastNotificationTime;
    NSObject<OS_dispatch_source> *_coalescingTimer;
}

- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)_cancelCoalescingTimer;
- (void)_notifyKeychainUpdated;
- (void)notifyModernKeychainUpdated;
- (void)triggerExternalNotification;
- (void)removeObserverForToken:(id)arg1;
- (id)addObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoalescingInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
