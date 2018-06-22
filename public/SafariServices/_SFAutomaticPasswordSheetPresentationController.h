//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _SFAutomaticPasswordSheetPresentationController : UIPresentationController
{
    UIView *_dimmingView;
    struct CGRect _currentKeyboardFrame;
}

- (void).cxx_destruct;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)containerViewWillLayoutSubviews;
- (id)_presentedSheetViewController;
- (void)_animateAuthenticationSheetWithDuration:(double)arg1 keyboardBeginFrame:(struct CGRect)arg2 keyboardEndFrame:(struct CGRect)arg3;
- (void)_animateSheetWithKeyboardNotification:(id)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

