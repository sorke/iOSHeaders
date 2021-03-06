//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIInputViewSet, UIKBKeyplaneChangeContext, UIView;

@protocol _UIRemoteKeyboardViewSource <NSObject>
@property(nonatomic) _Bool dontDismissReachability;
@property(readonly, nonatomic) _Bool isOnScreenRotating;
@property(readonly, nonatomic) UIInputViewSet *inputViewSet;
@property(readonly, nonatomic) UIView *hostView;
@property(retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate;
- (void)updateForKeyplaneChangeWithContext:(UIKBKeyplaneChangeContext *)arg1;
- (void)checkPlaceholdersForRemoteKeyboards;
@end

