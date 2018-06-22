//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKFingerprintGlyphViewDelegate.h"

@class CALayer, NSMutableArray, NSString, PKCheckGlyphLayer, PKFingerprintGlyphView, PKMicaLayer, PKPhoneGlyphLayer, UIColor;

@interface PKGlyphView : UIView <PKFingerprintGlyphViewDelegate>
{
    long long _style;
    unsigned long long _transitionIndex;
    _Bool _transitioning;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    _Bool _phoneWiggling;
    NSString *_phoneWiggleAnimationKey;
    struct {
        unsigned int showingPhone:1;
        unsigned int phoneRotated:1;
        unsigned int showingUserIntentPhone:1;
        unsigned int showingUserIntentArrow:1;
    } _layoutFlags;
    PKFingerprintGlyphView *_fingerprintView;
    PKPhoneGlyphLayer *_phoneLayer;
    PKCheckGlyphLayer *_checkLayer;
    PKMicaLayer *_userIntentArrowLayer;
    PKMicaLayer *_userIntentPhoneLayer;
    double _phoneAspectRatio;
    CALayer *_customImageLayer;
    struct UIColor *_secondaryColor;
    long long _colorMode;
    UIColor *_primaryColor;
    struct CGImage *_customImage;
    long long _state;
    id <PKGlyphViewDelegate> _delegate;
    struct UIEdgeInsets _customImageAlignmentEdgeInsets;
}

+ (id)sharedStaticResources;
+ (_Bool)automaticallyNotifiesObserversOfState;
@property(nonatomic) __weak id <PKGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) struct CGImage *customImage; // @synthesize customImage=_customImage;
@property(readonly, nonatomic) struct UIEdgeInsets customImageAlignmentEdgeInsets; // @synthesize customImageAlignmentEdgeInsets=_customImageAlignmentEdgeInsets;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) long long colorMode; // @synthesize colorMode=_colorMode;
- (void).cxx_destruct;
- (void)fingerprintGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2;
- (struct CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (struct CGPoint)_phonePositionWhileShownWithRotationPercentage:(double)arg1;
- (struct CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (id)createCustomImageLayer;
- (void)setCustomImage:(struct CGImage *)arg1 withAlignmentEdgeInsets:(struct UIEdgeInsets)arg2;
@property(nonatomic) _Bool fadeOnRecognized;
- (void)setColorMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_applyColorMode:(_Bool)arg1;
- (struct UIColor *)_secondaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (struct UIColor *)_primaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (void)_setSecondaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)_setPrimaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)_setRecognizedIfNecessaryWithTransitionIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateCheckViewStateAnimated:(_Bool)arg1;
- (void)_updateCustomImageLayerOpacityAnimated:(_Bool)arg1;
- (void)_updateUserIntentLayoutAnimated:(_Bool)arg1;
- (void)_endPhoneWiggle;
- (void)_startPhoneWiggle;
- (void)_updatePhoneWiggleIfNecessary;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (void)_executeTransitionCompletionHandlers:(_Bool)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)updateRasterizationScale:(double)arg1;
- (void)_layoutContentLayer:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

