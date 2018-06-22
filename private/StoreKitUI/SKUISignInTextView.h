//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "UITextInputTraits.h"

@class NSString, UITextInputPasswordRules;

@interface SKUISignInTextView : UITextField <UITextInputTraits>
{
    long long _keyboardType;
}

@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

