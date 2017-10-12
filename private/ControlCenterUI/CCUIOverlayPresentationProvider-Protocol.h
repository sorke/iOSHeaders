//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCUIAnimationBatch, CCUIOverlayTransitionState;

@protocol CCUIOverlayPresentationProvider <NSObject>
@property(nonatomic) __weak id <CCUIOverlayMetricsProvider> metricsProvider;
@property(nonatomic) __weak id <CCUIOverlayViewProvider> viewProvider;
@property(readonly, nonatomic) _Bool allowHotPocketDuringTransition;
@property(readonly, nonatomic) unsigned long long backgroundMaterialOptions;
@property(readonly, nonatomic, getter=isPanDismissalAvailable) _Bool panDismissalAvailable;
- (_Bool)tapAllowsDismissalForLocation:(struct CGPoint)arg1;
- (CCUIAnimationBatch *)animationBatchForTransitionState:(CCUIOverlayTransitionState *)arg1 previousTransitionState:(CCUIOverlayTransitionState *)arg2;
- (void)layoutViews;
- (unsigned long long)finalTransitionTypeForState:(CCUIOverlayTransitionState *)arg1 gestureTranslation:(struct CGPoint)arg2 gestureVelocity:(struct CGPoint)arg3;
- (CCUIOverlayTransitionState *)transitionStateForType:(unsigned long long)arg1 interactive:(_Bool)arg2 translation:(struct CGPoint)arg3;

@optional
@property(readonly, copy, nonatomic) id <CCUIOverlayFlickGestureBehavior> flickGestureBehavior;
@property(readonly, nonatomic) unsigned long long headerMode;
- (CCUIAnimationBatch *)cleanupForDismissal;
- (CCUIAnimationBatch *)prepareForPresentation;
- (CCUIAnimationBatch *)secondaryAnimationBatchForTransitionState:(CCUIOverlayTransitionState *)arg1 previousTransitionState:(CCUIOverlayTransitionState *)arg2;
@end

