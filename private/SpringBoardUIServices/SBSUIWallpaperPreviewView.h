//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBFIrisWallpaperViewDelegate.h"

@class NSString, SBFLockScreenDateView, SBFWallpaperView, SBSUIEffectsSegmentedControl, _UILegibilityLabel;

@interface SBSUIWallpaperPreviewView : UIView <SBFIrisWallpaperViewDelegate>
{
    _Bool _irisPossible;
    _UILegibilityLabel *_irisInstructionsLabel1;
    _UILegibilityLabel *_irisInstructionsLabel2;
    _Bool _observingParallaxChanges;
    _Bool _usingSegmentedControl;
    SBSUIEffectsSegmentedControl *_segmentedControl;
    SBFLockScreenDateView *_dateView;
    SBFWallpaperView *_wallpaperView;
}

+ (_Bool)shouldEnableParallaxForEffect:(unsigned long long)arg1;
@property(retain, nonatomic) _UILegibilityLabel *irisInstructionsLabel2; // @synthesize irisInstructionsLabel2=_irisInstructionsLabel2;
@property(retain, nonatomic) _UILegibilityLabel *irisInstructionsLabel1; // @synthesize irisInstructionsLabel1=_irisInstructionsLabel1;
@property(readonly, nonatomic) SBFWallpaperView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(retain, nonatomic) SBFLockScreenDateView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) SBSUIEffectsSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)arg1;
- (void)_updateSegmentedControl;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_layoutIrisInstructionLabels;
- (double)_segmentedControlInset;
- (void)_layoutSegmentedControl;
- (void)_layoutDateView;
- (void)_layoutWallpaperView;
- (void)layoutSubviews;
- (void)fadeOutIrisInstructions;
- (void)setIrisInstructionsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_effectChanged:(id)arg1;
- (void)_toggleMotion;
- (_Bool)shouldEnableParallax;
- (unsigned long long)selectedEffect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

