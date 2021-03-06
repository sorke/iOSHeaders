//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIScrollView;

@interface PXCloudPhotoWelcomeView : UIView
{
    NSLayoutConstraint *_goButtonWidthConstraint;
    NSArray *_layoutConstraints;
    UIScrollView *_scrollView;
    UIView *_containerView;
    struct {
        _Bool goButtonTapped;
        _Bool learnMoreTapped;
        _Bool notNowTapped;
    } _delegateRespondsTo;
    _Bool _buttonsEnabled;
    id <PXCloudPhotoWelcomeViewDelegate> _delegate;
    UIImageView *_graphicImageView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_goButton;
    UILabel *_finePrintLabel;
    UIButton *_learnMoreButton;
    UIButton *_notNowButton;
}

+ (void)initialize;
@property(readonly, nonatomic) UIButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(readonly, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(readonly, nonatomic) UILabel *finePrintLabel; // @synthesize finePrintLabel=_finePrintLabel;
@property(readonly, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *graphicImageView; // @synthesize graphicImageView=_graphicImageView;
@property(nonatomic, getter=areButtonsEnabled) _Bool buttonsEnabled; // @synthesize buttonsEnabled=_buttonsEnabled;
@property(nonatomic) __weak id <PXCloudPhotoWelcomeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleNotNowTapped:(id)arg1;
- (void)_goButtonTapped:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateFontAndStyle;
- (id)_constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

