//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@interface FBExclusiveTouchGestureRecognizer : UIGestureRecognizer
{
    _Bool _achievedMaximumAbsoluteAccumulatedMovement;
    struct CGPoint _maximumAbsoluteAccumulatedMovement;
    struct CGPoint _accumulatedMovement;
}

@property(readonly, nonatomic) struct CGPoint accumulatedMovement; // @synthesize accumulatedMovement=_accumulatedMovement;
@property(readonly, nonatomic) _Bool achievedMaximumAbsoluteAccumulatedMovement; // @synthesize achievedMaximumAbsoluteAccumulatedMovement=_achievedMaximumAbsoluteAccumulatedMovement;
@property(nonatomic) struct CGPoint maximumAbsoluteAccumulatedMovement; // @synthesize maximumAbsoluteAccumulatedMovement=_maximumAbsoluteAccumulatedMovement;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)description;

// Remaining properties
@property(nonatomic) __weak id <FBExclusiveTouchGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

