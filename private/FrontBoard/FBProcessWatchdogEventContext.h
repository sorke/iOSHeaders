//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class FBSSceneSettings, FBSSceneTransitionContext, FBSceneUpdateContext, NSString;

@interface FBProcessWatchdogEventContext : NSObject <BSDescriptionProviding>
{
    long long _event;
    FBSSceneSettings *_sceneSettings;
    FBSSceneTransitionContext *_sceneTransitionContext;
    FBSceneUpdateContext *_sceneUpdateContext;
}

+ (id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3;
@property(readonly, nonatomic) FBSceneUpdateContext *sceneUpdateContext; // @synthesize sceneUpdateContext=_sceneUpdateContext;
@property(readonly, nonatomic) __weak FBSSceneTransitionContext *sceneTransitionContext; // @synthesize sceneTransitionContext=_sceneTransitionContext;
@property(readonly, nonatomic) FBSSceneSettings *sceneSettings; // @synthesize sceneSettings=_sceneSettings;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

