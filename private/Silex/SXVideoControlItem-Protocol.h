//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXVideoControlItemAnimating;

@protocol SXVideoControlItem <NSObject>
@property(readonly, nonatomic) double autoAppearanceTimeInterval;
@property(readonly, nonatomic) _Bool hideable;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id <SXVideoControlItemAnimating>)arg2;
- (_Bool)isVisible;
@end
