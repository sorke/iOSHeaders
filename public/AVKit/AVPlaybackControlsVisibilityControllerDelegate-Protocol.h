//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlaybackControlsVisibilityController, NSArray;

@protocol AVPlaybackControlsVisibilityControllerDelegate <NSObject>
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg2 appearingViews:(NSArray *)arg3 disappearingViews:(NSArray *)arg4;
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 updateStatusBarAppearanceUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2;
@end

