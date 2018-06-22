//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

#import "PLExpandedPlatterPresentationController.h"

@class MTMaterialView, NSString, PLExpandedPlatterPresentationControllerHelper, UIPanGestureRecognizer, UIViewController;

@interface NCLongLookDefaultPresentationController : UIPresentationController <PLExpandedPlatterPresentationController>
{
    UIViewController *_sourceViewController;
    PLExpandedPlatterPresentationControllerHelper *_presentationControllerHelper;
    MTMaterialView *_backgroundMaterialView;
    _Bool _presenting;
    id <NCLongLookDefaultPresentationControllerDelegate> _presentationControllerDelegate;
}

+ (struct CGRect)useableContainerViewBoundsInContainerViewWithBounds:(struct CGRect)arg1;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <NCLongLookDefaultPresentationControllerDelegate> presentationControllerDelegate; // @synthesize presentationControllerDelegate=_presentationControllerDelegate;
- (void).cxx_destruct;
- (_Bool)_shouldPresentInCurrentContext;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(id)arg1;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
@property(nonatomic) double additionalHomeAffordanceSpacing;
@property(nonatomic) __weak UIPanGestureRecognizer *homeAffordancePanGesture;
@property(nonatomic, getter=isHomeAffordanceVisible) _Bool homeAffordanceVisible;
- (void)completeDismissal;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldMakePresentedViewControllerFirstResponder;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (_Bool)shouldRemovePresentersView;
- (_Bool)shouldPresentInFullscreen;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

