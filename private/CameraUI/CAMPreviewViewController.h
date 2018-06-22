//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAMExposureDelegate.h"
#import "CAMFacesDelegate.h"
#import "CAMFocusDelegate.h"
#import "CAMFocusIndicatorViewDelegate.h"
#import "CAMPreviewViewSubjectIndicatorDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CAMBurstIndicatorView, CAMExposureResult, CAMFocusIndicatorView, CAMFocusResult, CAMMachineReadableCodeResult, CAMMotionController, CAMPreviewView, CAMStageLightOverlayView, CAMSubjectIndicatorView, CAMTimelapseController, CUCaptureController, NSArray, NSDate, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface CAMPreviewViewController : UIViewController <UIGestureRecognizerDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMFocusIndicatorViewDelegate, CAMPreviewViewSubjectIndicatorDelegate, CAMFacesDelegate>
{
    _Bool __changingModeOrDevice;
    _Bool __userLockedFocusAndExposure;
    _Bool __updateFaceIndicators;
    _Bool _showingStandardControls;
    float __cachedExposureTargetBias;
    float __exposureBiasPanStartValue;
    id <CAMPreviewViewControllerDelegate> _delegate;
    long long _layoutStyle;
    long long _shallowDepthOfFieldStatus;
    CAMMachineReadableCodeResult *_cachedSignificantMRCResult;
    NSArray *_cachedMRCResults;
    long long _lightingType;
    CUCaptureController *__captureController;
    CAMTimelapseController *__timelapseController;
    long long __mode;
    long long __device;
    CAMBurstIndicatorView *__burstIndicator;
    CAMFocusIndicatorView *__continuousIndicator;
    CAMFocusIndicatorView *__pointIndicator;
    NSDate *__lastFocusIndictorStartTime;
    CAMFocusResult *__lastFocusResult;
    CAMExposureResult *__lastExposureResult;
    NSDate *__lastTapToFocusTime;
    unsigned long long __currentFacesCount;
    UITapGestureRecognizer *__tapToFocusAndExposeGestureRecognizer;
    UILongPressGestureRecognizer *__longPressToLockGestureRecognizer;
    UIPanGestureRecognizer *__exposureBiasPanGestureRecognizer;
    UITapGestureRecognizer *__aspectRatioToggleDoubleTapGestureRecognizer;
    double __exposureBiasVirtualSliderExponent;
    double __exposureBiasVirtualSliderPointsForFirstStop;
    NSDate *__lastExposureBiasModificationTime;
    CAMSubjectIndicatorView *__portraitModeCenteredIndicatorView;
    CAMStageLightOverlayView *__stageLightOverlayView;
    CAMMotionController *__motionController;
}

+ (double)hideIndicatorAnimationDuration;
+ (double)showIndicatorAnimationDuration;
@property(nonatomic, getter=isShowingStandardControls) _Bool showingStandardControls; // @synthesize showingStandardControls=_showingStandardControls;
@property(readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property(readonly, nonatomic) CAMStageLightOverlayView *_stageLightOverlayView; // @synthesize _stageLightOverlayView=__stageLightOverlayView;
@property(readonly, nonatomic) CAMSubjectIndicatorView *_portraitModeCenteredIndicatorView; // @synthesize _portraitModeCenteredIndicatorView=__portraitModeCenteredIndicatorView;
@property(retain, nonatomic, setter=_setLastExposureBiasModifiedTime:) NSDate *_lastExposureBiasModificationTime; // @synthesize _lastExposureBiasModificationTime=__lastExposureBiasModificationTime;
@property(nonatomic, setter=_setExposureBiasVirtualSliderPointsForFirstStop:) double _exposureBiasVirtualSliderPointsForFirstStop; // @synthesize _exposureBiasVirtualSliderPointsForFirstStop=__exposureBiasVirtualSliderPointsForFirstStop;
@property(nonatomic, setter=_setExposureBiasVirtualSliderExponent:) double _exposureBiasVirtualSliderExponent; // @synthesize _exposureBiasVirtualSliderExponent=__exposureBiasVirtualSliderExponent;
@property(readonly, nonatomic) float _exposureBiasPanStartValue; // @synthesize _exposureBiasPanStartValue=__exposureBiasPanStartValue;
@property(nonatomic, setter=_setCachedExposureTargetBias:) float _cachedExposureTargetBias; // @synthesize _cachedExposureTargetBias=__cachedExposureTargetBias;
@property(readonly, nonatomic) UITapGestureRecognizer *_aspectRatioToggleDoubleTapGestureRecognizer; // @synthesize _aspectRatioToggleDoubleTapGestureRecognizer=__aspectRatioToggleDoubleTapGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *_exposureBiasPanGestureRecognizer; // @synthesize _exposureBiasPanGestureRecognizer=__exposureBiasPanGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *_longPressToLockGestureRecognizer; // @synthesize _longPressToLockGestureRecognizer=__longPressToLockGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapToFocusAndExposeGestureRecognizer; // @synthesize _tapToFocusAndExposeGestureRecognizer=__tapToFocusAndExposeGestureRecognizer;
@property(readonly, nonatomic) _Bool _updateFaceIndicators; // @synthesize _updateFaceIndicators=__updateFaceIndicators;
@property(readonly, nonatomic) unsigned long long _currentFacesCount; // @synthesize _currentFacesCount=__currentFacesCount;
@property(retain, nonatomic, setter=_setLastTapToFocusTime:) NSDate *_lastTapToFocusTime; // @synthesize _lastTapToFocusTime=__lastTapToFocusTime;
@property(retain, nonatomic, setter=_setLastExposureResult:) CAMExposureResult *_lastExposureResult; // @synthesize _lastExposureResult=__lastExposureResult;
@property(retain, nonatomic, setter=_setLastFocusResult:) CAMFocusResult *_lastFocusResult; // @synthesize _lastFocusResult=__lastFocusResult;
@property(nonatomic, setter=_setUserLockedFocusAndExposure:) _Bool _userLockedFocusAndExposure; // @synthesize _userLockedFocusAndExposure=__userLockedFocusAndExposure;
@property(retain, nonatomic, setter=_setLastFocusIndictorStartTime:) NSDate *_lastFocusIndictorStartTime; // @synthesize _lastFocusIndictorStartTime=__lastFocusIndictorStartTime;
@property(readonly, nonatomic) CAMFocusIndicatorView *_pointIndicator; // @synthesize _pointIndicator=__pointIndicator;
@property(readonly, nonatomic) CAMFocusIndicatorView *_continuousIndicator; // @synthesize _continuousIndicator=__continuousIndicator;
@property(readonly, nonatomic) CAMBurstIndicatorView *_burstIndicator; // @synthesize _burstIndicator=__burstIndicator;
@property(nonatomic, getter=_isChangingModeOrDevice, setter=_setChangingModeOrDevice:) _Bool _changingModeOrDevice; // @synthesize _changingModeOrDevice=__changingModeOrDevice;
@property(nonatomic, setter=_setDevice:) long long _device; // @synthesize _device=__device;
@property(nonatomic, setter=_setMode:) long long _mode; // @synthesize _mode=__mode;
@property(readonly, nonatomic) __weak CAMTimelapseController *_timelapseController; // @synthesize _timelapseController=__timelapseController;
@property(readonly, nonatomic) CUCaptureController *_captureController; // @synthesize _captureController=__captureController;
@property(nonatomic) long long lightingType; // @synthesize lightingType=_lightingType;
@property(retain, nonatomic) NSArray *cachedMRCResults; // @synthesize cachedMRCResults=_cachedMRCResults;
@property(retain, nonatomic) CAMMachineReadableCodeResult *cachedSignificantMRCResult; // @synthesize cachedSignificantMRCResult=_cachedSignificantMRCResult;
@property(nonatomic) long long shallowDepthOfFieldStatus; // @synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) __weak id <CAMPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewViewDidRemoveLastTrackedSubjectIndicator:(id)arg1;
- (void)previewViewDidAddFirstTrackedSubjectIndicator:(id)arg1;
- (_Bool)_shouldShowIndicatorsAsInactive;
- (_Bool)_isPortraitEffectActive;
- (void)_updatePortraitModeViewsAnimated:(_Bool)arg1;
- (_Bool)_shouldSuppressNewPortraitModeTrackedSubjectIndicators;
- (_Bool)_shouldShowPortraitModeTrackedSubjectIndicatorsForLightingType:(long long)arg1;
- (_Bool)_shouldShowStageLightOverlayActive;
- (_Bool)_shouldShowStageLightOverlayViewForMode:(long long)arg1 device:(long long)arg2 lightingType:(long long)arg3 shallowDepthOfFieldStatus:(long long)arg4;
- (_Bool)_shouldShowPortraitModeIndicatorViews;
- (void)_createPortraitModeCenteredIndicatorViewIfNecessary;
- (void)focusOnNormalizedPoint:(struct CGPoint)arg1;
- (void)_applicationDidEnterBackground;
- (void)notifyCaptureSessionDidStopRunning;
- (void)notifyDidStopCapture;
- (void)notifyWillStartCapturing;
- (void)notifyShutterButtonPressed;
- (void)_updateExposureBiasSideAnimated:(_Bool)arg1;
- (void)_captureOrientationChanged:(id)arg1;
- (void)_handleAspectRatioToggleDoubleTap:(id)arg1;
- (_Bool)_shouldDisableAspectRatioToggle;
- (_Bool)_shouldAllowAspectRatioToggleForMode:(long long)arg1;
- (void)_updatePreviewViewAspectMode;
- (id)focusIndicatorViewBoundingViewForClippingFocusIndicatorView:(id)arg1;
- (_Bool)_isFocusLockAllowed;
- (double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1;
- (_Bool)_isFullyAutomaticFocus:(id)arg1 andExposure:(id)arg2;
- (_Bool)_isFullyAutomaticFocusAndExposure;
- (void)_validateUserLockedFocusAndExposure;
- (void)_validateLastExposureBiasModificationTime;
- (void)_validateExposureTargetBiasFromExposureResult:(id)arg1;
- (void)_validateInternalProperties;
- (_Bool)_shouldDisableFocusUI;
@property(readonly, nonatomic, getter=isExposureLockedByUser) _Bool exposureLockedByUser;
@property(readonly, nonatomic, getter=isFocusLockedByUser) _Bool focusLockedByUser;
- (void)_setUserLockedFocusAndExposure:(_Bool)arg1 shouldAnimate:(_Bool)arg2;
- (_Bool)captureControllerUserHasAdjustedExposureTargetBias:(id)arg1;
- (void)captureController:(id)arg1 didOutputExposureResult:(id)arg2;
- (void)captureController:(id)arg1 didOutputFocusResult:(id)arg2;
- (_Bool)_shouldResetFocusAndExposureForSubjectAreaDidChange;
- (_Bool)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
- (void)captureControllerWillResetFocusAndExposure:(id)arg1;
- (double)_exposureBiasForVirtualSliderPosition:(double)arg1;
- (double)_virtualSliderPositionForExposureBias:(double)arg1;
- (void)_initializeExposureBiasSliderParameters;
- (double)_effectiveExposureBiasMovementForTranslation:(struct CGPoint)arg1;
- (void)_handleExposureBiasPan:(id)arg1;
- (_Bool)_isPanningExposureBias;
- (void)_updateExposureBiasPanGestureRecognizerForOrientation;
- (id)_focusIndicatorViewsWithExposureBiasSliders;
- (void)_updateExposureBiasViews:(id)arg1;
- (void)_updateExposureBiasViews;
- (void)_initializeExposureBiasParametersForFocusIndicatorView:(id)arg1;
- (int)_exposureBiasSide;
- (float)_exposureTargetBiasMaximum;
- (float)_exposureTargetBiasMinimum;
- (_Bool)_showExposureBiasSliderForPointView;
- (_Bool)_allowExposureBiasForMode:(long long)arg1;
- (_Bool)_canModifyExposureBias;
@property(readonly, nonatomic) UIPanGestureRecognizer *activeExposureBiasPanGestureRecognizer;
- (void)_lockFocusAndExposure;
- (void)_cancelDelayedFocusAndExposureLock;
- (void)_lockFocusAndExposureAfterDelay:(double)arg1;
- (void)_handleLongPressToLock:(id)arg1;
- (void)_handleTapToFocusAndExpose:(id)arg1;
- (void)_focusOnPoint:(struct CGPoint)arg1;
- (_Bool)_allowUserToChangeFocusAndExposure;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_hideMRCIndicatorsAnimated:(_Bool)arg1;
- (void)_cancelDelayedMRCIndicatorsFadeOut;
- (void)_fadeOutMRCIndicatorView:(id)arg1 withIdentifier:(id)arg2 animated:(_Bool)arg3;
- (void)_fadeOutMRCIndicators;
- (void)_fadeOutMRCIndicatorsAfterDelay:(double)arg1;
- (void)_updateMRCIndicator:(id)arg1 forMRC:(id)arg2;
- (void)_fadeInMRCIndicator:(id)arg1 forMRC:(id)arg2;
- (void)_updateMRCIndicators;
- (void)_updateMRCIndicatorsIfNecessary;
- (_Bool)_shouldAllowMRCIndicators;
- (void)_hidePortaitModeTrackedSubjectIndicatorsAnimated:(_Bool)arg1;
- (void)_updatePortraitModeTrackedSubjectIndicatorsWithFaceResults:(id)arg1;
- (_Bool)_shouldUpdateIndicatorSizeFrom:(struct CGSize)arg1 to:(struct CGSize)arg2 minimumAreaChangeThreshold:(double)arg3 minimumAreaFractionChangeThreshold:(double)arg4;
- (void)_updateFaceIndicatorsWithResults:(id)arg1;
- (void)_hideFaceIndicatorsAnimated:(_Bool)arg1;
- (void)_fadeOutFaceIndicators;
- (void)_cancelDelayedFaceIndicatorFadeOut;
- (void)_fadeOutFaceIndicatorsAfterDelay:(double)arg1;
- (void)_resetFaceTracking;
- (void)_updatePortraitModeViewsForFaceResults:(id)arg1;
- (_Bool)_shouldAllowFaceIndicators;
- (void)_updateFaceIndicatorsForFaceResults:(id)arg1;
- (void)captureController:(id)arg1 didOutputFaceResults:(id)arg2;
- (_Bool)_shouldSuppressNewFaces;
- (_Bool)_isShowingFaces;
- (void)_scaleDownLockedPointOfInterest;
- (void)_finishFocusingLockedPointOfInterestIndicator;
- (void)_showLockedAtPointOfInterest:(struct CGPoint)arg1;
- (long long)_largeStyleForPointIndicator;
- (long long)_styleForPointIndicator;
- (void)_showIndicatorAtPointOfInterest:(struct CGPoint)arg1;
- (void)_deactivateFocusIndicator:(id)arg1;
- (void)_deactivateFocusIndicator:(id)arg1 afterDelay:(double)arg2;
- (void)_activateFocusIndicator:(id)arg1;
- (void)_hideAllFocusIndicatorsAnimated:(_Bool)arg1;
- (void)_cancelDelayedHideOrDeactivateForFocusIndicator:(id)arg1;
- (void)_hideFocusIndicator:(id)arg1 animated:(_Bool)arg2;
- (void)_hideFocusIndicator:(id)arg1;
- (void)_hideFocusIndicator:(id)arg1 afterDelay:(double)arg2;
- (void)_hideAllFocusIndicatorsExceptForIndicator:(id)arg1;
- (void)_scalePortraitModeFocusIndicators;
- (void)_setFocusIndicatorsPulsing:(_Bool)arg1;
- (void)_updateUIForCenteredContrastBasedFocusDidEnd;
- (void)_showUIForResetFocusAndExposure;
- (_Bool)_shouldShowContinuousIndicator;
- (long long)_interfaceOrientation;
- (void)_updateForOrientation;
- (void)_createAspectRatioToggleDoubleTapGestureRecognizerIfNecessary;
- (void)_createExposureBiasPanGestureRecognizerIfNecessary;
- (void)_createLongPressToLockGestureRecognizersIfNecessary;
- (void)_createTapToFocusAndExposeGestureRecognizerIfNecessary;
- (void)_createCommonGestureRecognizersIfNecessary;
- (void)_resetCachedTimes;
- (void)setLightingType:(long long)arg1 animated:(_Bool)arg2;
- (void)_didChangeModeOrDeviceAnimated:(_Bool)arg1;
- (void)_willChangeModeOrDevice;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2 animated:(_Bool)arg3;
- (void)willChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)_createStageLightOverlayViewIfNeededWillAnimate:(_Bool)arg1;
- (void)_createPointIndicatorIfNecessary;
- (void)_createContinuousIndicatorIfNecessary;
@property(readonly, nonatomic) CAMPreviewView *previewView;
- (void)_cancelDelayedActions;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCaptureController:(id)arg1 motionController:(id)arg2 timelapseController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

