//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVInteractiveTransitionGestureTracker, UIGestureRecognizer, UITouch;

@protocol AVInteractiveTransitionGestureTrackerDelegate <NSObject>
- (void)gestureTrackerDidFinishTracking:(AVInteractiveTransitionGestureTracker *)arg1;
- (void)gestureTrackerDidCancelTracking:(AVInteractiveTransitionGestureTracker *)arg1;
- (void)gestureTracker:(AVInteractiveTransitionGestureTracker *)arg1 didTrackPercentComplete:(double)arg2 translation:(struct CGPoint)arg3 rotation:(double)arg4 locationInWindow:(struct CGPoint)arg5;
- (void)gestureTracker:(AVInteractiveTransitionGestureTracker *)arg1 didBeginTrackingGesture:(long long)arg2;
- (_Bool)gestureTrackerShouldTrackPanToDismiss:(AVInteractiveTransitionGestureTracker *)arg1;
- (_Bool)gestureTrackerShouldTrackPinchToDismiss:(AVInteractiveTransitionGestureTracker *)arg1;
- (_Bool)gestureTrackerShouldTrackPinchToPresent:(AVInteractiveTransitionGestureTracker *)arg1;
- (_Bool)gestureTracker:(AVInteractiveTransitionGestureTracker *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
@end

