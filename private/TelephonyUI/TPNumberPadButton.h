//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "TPNumberPadButtonProtocol.h"

@class CALayer, NSString, TPRevealingRingView, UIColor, UIView;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol>
{
    unsigned int character;
    UIColor *_color;
    CALayer *_glyphLayer;
    CALayer *_highlightedGlyphLayer;
    UIView *_circleView;
    UIColor *_buttonColor;
    TPRevealingRingView *_revealingRingView;
}

+ (double)highlightedCircleViewAlpha;
+ (double)unhighlightedCircleViewAlpha;
+ (double)horizontalPadding;
+ (double)verticalPadding;
+ (void)resetLocale;
+ (id)scriptKey;
+ (void)resetLocaleIfNeeded;
+ (void)loadNumberPadKeyPrototypeView;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(_Bool)arg2 whiteVersion:(_Bool)arg3;
+ (id)localizedLettersForCharacter:(unsigned int)arg1;
+ (_Bool)usesBoldAssets;
+ (_Bool)usesButtonSaturationFilters;
+ (_Bool)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(_Bool)arg2;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (double)outerCircleDiameter;
+ (struct CGRect)circleBounds;
+ (struct CGSize)defaultSize;
@property(readonly, nonatomic) TPRevealingRingView *revealingRingView; // @synthesize revealingRingView=_revealingRingView;
@property(readonly, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain) CALayer *highlightedGlyphLayer; // @synthesize highlightedGlyphLayer=_highlightedGlyphLayer;
@property(retain) CALayer *glyphLayer; // @synthesize glyphLayer=_glyphLayer;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property unsigned int character; // @synthesize character;
- (void).cxx_destruct;
- (void)touchCancelled;
- (void)touchUp;
- (void)touchDown;
- (id)defaultColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)highlightCircleView:(_Bool)arg1 animated:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)loadImagesForCurrentCharacter;
- (id)initForCharacter:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

