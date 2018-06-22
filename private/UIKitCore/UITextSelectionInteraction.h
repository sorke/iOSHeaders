//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

__attribute__((visibility("hidden")))
@interface UITextSelectionInteraction : UITextInteraction
{
    double _lastTapTimestamp;
    struct CGPoint _lastTapLocation;
    long long _previousRepeatedGranularity;
}

- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)performTapActionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)initWithMode:(long long)arg1;

@end

