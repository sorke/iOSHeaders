//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMFUI/NSObject-Protocol.h>

@protocol MKUserTrackingView <NSObject>
- (_Bool)isCurrentlyRotated;
- (_Bool)canRotateForHeading;
- (_Bool)hasUserLocation;
- (void)_setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2 fromTrackingButton:(_Bool)arg3;
- (long long)userTrackingMode;

@optional
- (_Bool)postsMapViewInitialRenderingNotification;
- (_Bool)hasRenderedSomething;
@end
