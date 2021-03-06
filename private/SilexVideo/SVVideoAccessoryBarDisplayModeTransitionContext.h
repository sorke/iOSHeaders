//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoAccessoryItemDisplayModeTransitionContext.h"

@class NSSet, NSString, SVVideoAccessoryBarDisplayState;

@interface SVVideoAccessoryBarDisplayModeTransitionContext : NSObject <SVVideoAccessoryItemDisplayModeTransitionContext>
{
    _Bool _transitionWasCancelled;
    NSSet *_views;
    NSSet *_appearingViews;
    NSSet *_disappearingViews;
    NSSet *_transitioningViews;
    NSSet *_containerViews;
    SVVideoAccessoryBarDisplayState *_fromState;
    SVVideoAccessoryBarDisplayState *_toState;
    CDUnknownBlockType _completionBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) SVVideoAccessoryBarDisplayState *toState; // @synthesize toState=_toState;
@property(readonly, nonatomic) SVVideoAccessoryBarDisplayState *fromState; // @synthesize fromState=_fromState;
@property(nonatomic) _Bool transitionWasCancelled; // @synthesize transitionWasCancelled=_transitionWasCancelled;
- (void).cxx_destruct;
- (struct CGRect)targetFrameForView:(id)arg1 inState:(id)arg2 basedOnPositionInState:(id)arg3;
- (struct CGRect)initialFrameForView:(id)arg1 inState:(id)arg2 basedOnPositionInState:(id)arg3;
- (unsigned long long)displayModeForView:(id)arg1 inState:(id)arg2;
- (struct CGRect)frameForView:(id)arg1 inState:(id)arg2;
- (id)viewsForState:(id)arg1;
- (id)containerViewForDisplayMode:(unsigned long long)arg1 inState:(id)arg2;
- (id)containerViewForTargetDisplayMode:(unsigned long long)arg1;
- (id)containerViewForInitialDisplayMode:(unsigned long long)arg1;
@property(readonly, nonatomic) NSSet *containerViews; // @synthesize containerViews=_containerViews;
@property(readonly, nonatomic) NSSet *transitioningViews; // @synthesize transitioningViews=_transitioningViews;
@property(readonly, nonatomic) NSSet *disappearingViews; // @synthesize disappearingViews=_disappearingViews;
@property(readonly, nonatomic) NSSet *appearingViews; // @synthesize appearingViews=_appearingViews;
@property(readonly, nonatomic) NSSet *views; // @synthesize views=_views;
- (void)completeTransition:(_Bool)arg1;
- (unsigned long long)targetDisplayModeForView:(id)arg1;
- (unsigned long long)initialDisplayModeForView:(id)arg1;
- (struct CGRect)targetFrameForView:(id)arg1;
- (struct CGRect)initialFrameForView:(id)arg1;
- (id)initWithFromState:(id)arg1 toState:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

