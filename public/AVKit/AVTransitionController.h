//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVInteractiveTransitionGestureTrackerDelegate.h"
#import "AVTransitionDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerInteractiveTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class AVInteractiveTransitionGestureTracker, AVTransition, AVTransitionPresentationContext, NSString;

@interface AVTransitionController : NSObject <AVInteractiveTransitionGestureTrackerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, AVTransitionDelegate, UIViewControllerTransitioningDelegate>
{
    AVTransitionPresentationContext *_presentationContext;
    id <AVTransitionControllerDelegate> _delegate;
    long long _state;
    AVTransition *_activeTransition;
    AVInteractiveTransitionGestureTracker *_gestureTracker;
}

@property(readonly, nonatomic) AVInteractiveTransitionGestureTracker *gestureTracker; // @synthesize gestureTracker=_gestureTracker;
@property(retain, nonatomic) AVTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <AVTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVTransitionPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
- (void).cxx_destruct;
- (void)_createActiveTransitionAndPresentationContextIfNeededForTransitionContext:(id)arg1;
- (void)_recoverFromPresentationInStandaloneWindowIfNeeded:(id)arg1;
- (void)transitionWillComplete:(id)arg1 success:(_Bool)arg2;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;
- (void)gestureTrackerDidFinishTracking:(id)arg1;
- (void)gestureTrackerDidCancelTracking:(id)arg1;
- (void)gestureTracker:(id)arg1 didTrackPercentComplete:(double)arg2 translation:(struct CGPoint)arg3 rotation:(double)arg4 locationInWindow:(struct CGPoint)arg5;
- (void)gestureTracker:(id)arg1 didBeginTrackingGesture:(long long)arg2;
- (_Bool)gestureTrackerShouldTrackPanToDismiss:(id)arg1;
- (_Bool)gestureTrackerShouldTrackPinchToDismiss:(id)arg1;
- (_Bool)gestureTrackerShouldTrackPinchToPresent:(id)arg1;
- (_Bool)gestureTracker:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)presentedViewControllerWasForciblyDismissedWithoutAnimation;
- (void)beginFullScreenDismissal:(CDUnknownBlockType)arg1;
- (void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 isInteractive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addInteractiveGesturesToView:(id)arg1 additionalGesture:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

