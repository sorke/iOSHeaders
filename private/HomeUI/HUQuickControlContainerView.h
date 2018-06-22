//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HUControlHostView, HUPillButton, HUQuickControlAuxiliaryHostView, HUQuickControlButtonRowView, HUQuickControlSummaryView, NSArray, NSLayoutConstraint, NSString, UILayoutGuide, _UIBackdropView, _UIBackdropViewSettings;

@interface HUQuickControlContainerView : UIView
{
    _Bool _shouldShowActiveControl;
    _Bool _shouldShowAlternateControlButton;
    _Bool _shouldShowDetailsButton;
    _Bool _controlViewSupportsTransformTransition;
    _Bool _showAlternateControlButton;
    double _controlTransitionProgress;
    double _blurTransitionProgress;
    double _chromeTransitionProgress;
    double _initialSourceViewScale;
    unsigned long long _edgesForExtendedLayout;
    UIView *_activeControlView;
    UILayoutGuide *_controlViewPreferredFrameLayoutGuide;
    NSString *_alternateControlButtonTitle;
    HUPillButton *_alternateControlButton;
    HUQuickControlSummaryView *_summaryView;
    id <HUQuickControlContainerViewDelegate> _delegate;
    HUControlHostView *_controlHostView;
    UILayoutGuide *_controlViewLayoutGuide;
    NSArray *_contentConstraints;
    NSLayoutConstraint *_compactControlBottomConstraint;
    _UIBackdropView *_blurView;
    UIView *_blurTintView;
    _UIBackdropViewSettings *_blurSettings;
    HUQuickControlAuxiliaryHostView *_auxiliaryHostView;
    HUQuickControlButtonRowView *_buttonRowView;
    HUPillButton *_detailsButton;
    UILayoutGuide *_contentToAuxiliarySpacingLayoutGuide;
    UILayoutGuide *_topToSummarySpacingLayoutGuide;
    struct CGRect _sourceRect;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILayoutGuide *topToSummarySpacingLayoutGuide; // @synthesize topToSummarySpacingLayoutGuide=_topToSummarySpacingLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *contentToAuxiliarySpacingLayoutGuide; // @synthesize contentToAuxiliarySpacingLayoutGuide=_contentToAuxiliarySpacingLayoutGuide;
@property(retain, nonatomic) HUPillButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) HUQuickControlButtonRowView *buttonRowView; // @synthesize buttonRowView=_buttonRowView;
@property(nonatomic) _Bool showAlternateControlButton; // @synthesize showAlternateControlButton=_showAlternateControlButton;
@property(retain, nonatomic) HUQuickControlAuxiliaryHostView *auxiliaryHostView; // @synthesize auxiliaryHostView=_auxiliaryHostView;
@property(retain, nonatomic) _UIBackdropViewSettings *blurSettings; // @synthesize blurSettings=_blurSettings;
@property(retain, nonatomic) UIView *blurTintView; // @synthesize blurTintView=_blurTintView;
@property(retain, nonatomic) _UIBackdropView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSLayoutConstraint *compactControlBottomConstraint; // @synthesize compactControlBottomConstraint=_compactControlBottomConstraint;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(retain, nonatomic) UILayoutGuide *controlViewLayoutGuide; // @synthesize controlViewLayoutGuide=_controlViewLayoutGuide;
@property(retain, nonatomic) HUControlHostView *controlHostView; // @synthesize controlHostView=_controlHostView;
@property(readonly, nonatomic) __weak id <HUQuickControlContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HUQuickControlSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(retain, nonatomic) HUPillButton *alternateControlButton; // @synthesize alternateControlButton=_alternateControlButton;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(copy, nonatomic) NSString *alternateControlButtonTitle; // @synthesize alternateControlButtonTitle=_alternateControlButtonTitle;
@property(nonatomic) _Bool controlViewSupportsTransformTransition; // @synthesize controlViewSupportsTransformTransition=_controlViewSupportsTransformTransition;
@property(retain, nonatomic) UILayoutGuide *controlViewPreferredFrameLayoutGuide; // @synthesize controlViewPreferredFrameLayoutGuide=_controlViewPreferredFrameLayoutGuide;
@property(retain, nonatomic) UIView *activeControlView; // @synthesize activeControlView=_activeControlView;
@property(nonatomic) unsigned long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(nonatomic) _Bool shouldShowDetailsButton; // @synthesize shouldShowDetailsButton=_shouldShowDetailsButton;
@property(nonatomic) _Bool shouldShowAlternateControlButton; // @synthesize shouldShowAlternateControlButton=_shouldShowAlternateControlButton;
@property(nonatomic) _Bool shouldShowActiveControl; // @synthesize shouldShowActiveControl=_shouldShowActiveControl;
@property(nonatomic) double initialSourceViewScale; // @synthesize initialSourceViewScale=_initialSourceViewScale;
@property(nonatomic) double chromeTransitionProgress; // @synthesize chromeTransitionProgress=_chromeTransitionProgress;
@property(nonatomic) double blurTransitionProgress; // @synthesize blurTransitionProgress=_blurTransitionProgress;
@property(nonatomic) double controlTransitionProgress; // @synthesize controlTransitionProgress=_controlTransitionProgress;
- (void).cxx_destruct;
- (struct CGPoint)_controlHostCenterForPresentationProgress:(double)arg1;
- (struct CGPoint)_controlHostCenter;
- (struct CGAffineTransform)_controlHostTransform;
- (struct CGAffineTransform)_controlHostTransformForPresentationProgress:(double)arg1;
- (struct CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1;
- (struct CGSize)_presentedControlHostSize;
@property(readonly, nonatomic) struct CGRect presentedControlFrame;
- (double)_summaryFirstBaselineToControlTopSpacing;
- (void)_updateCompactControlBottomConstraint;
- (void)_configureControlViewLayoutGuideConstraints:(id)arg1;
- (void)_configureRegularHeightConstraints:(id)arg1;
- (void)_configureCompactHeightConstraints:(id)arg1;
- (void)updateConstraints;
- (void)_updateControlHostLayout;
- (void)_updateContentAlignment;
- (void)_updateLayoutMargins;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (long long)_sizeSubclass;
- (_Bool)_useCompactHeightLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)hideAuxiliaryView;
- (void)showAuxiliaryView:(id)arg1;
- (void)_alternateControlButtonTapped:(id)arg1;
- (void)_detailsButtonTapped:(id)arg1;
- (void)_updateAlternateControlButtonTitle;
- (void)_updateAlternateControlButtonVisibility;
- (void)_setupAlternateControlButtonIfNecessary;
- (void)_setupBlurView;
- (_Bool)_shouldShowControlView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 sourceRect:(struct CGRect)arg3;

@end

