//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSAutoAuthenticationViewController-Protocol.h>

@class NSString, UIBarButtonItem, UIButton, UILabel, UIScrollView, VSAutoAuthenticationViewModel, VSIdentityProviderLogoView, VSViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController>
{
    _Bool _cancellationAllowed;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSAutoAuthenticationViewModel *_viewModel;
    UIScrollView *_scrollView;
    VSIdentityProviderLogoView *_logoView;
    UILabel *_accountNameLabel;
    UILabel *_messageTitleLabel;
    UILabel *_messageLabel;
    UILabel *_noticeLabel;
    UILabel *_manualSignInTitleLabel;
    UIButton *_manualSignInButton;
    UIBarButtonItem *_signInButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    id _contentSizeCategoryObserver;
}

@property(nonatomic) __weak id contentSizeCategoryObserver; // @synthesize contentSizeCategoryObserver=_contentSizeCategoryObserver;
@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(retain, nonatomic) UIBarButtonItem *signInButtonItem; // @synthesize signInButtonItem=_signInButtonItem;
@property(retain, nonatomic) UIButton *manualSignInButton; // @synthesize manualSignInButton=_manualSignInButton;
@property(retain, nonatomic) UILabel *manualSignInTitleLabel; // @synthesize manualSignInTitleLabel=_manualSignInTitleLabel;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *messageTitleLabel; // @synthesize messageTitleLabel=_messageTitleLabel;
@property(retain, nonatomic) UILabel *accountNameLabel; // @synthesize accountNameLabel=_accountNameLabel;
@property(retain, nonatomic) VSIdentityProviderLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) VSViewModel *viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)setViewModel:(id)arg1;
- (void)_hideNavigationBarButtons;
- (void)_showNavigationBarButtons;
- (void)_stopValidationAndShowButtons:(_Bool)arg1;
- (void)_startValidation;
- (void)_showValidationAlertForError:(id)arg1;
- (void)_updateFonts;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_manualSignInButtonPressed:(id)arg1;
- (void)_signInButtonPressed:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
