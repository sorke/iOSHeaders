//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSServiceFacilityClient.h"

#import "ITIdleTimerStateRequestHandling.h"

@class NSString;

@interface ITIdleTimerStateClient : FBSServiceFacilityClient <ITIdleTimerStateRequestHandling>
{
}

+ (id)_sharedInstanceAccessQueue;
+ (void)relinquishSharedInstance;
+ (id)acquireSharedInstance;
- (_Bool)_requestIsIdleTimerServiceAvailable;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)isIdleTimerServiceAvailable;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

