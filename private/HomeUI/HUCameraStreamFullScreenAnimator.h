//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HUGridCameraCell;

@interface HUCameraStreamFullScreenAnimator : NSObject
{
    HUGridCameraCell *_sourceCameraCell;
}

@property(readonly, nonatomic) HUGridCameraCell *sourceCameraCell; // @synthesize sourceCameraCell=_sourceCameraCell;
- (void).cxx_destruct;
- (struct CGRect)_adjustPresentedViewFrame:(struct CGRect)arg1 forTransitionContext:(id)arg2;
- (struct CGRect)_toViewFinalFrame:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithSourceCameraCell:(id)arg1;

@end

