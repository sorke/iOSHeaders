//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKWelcomeViewDelegate.h"

@class CKWelcomeView, NSLayoutConstraint, NSString, UILabel;

@interface CKWhatsNewViewController : UIViewController <CKWelcomeViewDelegate>
{
    id <CKWhatsNewViewControllerDelegate> _delegate;
    unsigned long long _whatsNewLayout;
    CKWelcomeView *_welcomeView;
    UILabel *_bulletPointOneSymbolLabel;
    UILabel *_bulletPointTwoSymbolLabel;
    UILabel *_bulletPointThreeSymbolLabel;
    UILabel *_bulletPointFourSymbolLabel;
    UILabel *_bulletPointOneTextLabel;
    UILabel *_bulletPointTwoTextLabel;
    UILabel *_bulletPointThreeTextLabel;
    UILabel *_bulletPointFourTextLabel;
    UILabel *_paragraphTextLabel;
    UILabel *_descriptionLabel;
    NSLayoutConstraint *_bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint;
    NSLayoutConstraint *_bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint;
    NSLayoutConstraint *_bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint;
    NSLayoutConstraint *_bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint;
    NSLayoutConstraint *_paragraphTextLabelFirstBaselineAnchorLayoutConstraint;
    NSLayoutConstraint *_descriptionLabelFirstBaselineAnchorLayoutConstraint;
    NSLayoutConstraint *_descriptionLabelLastBaselineAnchorLayoutConstraint;
    double _bulletImageViewHeightAnchorLayoutConstraintConstant;
    double _bulletImageViewWidthAnchorLayoutConstraintConstant;
}

@property(readonly, nonatomic) double bulletImageViewWidthAnchorLayoutConstraintConstant; // @synthesize bulletImageViewWidthAnchorLayoutConstraintConstant=_bulletImageViewWidthAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double bulletImageViewHeightAnchorLayoutConstraintConstant; // @synthesize bulletImageViewHeightAnchorLayoutConstraintConstant=_bulletImageViewHeightAnchorLayoutConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *descriptionLabelLastBaselineAnchorLayoutConstraint; // @synthesize descriptionLabelLastBaselineAnchorLayoutConstraint=_descriptionLabelLastBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *descriptionLabelFirstBaselineAnchorLayoutConstraint; // @synthesize descriptionLabelFirstBaselineAnchorLayoutConstraint=_descriptionLabelFirstBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paragraphTextLabelFirstBaselineAnchorLayoutConstraint; // @synthesize paragraphTextLabelFirstBaselineAnchorLayoutConstraint=_paragraphTextLabelFirstBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint; // @synthesize bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint=_bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint; // @synthesize bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint=_bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint; // @synthesize bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint=_bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint; // @synthesize bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint=_bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraint;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *paragraphTextLabel; // @synthesize paragraphTextLabel=_paragraphTextLabel;
@property(readonly, nonatomic) UILabel *bulletPointFourTextLabel; // @synthesize bulletPointFourTextLabel=_bulletPointFourTextLabel;
@property(readonly, nonatomic) UILabel *bulletPointThreeTextLabel; // @synthesize bulletPointThreeTextLabel=_bulletPointThreeTextLabel;
@property(readonly, nonatomic) UILabel *bulletPointTwoTextLabel; // @synthesize bulletPointTwoTextLabel=_bulletPointTwoTextLabel;
@property(readonly, nonatomic) UILabel *bulletPointOneTextLabel; // @synthesize bulletPointOneTextLabel=_bulletPointOneTextLabel;
@property(readonly, nonatomic) UILabel *bulletPointFourSymbolLabel; // @synthesize bulletPointFourSymbolLabel=_bulletPointFourSymbolLabel;
@property(readonly, nonatomic) UILabel *bulletPointThreeSymbolLabel; // @synthesize bulletPointThreeSymbolLabel=_bulletPointThreeSymbolLabel;
@property(readonly, nonatomic) UILabel *bulletPointTwoSymbolLabel; // @synthesize bulletPointTwoSymbolLabel=_bulletPointTwoSymbolLabel;
@property(readonly, nonatomic) UILabel *bulletPointOneSymbolLabel; // @synthesize bulletPointOneSymbolLabel=_bulletPointOneSymbolLabel;
@property(readonly, nonatomic) CKWelcomeView *welcomeView; // @synthesize welcomeView=_welcomeView;
@property(readonly, nonatomic) unsigned long long whatsNewLayout; // @synthesize whatsNewLayout=_whatsNewLayout;
@property(nonatomic) __weak id <CKWhatsNewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) double descriptionLabelLastBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double descriptionLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double paragraphTextLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double bulletPointFourTextLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double bulletPointThreeTextLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double bulletPointTwoTextLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double bulletPointOneTextLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double bulletPointTextTrailingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double bulletPointSymbolLeadingAnchorLayoutConstraintConstant;
- (id)bulletPointTextLabel;
- (id)bulletPointSymbolLabel;
@property(readonly, nonatomic) long long type;
- (void)welcomeViewConfirmButtonTapped:(id)arg1;
- (void)welcomeViewCancelButtonTapped:(id)arg1;
- (void)handleUIContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)handleUIDeviceOrientationDidChangeNotification:(id)arg1;
- (void)layoutForSurf;
- (void)layoutForMOC;
- (void)updateConstraints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithLayout:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

