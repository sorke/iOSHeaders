//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

#import <PassKitUI/PKPeerPaymentAccountStateControllerDelegate-Protocol.h>

@class NSString, PKContinuousButton, PKPeerPaymentAccountStateController, UIActivityIndicatorView, UILabel, UIView;

@interface PKPassFooterPeerPaymentAccountStateView : PKPassFooterContentView <PKPeerPaymentAccountStateControllerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    PKContinuousButton *_button;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_bottomRule;
    PKPeerPaymentAccountStateController *_controller;
}

- (void).cxx_destruct;
- (id)_bottomRule;
- (id)_activityIndicator;
- (id)_button;
- (id)_bodyLabel;
- (id)_titleLabel;
- (void)_handleButtonPressed:(id)arg1;
- (id)_buttonText;
- (id)_bodyText;
- (id)_titleText;
- (void)layoutSubviews;
- (void)presentAccountStateViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
