//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileTimer/MTTimerIntentHandler.h>

#import "INCreateTimerIntentHandling.h"

@class NSString;

@interface MTCreateSingleTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>
{
}

- (id)_responseToCreateTimerIntent:(id)arg1 withCreatedTimer:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)_createTimerWithIntent:(id)arg1 dryRun:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveDurationForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveLabelForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

