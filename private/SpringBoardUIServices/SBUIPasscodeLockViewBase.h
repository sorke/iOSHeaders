//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBFLegibilitySettingsProviderDelegate.h"
#import "SBUIBiometricResourceObserver.h"
#import "SBUIPasscodeBiometricAuthenticationViewDelegate.h"
#import "SBUIPasscodeBiometricAuthenticationViewLayoutDelegate.h"
#import "SBUIPasscodeLockView.h"
#import "SBUIPasscodeLockView_Internal.h"

@class NSMutableSet, NSString, NSTimer, SBUIPasscodeBiometricAuthenticationView, SBUIPasscodeEntryField, SBUIProudLockContainerView, UIColor, UINotificationFeedbackGenerator, _UIKeyboardFeedbackGenerator, _UILegibilitySettings;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricResourceObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeBiometricAuthenticationViewLayoutDelegate, SBUIPasscodeBiometricAuthenticationViewDelegate, SBUIPasscodeLockView_Internal, SBUIPasscodeLockView>
{
    _Bool _needStatusTextUpdate;
    _Bool _playsKeypadSounds;
    _Bool _showsStatusField;
    _Bool _becameVisible;
    _Bool _usesBiometricPresentation;
    _Bool _allowsAutomaticBiometricPresentationTransition;
    _Bool _showsProudLock;
    _Bool _proudLockShowsBiometricStates;
    _Bool _suppressTitleText;
    double _backgroundAlpha;
    UIColor *_customBackgroundColor;
    id <SBFLegibilitySettingsProvider> _backgroundLegibilitySettingsProvider;
    double _currentBacklightLevel;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _allowsStatusTextUpdatingOnResignFirstResponder;
    long long _passcodeLockViewState;
    _Bool _isBiometricAuthenticationAllowed;
    unsigned long long _biometricMatchingState;
    id <BSInvalidatable> _biometricMatchingAssertion;
    NSMutableSet *_biometricMatchingEnabledOverrideReasons;
    _Bool _deviceHasBeenUnlockedOnceSinceBoot;
    _Bool _pendingBioUnlock;
    int _currentPendingBioUnlockToken;
    UIView *_passcodeAuthenticationView;
    SBUIPasscodeBiometricAuthenticationView *_biometricAuthenticationView;
    SBUIProudLockContainerView *_proudLockContainerView;
    SBUIProudLockContainerView *_overrideProudLockContainerView;
    _Bool _screenOn;
    _Bool _shouldResetForFailedPasscodeAttempt;
    _Bool _isTransitioning;
    int _style;
    id <SBUIPasscodeLockViewDelegate> _delegate;
    SBUIPasscodeEntryField *_entryField;
    double _luminanceBoost;
    id <SBUIBiometricResource> _biometricResource;
    _UIKeyboardFeedbackGenerator *_keyboardFeedbackBehavior;
    unsigned long long _statusState;
    NSTimer *_screenBrightnessChangedTimer;
    UINotificationFeedbackGenerator *_authenticationFeedbackBehavior;
    NSString *_statusText;
    NSString *_statusSubtitleText;
    CDStruct_930a33b1 _transitionContext;
}

@property(copy, nonatomic, getter=_statusSubtitleText, setter=_setStatusSubtitleText:) NSString *statusSubtitleText; // @synthesize statusSubtitleText=_statusSubtitleText;
@property(copy, nonatomic, getter=_statusText, setter=_setStatusText:) NSString *statusText; // @synthesize statusText=_statusText;
@property(nonatomic) CDStruct_930a33b1 transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(retain, nonatomic) UINotificationFeedbackGenerator *authenticationFeedbackBehavior; // @synthesize authenticationFeedbackBehavior=_authenticationFeedbackBehavior;
@property(retain, nonatomic) NSTimer *screenBrightnessChangedTimer; // @synthesize screenBrightnessChangedTimer=_screenBrightnessChangedTimer;
@property(nonatomic, getter=_statusState, setter=_setStatusState:) unsigned long long statusState; // @synthesize statusState=_statusState;
@property(nonatomic) _Bool shouldResetForFailedPasscodeAttempt; // @synthesize shouldResetForFailedPasscodeAttempt=_shouldResetForFailedPasscodeAttempt;
@property(retain, nonatomic) _UIKeyboardFeedbackGenerator *keyboardFeedbackBehavior; // @synthesize keyboardFeedbackBehavior=_keyboardFeedbackBehavior;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(retain, nonatomic) UIView *biometricAuthenticationView; // @synthesize biometricAuthenticationView=_biometricAuthenticationView;
@property(retain, nonatomic) UIView *passcodeAuthenticationView; // @synthesize passcodeAuthenticationView=_passcodeAuthenticationView;
@property(nonatomic) long long passcodeLockViewState; // @synthesize passcodeLockViewState=_passcodeLockViewState;
@property(nonatomic, getter=isBiometricAuthenticationAllowed) _Bool biometricAuthenticationAllowed; // @synthesize biometricAuthenticationAllowed=_isBiometricAuthenticationAllowed;
@property(nonatomic, getter=isScreenOn) _Bool screenOn; // @synthesize screenOn=_screenOn;
@property(nonatomic, getter=_luminosityBoost, setter=_setLuminosityBoost:) double luminosityBoost; // @synthesize luminosityBoost=_luminanceBoost;
@property(retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider; // @synthesize backgroundLegibilitySettingsProvider=_backgroundLegibilitySettingsProvider;
@property(retain, nonatomic, getter=_entryField, setter=_setEntryField:) SBUIPasscodeEntryField *_entryField; // @synthesize _entryField;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(retain, nonatomic) SBUIProudLockContainerView *overrideProudLockContainerView; // @synthesize overrideProudLockContainerView=_overrideProudLockContainerView;
@property(nonatomic) _Bool proudLockShowsBiometricStates; // @synthesize proudLockShowsBiometricStates=_proudLockShowsBiometricStates;
@property(nonatomic) _Bool showsProudLock; // @synthesize showsProudLock=_showsProudLock;
@property(nonatomic) _Bool allowsAutomaticBiometricPresentationTransition; // @synthesize allowsAutomaticBiometricPresentationTransition=_allowsAutomaticBiometricPresentationTransition;
@property(nonatomic) _Bool usesBiometricPresentation; // @synthesize usesBiometricPresentation=_usesBiometricPresentation;
@property(nonatomic) _Bool showsStatusField; // @synthesize showsStatusField=_showsStatusField;
@property(nonatomic) __weak id <SBUIPasscodeLockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)passcodeBiometricAuthenticationViewEmergencyCallButtonHit:(id)arg1;
- (void)passcodeBiometricAuthenticationViewCancelButtonHit:(id)arg1;
- (void)passcodeBiometricAuthenticationViewUsePasscodeButtonHit:(id)arg1;
- (double)passcodeBiometricAuthenticationViewNumberPadAncillaryButtonOffsetFromTopOfScreen:(id)arg1;
- (double)passcodeBiometricAuthenticationViewSideButtonsOffsetFromCenter:(id)arg1;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)biometricResource:(id)arg1 matchingEnabledDidChange:(_Bool)arg2;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)_updateBiometricLayout;
- (void)_updateBiometricGlyphForBioEvent:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateProudLockForBioEvent:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (void)_handleBiometricAuthentication;
- (_Bool)_shouldAnimationDriveBiometricAuthenticationTiming;
- (void)_resetForFailedBiometricAttempt;
- (void)_resetProudLockAndTitleTextForFailedBiometricAttempt;
- (void)_resetStatusText;
- (void)_evaluateLuminance;
- (double)_luminanceBoostFromDisplayBrightness;
- (double)_luminanceBoostFromLegibility;
- (void)_screenBrightnessReallyDidChange;
- (void)_clearBrightnessChangeTimer;
- (_Bool)_proudLockShowingBiometricStates;
- (_Bool)_swipeToRetryEnabled;
- (void)_noteScreenBrightnessDidChange;
- (void)_playAuthenticationFeedbackForSuccess:(_Bool)arg1 jiggleLock:(_Bool)arg2;
- (void)_setProudLockViewState:(long long)arg1 animated:(_Bool)arg2;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(_Bool)arg1;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (id)_defaultStatusText;
- (void)_setStatusState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)_statusStateForLockoutState:(unsigned long long)arg1;
- (void)updateStatusTextAnimated:(_Bool)arg1;
- (void)_setSuppressTitleText:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNeedsStatusTextUpdate;
- (double)_numberPadOffsetFromTopOfScreen:(id)arg1;
- (void)_updateStatusStateForLockoutIfNecessaryAnimatedly:(_Bool)arg1;
- (void)_sendDelegateKeypadKeyUp;
- (void)_sendDelegateKeypadKeyDown;
- (void)_luminanceBoostDidChange;
- (void)_setLegibilitySettings:(id)arg1;
- (_Bool)_isBoundsPortraitOriented;
- (long long)_orientation;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)_canRecognizeBiometricAuthentication;
- (_Bool)canResignFirstResponder;
- (_Bool)resignFirstResponder;
- (void)becomeActiveWithAnimationSettings:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_resumeBiometricMatchingAdvisory:(_Bool)arg1;
- (void)_overrideBiometricMatchingEnabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_setBiometricMatchingState:(unsigned long long)arg1;
- (void)_evaluateBiometricMatchingState;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
- (void)setKeypadVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool playsKeypadSounds; // @dynamic playsKeypadSounds;
@property(readonly, nonatomic) NSString *passcode; // @dynamic passcode;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(_Bool)arg1;
- (void)reset;
- (void)resetForSuccessViaPasscode:(_Bool)arg1;
- (void)resetForScreenOff;
- (void)resetForFailedPasscode;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)updateForTransitionToPasscodeView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willTransitionToPasscodeView;
- (void)_advanceToPasscodeForMatchFailure:(_Bool)arg1;
- (void)_advanceToPasscodeTimerFired;
- (void)_disarmAdvanceToPasscodeTimer;
- (void)_armAdvanceToPasscodeTimer;
- (double)_biometricViewAlphaFromPasscodeLockViewState:(long long)arg1;
- (void)_updateBiometricAlpha;
- (void)didEndTransitionToState:(long long)arg1;
- (void)willEndTransitionToState:(long long)arg1;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)beginTransitionToState:(long long)arg1;
- (void)_setPasscodeLockViewState:(long long)arg1 animated:(_Bool)arg2;
- (void)setPasscodeLockViewState:(long long)arg1 animated:(_Bool)arg2;
- (id)_proudLockContainerViewForStateUpdates;
- (_Bool)_supportsProudLock;
@property(nonatomic) _Bool biometricPresentationAncillaryButtonsVisible;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool showsEmergencyCallButton;
@property(copy, nonatomic) NSString *unlockDestination;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

