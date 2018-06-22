//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import "CAAnimationDelegate.h"
#import "_UIStatusBarDisplayable.h"

@class NSString, UIAccessibilityHUDItem, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable>
{
    _UIStatusBarImageView *_bodyView;
    _UIStatusBarImageView *_shackleView;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) _UIStatusBarImageView *shackleView; // @synthesize shackleView=_shackleView;
@property(retain, nonatomic) _UIStatusBarImageView *bodyView; // @synthesize bodyView=_bodyView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)jiggleWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateUnlockWithCompletionBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)resetLock;
- (void)applyStyleAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

