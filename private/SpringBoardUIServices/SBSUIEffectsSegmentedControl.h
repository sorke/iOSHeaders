//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISegmentedControl.h"

@class _UILegibilitySettings;

@interface SBSUIEffectsSegmentedControl : UISegmentedControl
{
    _Bool _parallaxPossible;
    _Bool _irisPossible;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedEffect;
- (id)initWithParallaxPossible:(_Bool)arg1 irisPossible:(_Bool)arg2;

@end

