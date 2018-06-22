//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import "REUpNextSiriObserver.h"

@class NSString, REUpNextTimer;

@interface RESiriEngagementPredictor : REPredictor <REUpNextSiriObserver>
{
    REUpNextTimer *_siriDecayTimer;
    NSString *_lastSiriDomain;
    float _siriInfluence;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)siriServer:(id)arg1 receivedCompletedRequestDomain:(id)arg2;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

