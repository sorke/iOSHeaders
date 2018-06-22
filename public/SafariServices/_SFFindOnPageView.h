//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIKeyInput.h"
#import "_SFFindOnPageToolbarDelegate.h"
#import "_WKFindDelegate.h"

@class NSString, UITextInputPasswordRules, WKWebView, _SFFindOnPageToolbar;

@interface _SFFindOnPageView : UIView <_SFFindOnPageToolbarDelegate, _WKFindDelegate, UIKeyInput>
{
    _Bool _requiresKeyboard;
    _Bool _isShowing;
    _SFFindOnPageToolbar *_toolbar;
    _Bool _usesNarrowLayout;
    _Bool _shouldFocusTextField;
    id <_SFFindOnPageViewDelegate> _delegate;
    NSString *_findString;
    unsigned long long _numberOfFindMatches;
    long long _highlightedMatchIndex;
    WKWebView *_webView;
}

+ (long long)_undefinedMatchIndex;
+ (unsigned long long)_undefinedNumberOfMatches;
+ (unsigned long long)_maximumNumberOfMatches;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) long long highlightedMatchIndex; // @synthesize highlightedMatchIndex=_highlightedMatchIndex;
@property(nonatomic) unsigned long long numberOfFindMatches; // @synthesize numberOfFindMatches=_numberOfFindMatches;
@property(copy, nonatomic) NSString *findString; // @synthesize findString=_findString;
@property(readonly, nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool shouldFocusTextField; // @synthesize shouldFocusTextField=_shouldFocusTextField;
@property(nonatomic) _Bool usesNarrowLayout; // @synthesize usesNarrowLayout=_usesNarrowLayout;
@property(readonly, nonatomic) __weak id <_SFFindOnPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hasMatches;
- (void)updateSearchText:(id)arg1;
- (void)done;
- (void)next;
- (void)previous;
- (id)textForToolbarLabel;
- (id)longMatchLabelText;
- (id)matchLabelText;
- (void)_webView:(id)arg1 didFailToFindString:(id)arg2;
- (void)_webView:(id)arg1 didFindMatches:(unsigned long long)arg2 forString:(id)arg3 withMatchIndex:(long long)arg4;
- (void)_webView:(id)arg1 didCountMatches:(unsigned long long)arg2 forString:(id)arg3;
- (void)_setFindingInWebViewIfNeeded;
- (void)selectFindOnPageText;
- (void)dismissFindOnPage;
- (void)prepareFindOnPageWithString:(id)arg1;
- (void)_advance:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_requiresKeyboardWhenFirstResponder;
- (void)updateUI;
- (id)findTextField;
- (id)inputAccessoryView;
- (id)toolbar;
- (id)keyCommands;
- (void)hideFindOnPage;
- (void)showFindOnPage;
@property(readonly, nonatomic) _Bool isFocused;
- (void)didMoveToSuperview;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

