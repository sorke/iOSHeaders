//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIPreviewInteractionViewControllerTransition.h"

@class NSString, PLViewControllerAnimator, _UIViewControllerOneToOneTransitionContext;

@interface PLPreviewInteractionViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    _Bool _presenting;
    id <UIViewControllerTransitioningDelegate> _transitionDelegate;
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
    PLViewControllerAnimator *_animator;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performWithCustomAnimator:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)initForDismissingViewController:(id)arg1 toViewController:(id)arg2 WithTransitionDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initForPresentingViewController:(id)arg1 fromViewController:(id)arg2 withTransitionDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_initForPresentation:(_Bool)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 transitionDelegate:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

