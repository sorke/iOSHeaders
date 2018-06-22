//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDAssertionObserver.h"

@class HDAssertionManager, NSObject<OS_dispatch_queue>, NSString;

@interface HDHeartRateRecoveryManager : NSObject <HDAssertionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    void *_powerAssertion;
}

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

