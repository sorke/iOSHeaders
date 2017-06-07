//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIAccessibilityHUDGestureHosting-Protocol.h>
#import <UIKit/UIBarPositioning-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKit/_UIBarPositioningInternal-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDGestureManager, UIColor, _UIToolbarVisualProvider;
@protocol UIToolbarDelegate;

@interface UIToolbar : UIView <UIAccessibilityHUDGestureHosting, _UIBarPositioningInternal, UIGestureRecognizerDelegatePrivate, UIBarPositioning>
{
    id <UIToolbarDelegate> _delegate;
    NSArray *_items;
    UIColor *_barTintColor;
    struct {
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int isLocked:1;
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder:1;
        unsigned int disableBlurTinting:1;
    } _toolbarFlags;
    id __appearanceStorage;
    _UIToolbarVisualProvider *_visualProvider;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
    unsigned long long _disableAutolayoutWarnings;
    _Bool __wantsLetterpressContent;
    _Bool _centerTextButtons;
    UIView *_shadowView;
    long long _barPosition;
    NSArray *_backgroundEffects;
}

+ (double)defaultHeightForBarSize:(int)arg1;
+ (double)defaultHeight;
+ (id)defaultButtonFont;
@property(nonatomic) _Bool centerTextButtons; // @synthesize centerTextButtons=_centerTextButtons;
@property(nonatomic, setter=_setWantsLetterpressContent:) _Bool _wantsLetterpressContent; // @synthesize _wantsLetterpressContent=__wantsLetterpressContent;
@property(copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property(retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // @synthesize _shadowView;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void).cxx_destruct;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (id)initInView:(id)arg1 withFrame:(struct CGRect)arg2 withItemList:(id)arg3;
- (void)_setForceTopBarAppearance:(_Bool)arg1;
@property(nonatomic, getter=_isLocked, setter=_setLocked:) _Bool _locked;
- (void)setCenter:(struct CGPoint)arg1;
- (void)_frameOrCenterChanged;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_subclassImplementsDrawRect;
@property(nonatomic, setter=_setDisableBlurTinting:) _Bool _disableBlurTinting;
@property(nonatomic, setter=_setHidesShadow:) _Bool _hidesShadow;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)_updateBackgroundView;
- (void)_setNeedsBackgroundViewUpdate;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(_Bool)arg1 wasMinibar:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
@property(readonly, nonatomic, getter=isMinibar) _Bool minibar;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (id)_itemAtPoint:(struct CGPoint)arg1;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_positionToolbarButtonsAndResetFontScaleAdjustment:(_Bool)arg1;
- (struct CGRect)_frameOfBarButtonItem:(id)arg1;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
@property(retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *_backdropViewLayerGroupName;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
@property(readonly, nonatomic) long long _barTranslucence;
@property(nonatomic) long long barStyle;
- (void)_updateBarForStyle;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (id)_effectiveBarTintColor;
@property(nonatomic) __weak id <UIToolbarDelegate> delegate;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;
- (void)_performBlockAllowingConstraintManipulation:(CDUnknownBlockType)arg1;
- (id)__appearanceStorage;
- (_Bool)_linkedBeforeWhitetailAndInitializedFromCoder;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_doCommonToolbarInit;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (double)_defaultAutolayoutSpacing;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(_Bool)arg4;
- (_Bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
