//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMZoomControl;

@protocol CAMZoomControlDelegate <NSObject>

@optional
- (void)toggleBetweenWideAndTelephotoForZoomControl:(CAMZoomControl *)arg1;
- (_Bool)canToggleBetweenWideAndTelephotoForZoomControl:(CAMZoomControl *)arg1;
- (void)zoomControl:(CAMZoomControl *)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;
@end

