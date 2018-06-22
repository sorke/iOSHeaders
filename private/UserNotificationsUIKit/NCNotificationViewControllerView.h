//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, PLPlatterView;

@interface NCNotificationViewControllerView : UIView
{
    NSArray *_stackedPlatters;
    PLPlatterView *_contentView;
    unsigned long long _coalescedNotificationCount;
}

@property(nonatomic) unsigned long long coalescedNotificationCount; // @synthesize coalescedNotificationCount=_coalescedNotificationCount;
@property(nonatomic) __weak PLPlatterView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (_Bool)_isCoalescedNotificationBundle;
- (void)_layoutStackedPlatters;
- (void)_configureStackedPlatters;
- (unsigned long long)_stackedPlatterCount;
- (unsigned long long)_stackedPlatterCountCoalescedNotificationCount:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

