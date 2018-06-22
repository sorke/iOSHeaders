//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PUPhotoEditLayoutStaticAdaptable.h"

@class NSArray, NSString, UIButton, UILongPressGestureRecognizer, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolbar : UIView <PUPhotoEditLayoutStaticAdaptable>
{
    UIView *_mainToolbarContainer;
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    NSArray *_basicViewsConstraints;
    NSArray *_mainActionButtonConstraints;
    NSArray *_secondaryActionButtonConstraints;
    NSArray *_toolButtonsConstraints;
    NSArray *_toolButtonLayoutGuides;
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
    _Bool _useLargeShortSideHeight;
    _Bool _useTranslucentBackground;
    long long _layoutOrientation;
    NSArray *_toolButtons;
    long long _buttonSpacing;
    UIButton *_mainActionButton;
    UIButton *_secondaryActionButton;
    UIView *_stretchableView;
    double _longSideMargin;
    id <PUPhotoEditToolbarDelegate> _delegate;
    struct UIEdgeInsets _contentPadding;
}

@property(nonatomic) __weak id <PUPhotoEditToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double longSideMargin; // @synthesize longSideMargin=_longSideMargin;
@property(nonatomic) _Bool useTranslucentBackground; // @synthesize useTranslucentBackground=_useTranslucentBackground;
@property(readonly, nonatomic) UIView *stretchableView; // @synthesize stretchableView=_stretchableView;
@property(readonly, nonatomic) UIButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
@property(readonly, nonatomic) UIButton *mainActionButton; // @synthesize mainActionButton=_mainActionButton;
@property(readonly, nonatomic) long long buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(readonly, copy, nonatomic) NSArray *toolButtons; // @synthesize toolButtons=_toolButtons;
@property(nonatomic) struct UIEdgeInsets contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) _Bool useLargeShortSideHeight; // @synthesize useLargeShortSideHeight=_useLargeShortSideHeight;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void).cxx_destruct;
- (void)accessibilityLongPressChanged:(id)arg1;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
- (void)updateConstraints;
- (void)_invalidateAllConstraints;
@property(readonly, nonatomic) double shortSideSize;
- (void)setUseTranslucentBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4 stretchableView:(id)arg5;
- (void)setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4;
- (void)setToolButtons:(id)arg1 mainActionButton:(id)arg2 secondaryActionButton:(id)arg3 stretchableView:(id)arg4;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

