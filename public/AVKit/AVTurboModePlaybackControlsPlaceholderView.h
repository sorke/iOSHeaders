//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVButton, AVStyleSheet, AVVolumeButtonControl, NSString, UIViewPropertyAnimator, _UIVisualEffectBackdropView;

@interface AVTurboModePlaybackControlsPlaceholderView : UIView
{
    _Bool _canIncludeTapAnywhereToEnterFullScreenButton;
    _Bool _includesTapAnywhereToEnterFullScreenButton;
    AVStyleSheet *_styleSheet;
    UIView *_hidableContentView;
    long long _preferredUnobscuredArea;
    long long _includedControlType;
    NSString *_volumeButtonMicaPackageStateName;
    UIViewPropertyAnimator *_animator;
    UIView *_prominentPlayButtonContainer;
    AVButton *_prominentPlayButton;
    UIView *_volumeButtonContainer;
    AVVolumeButtonControl *_volumeButton;
    AVButton *_tapAnywhereToEnterFullScreenButton;
    id _enterFullScreenButtonTarget;
    SEL _enterFullScreenAction;
    id _buttonTapTarget;
    SEL _playButtonAction;
    SEL _volumeButtonAction;
    _UIVisualEffectBackdropView *_captureView;
}

@property(readonly, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property(nonatomic) SEL volumeButtonAction; // @synthesize volumeButtonAction=_volumeButtonAction;
@property(nonatomic) SEL playButtonAction; // @synthesize playButtonAction=_playButtonAction;
@property(nonatomic) __weak id buttonTapTarget; // @synthesize buttonTapTarget=_buttonTapTarget;
@property(nonatomic) SEL enterFullScreenAction; // @synthesize enterFullScreenAction=_enterFullScreenAction;
@property(nonatomic) __weak id enterFullScreenButtonTarget; // @synthesize enterFullScreenButtonTarget=_enterFullScreenButtonTarget;
@property(nonatomic) _Bool includesTapAnywhereToEnterFullScreenButton; // @synthesize includesTapAnywhereToEnterFullScreenButton=_includesTapAnywhereToEnterFullScreenButton;
@property(readonly, nonatomic) AVButton *tapAnywhereToEnterFullScreenButton; // @synthesize tapAnywhereToEnterFullScreenButton=_tapAnywhereToEnterFullScreenButton;
@property(nonatomic) __weak AVVolumeButtonControl *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(nonatomic) __weak UIView *volumeButtonContainer; // @synthesize volumeButtonContainer=_volumeButtonContainer;
@property(nonatomic) __weak AVButton *prominentPlayButton; // @synthesize prominentPlayButton=_prominentPlayButton;
@property(nonatomic) __weak UIView *prominentPlayButtonContainer; // @synthesize prominentPlayButtonContainer=_prominentPlayButtonContainer;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(copy, nonatomic) NSString *volumeButtonMicaPackageStateName; // @synthesize volumeButtonMicaPackageStateName=_volumeButtonMicaPackageStateName;
@property(nonatomic) long long includedControlType; // @synthesize includedControlType=_includedControlType;
@property(nonatomic) _Bool canIncludeTapAnywhereToEnterFullScreenButton; // @synthesize canIncludeTapAnywhereToEnterFullScreenButton=_canIncludeTapAnywhereToEnterFullScreenButton;
@property(nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property(readonly, nonatomic) UIView *hidableContentView; // @synthesize hidableContentView=_hidableContentView;
@property(retain, nonatomic) AVStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
- (void).cxx_destruct;
- (id)_makeProminentPlayButtonAndContainer;
- (id)_makeVolumeButtonAndContainer;
- (id)_viewForIncludedControlType:(long long)arg1;
- (struct CGRect)_frameForIncludedViewType:(long long)arg1;
- (void)_updateFramesAndHitRectInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)addEnterFullScreenButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)addButtonTapTarget:(id)arg1 playButtonAction:(SEL)arg2 volumeButtonAction:(SEL)arg3;
- (id)initWithFrame:(struct CGRect)arg1 styleSheet:(id)arg2 captureView:(id)arg3;

@end

