//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIEvent, UIView;

@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>
@property(readonly, nonatomic, getter=_canScrollY) _Bool canScrollY;
@property(readonly, nonatomic, getter=_canScrollX) _Bool canScrollX;
@property(readonly, nonatomic, getter=_scrollHysteresis) double scrollHysteresis;
@property(readonly, nonatomic, getter=_touchDelayForScrollDetection) double touchDelayForScrollDetection;
@property(readonly, nonatomic) _Bool delaysContentTouches;
- (_Bool)touchesShouldBegin:(NSSet *)arg1 withEvent:(UIEvent *)arg2 inContentView:(UIView *)arg3;
@end

