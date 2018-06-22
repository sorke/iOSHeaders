//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDAssertionObserver.h"

@class HDAssertionManager, HDProfile, NSObject<OS_dispatch_queue>, NSString;

@interface HDWorkoutEventsManager : NSObject <HDAssertionObserver>
{
    HDProfile *_profile;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)_queue_eventCollectorsForType:(unsigned long long)arg1 delegate:(id)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)takeSessionAssertionWithOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 sessionIdentifier:(id)arg3 eventsDelegate:(id)arg4;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

