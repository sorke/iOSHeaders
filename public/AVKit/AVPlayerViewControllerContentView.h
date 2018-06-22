//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVCaptureViewConfiguring.h"
#import "AVContentTransitioning.h"

@class AVExternalPlaybackIndicatorView, AVPlaybackControlsView, AVPlayerContentTransitioningView, AVPlayerLayerAndContentOverlayContainerView, AVStyleSheet, AVTurboModePlaybackControlsPlaceholderView, NSMutableDictionary, NSString, UIImageView, UIPanGestureRecognizer, _UIVisualEffectBackdropView, __AVPlayerLayerView;

@interface AVPlayerViewControllerContentView : UIView <AVCaptureViewConfiguring, AVContentTransitioning>
{
    _Bool _canAutomaticallyZoomLetterboxVideos;
    _Bool _styleSheetShouldUseCompactFullScreenItemSize;
    _Bool _needsInitialLayout;
    NSString *_automaticVideoGravity;
    NSString *_captureGroupName;
    _UIVisualEffectBackdropView *_captureView;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    UIImageView *_unsupportedContentIndicatorView;
    UIImageView *_audioOnlyIndicatorView;
    UIView *_iAdPreRollView;
    id <AVPlayerViewControllerContentViewDelegate> _delegate;
    UIView *_interactiveContentOverlayView;
    AVPlaybackControlsView *_playbackControlsView;
    AVTurboModePlaybackControlsPlaceholderView *_turboModePlaybackControlsPlaceholderView;
    AVPlayerContentTransitioningView *_contentTransitioningView;
    __AVPlayerLayerView *_playerLayerView;
    NSMutableDictionary *_targetVideoGravities;
    NSString *_externalPlaybackIndicatorTitle;
    NSString *_externalPlaybackIndicatorSubtitle;
    AVStyleSheet *_styleSheet;
    struct UIEdgeInsets _edgeInsetsForLetterboxedContent;
    struct CGRect _boundsForLastLayoutSubviews;
}

@property(retain, nonatomic) AVStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(nonatomic) struct CGRect boundsForLastLayoutSubviews; // @synthesize boundsForLastLayoutSubviews=_boundsForLastLayoutSubviews;
@property(copy, nonatomic) NSString *externalPlaybackIndicatorSubtitle; // @synthesize externalPlaybackIndicatorSubtitle=_externalPlaybackIndicatorSubtitle;
@property(copy, nonatomic) NSString *externalPlaybackIndicatorTitle; // @synthesize externalPlaybackIndicatorTitle=_externalPlaybackIndicatorTitle;
@property(readonly, nonatomic) NSMutableDictionary *targetVideoGravities; // @synthesize targetVideoGravities=_targetVideoGravities;
@property(nonatomic) _Bool needsInitialLayout; // @synthesize needsInitialLayout=_needsInitialLayout;
@property(retain, nonatomic) __AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(readonly, nonatomic) AVPlayerContentTransitioningView *contentTransitioningView; // @synthesize contentTransitioningView=_contentTransitioningView;
@property(nonatomic) _Bool styleSheetShouldUseCompactFullScreenItemSize; // @synthesize styleSheetShouldUseCompactFullScreenItemSize=_styleSheetShouldUseCompactFullScreenItemSize;
@property(readonly, nonatomic) __weak AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView; // @synthesize turboModePlaybackControlsPlaceholderView=_turboModePlaybackControlsPlaceholderView;
@property(readonly, nonatomic) AVPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property(readonly, nonatomic) UIView *interactiveContentOverlayView; // @synthesize interactiveContentOverlayView=_interactiveContentOverlayView;
@property(nonatomic) struct UIEdgeInsets edgeInsetsForLetterboxedContent; // @synthesize edgeInsetsForLetterboxedContent=_edgeInsetsForLetterboxedContent;
@property(nonatomic) _Bool canAutomaticallyZoomLetterboxVideos; // @synthesize canAutomaticallyZoomLetterboxVideos=_canAutomaticallyZoomLetterboxVideos;
@property(nonatomic) __weak id <AVPlayerViewControllerContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateStyleSheet;
- (void)_loadTurboModePlaybackControlsPlaceholderViewIfNeeded;
- (void)_insertPlaybackControlsOrPlaceholderView:(id)arg1;
- (id)_mediaTimingFunctionForCurrentAnimationCurve;
- (void)_applyVideoGravityIfNeeded:(long long)arg1;
- (void)_updatePlayerLayerAndContentOverlayContainerViewLayoutMarginsForVideoGravity:(long long)arg1;
- (void)_updateVideoGravityDuringLayoutSubviewsAndAssertThatIfYouBreakThisMethodYouOwnThisMethod;
- (_Bool)_isBeingTransitionedToOrFromFullScreen;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)performTransition:(long long)arg1;
@property(readonly, nonatomic, getter=isTransitionInteractive) _Bool transitionInteractive;
@property(readonly, nonatomic) long long transitionDirection;
@property(readonly, nonatomic) double transitionProgress;
@property(readonly, nonatomic) long long transitionState;
@property(readonly, nonatomic) AVPlayerLayerAndContentOverlayContainerView *transitioningContentView;
@property(readonly, nonatomic) AVPlayerLayerAndContentOverlayContainerView *activeContentView;
@property(nonatomic) __weak id <AVContentTransitioningDelegate> contentTransitioningDelegate;
- (void)configureBackdropView:(id)arg1;
- (void)loadPlaybackControlsViewIfNeeded;
- (void)playerLayerViewDidChange;
@property(readonly, nonatomic) unsigned long long layoutClass;
@property(readonly, nonatomic) _Bool isDescendantOfNonPagingScrollView;
@property(readonly, nonatomic) _Bool isCoveringWindow;
- (void)setVideoGravityForTransitioningContent:(id)arg1;
- (void)setTargetVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2;
- (void)setExternalPlaybackIndicatorTitle:(id)arg1 subtitle:(id)arg2;
- (void)setShowsExternalPlaybackIndicator:(_Bool)arg1;
- (void)setShowsAudioOnlyIndicator:(_Bool)arg1;
- (void)setShowsUnsupportedContentIndicator:(_Bool)arg1;
- (_Bool)isViewDescendantOfPlaybackControlsSubview:(id)arg1;
- (void)addPlayerLayerAndContentOverlayContainerViewIfNeeded;
@property(readonly, nonatomic) UIView *iAdPreRollViewIfLoaded;
@property(readonly, nonatomic) UIView *iAdPreRollView; // @synthesize iAdPreRollView=_iAdPreRollView;
@property(readonly, nonatomic) UIView *playerLayerAndContentOverlayContainerView;
@property(readonly, nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer;
@property(readonly, nonatomic) UIImageView *audioOnlyIndicatorViewIfLoaded;
@property(readonly, nonatomic) UIImageView *audioOnlyIndicatorView; // @synthesize audioOnlyIndicatorView=_audioOnlyIndicatorView;
@property(readonly, nonatomic) UIImageView *unsupportedContentIndicatorViewIfLoaded;
@property(readonly, nonatomic) UIImageView *unsupportedContentIndicatorView; // @synthesize unsupportedContentIndicatorView=_unsupportedContentIndicatorView;
@property(readonly, nonatomic) AVExternalPlaybackIndicatorView *externalPlaybackIndicatorViewIfLoaded;
@property(readonly, nonatomic) AVExternalPlaybackIndicatorView *externalPlaybackIndicatorView; // @synthesize externalPlaybackIndicatorView=_externalPlaybackIndicatorView;
@property(readonly, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property(readonly, nonatomic) NSString *captureGroupName; // @synthesize captureGroupName=_captureGroupName;
@property(copy, nonatomic) NSString *automaticVideoGravity; // @synthesize automaticVideoGravity=_automaticVideoGravity;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 playerLayerView:(id)arg2 targetVideoGravities:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

