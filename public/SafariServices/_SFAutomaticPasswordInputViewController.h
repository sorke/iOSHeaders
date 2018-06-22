//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIInputViewController.h"

#import "SFAutomaticPasswordInputViewDelegate.h"
#import "SFAutomaticPasswordInputViewSizing.h"

@class NSLayoutConstraint, NSString, SFAutomaticPasswordInputView;

@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing>
{
    SFAutomaticPasswordInputView *_inputView;
    NSString *_password;
    struct CGSize _portraitKeyboardSize;
    struct CGSize _landscapeKeyboardSize;
    NSLayoutConstraint *_heightConstraint;
    long long _currentInterfaceOrientation;
    long long _keyboardType;
}

+ (void)inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)inputViewControllerDidSelectUseCustomPassword:(id)arg1;
- (void)inputViewControllerDidSelectUseStrongPassword:(id)arg1;
- (struct CGSize)intrinsicContentSizeForInputView:(id)arg1;
- (void)_updateKeyboardHeight;
- (struct CGSize)_currentKeyboardSize;
- (_Bool)_inputViewControllerShouldDirectlyInsertPassword;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_postButtonPressedNotificationForButton:(long long)arg1;
- (void)viewDidLoad;
- (void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
- (id)initWithPassword:(id)arg1 keyboardType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

