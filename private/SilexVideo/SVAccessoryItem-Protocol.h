//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol SVAccessoryItem <NSObject>
@property(nonatomic) unsigned long long displayMode;
@property(readonly, nonatomic) UIView *view;

@optional
- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id <SVVideoAccessoryItemDisplayModeTransitioning>)arg2;
@end

