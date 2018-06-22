//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVisualEffectView.h"

@interface ASVBlurredBackgroundView : UIVisualEffectView
{
    _Bool _highlighted;
    _Bool _selected;
    _Bool _enabled;
    long long _controlStyle;
    long long _backgroundStyle;
}

+ (id)selectedEffectsForARDarkStyle;
+ (id)normalEffectsForARDarkStyle;
+ (id)selectedEffects;
+ (id)disabledSelectedEffects;
+ (id)highlightedEffectsForStudioStyle;
+ (id)highlightedEffectsForARStyle;
+ (id)normalEffectsForStudioStyle;
+ (id)normalEffectsForARStyle;
+ (id)disabledEffectsForStudioStyle;
+ (id)disabledEffectsForARStyle;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long controlStyle; // @synthesize controlStyle=_controlStyle;
- (void)updateBackgroundEffects;
- (id)initWithFrame:(struct CGRect)arg1 backgroundStyle:(long long)arg2 controlStyle:(long long)arg3;

@end

