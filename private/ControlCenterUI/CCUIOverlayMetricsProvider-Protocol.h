//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCUIStatusBarStyleSnapshot;

@protocol CCUIOverlayMetricsProvider <NSObject>
@property(readonly, nonatomic) _Bool overlayReachabilityAffectsHeader;
@property(readonly, nonatomic) double overlayReachabilityHeight;
@property(readonly, copy, nonatomic) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property(readonly, nonatomic) long long overlayInterfaceOrientation;
@property(readonly, nonatomic) struct CGRect overlayContainerFrame;
@property(readonly, nonatomic) struct CGRect overlayBackgroundFrame;
@end

