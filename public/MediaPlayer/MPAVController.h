//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioSessionDelegateMediaPlayerOnly.h"
#import "ICEnvironmentMonitorObserver.h"
#import "MPAVPlaylistManagerDelegate.h"
#import "MPAVRoutingControllerDelegate.h"

@class AVAudioSessionMediaPlayerOnly, AVPictureInPictureController, AVPlayerLayer, MPAVItem, MPAVPlaylistManager, MPAVPolicyEnforcer, MPAVQueueCoordinator, MPAVRoute, MPAVRoutingController, MPMediaItem, MPMediaQuery, MPQueueFeeder, MPQueuePlayer, MPVideoView, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSNotification, NSObject<OS_dispatch_source>, NSString;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, ICEnvironmentMonitorObserver, MPAVPlaylistManagerDelegate, MPAVRoutingControllerDelegate>
{
    _Bool _currentItemStartedAsCloudItem;
    _Bool _currentItemHasFinishedDownloading;
    _Bool _didResolveError;
    _Bool _disableAirPlayMirroringDuringPlayback;
    NSDate *_itemDidChangeDate;
    _Bool _shouldPreventStateChangesForRateChange;
    unsigned long long _stallBackgroundTaskIdentifier;
    _Bool _usesAudioOnlyModeForExternalPlayback;
    MPAVPlaylistManager *_playlistManager;
    long long _playbackMode;
    _Bool _valid;
    _Bool _allowsItemErrorResolution;
    MPAVRoutingController *_routingController;
    MPAVRoute *_pickedRoute;
    AVPlayerLayer *_videoLayer;
    unsigned long long _videoLayerUsageCount;
    MPVideoView *_videoView;
    id _periodicTimeObserverToken;
    unsigned long long _tickTimerEnabled;
    struct __CFRunLoopTimer *_tickTimer;
    double _tickInterval;
    struct __CFRunLoopTimer *_currentItemBookkeepingTimer;
    long long _indexChangeDirection;
    unsigned long long _itemIndexAtDeath;
    long long _lastDisconnectReason;
    double _lastKnownTimeBeforeDeath;
    double _lastPlaybackIndexChangeTime;
    double _lastSetTime;
    double _lastSetTimeChangeTime;
    unsigned int _hasDelayedCurrentTimeToSet:1;
    unsigned int _forceDelayedCurrentTimeToSet:1;
    double _delayedCurrentTimeToSet;
    CDStruct_1b6d18a9 _pendingCurrentTime;
    long long _delayedCurrentTimeOptions;
    unsigned long long _lastSetTimeMarker;
    double _temporaryChapterTime;
    unsigned int _autoPlayWhenLikelyToKeepUp:1;
    unsigned int _autoplayDisabledForCurrentItem:1;
    _Bool _autoPlayBackgroundTaskAssertionEnabled;
    long long _autoPlayBackgroundTaskCount;
    _Bool _appHasBeenSuspended;
    unsigned long long _autoPlayBackgroundTaskIdentifier;
    NSObject<OS_dispatch_source> *_autoPlayTimeoutSource;
    double _nextFadeOutDuration;
    _Bool _hasPendingRate;
    _Bool _hasSentTracePlaybackStartDidFinish;
    MPAVItem *_pendingRateItem;
    float _pendingRate;
    _Bool _pendingChangeForScanning;
    id _boundaryTimeObserver;
    NSArray *_boundaryTimes;
    unsigned long long _boundaryTimeIndexLastPosted;
    NSMutableArray *_observerInfos;
    NSMapTable *_observerInfoToCoreMediaObserver;
    float _rateBeforeSeek;
    float _inflightSeekRate;
    unsigned long long _scanLevel;
    long long _scanDirection;
    long long _resetRateAfterSeekingUpdateDisabled;
    long long _seeklessState;
    unsigned int _isSeekingOrScrubbing:1;
    unsigned int _resetRateAfterSeeking:1;
    unsigned int _activeRewindHoldingAtStart:1;
    double _lastSeekableEnd;
    double _whenSawSeekableEnd;
    double _maxSeekableFwd;
    double _seekFwdSlop;
    double _lastSeekableStart;
    double _whenSawSeekableStart;
    double _maxSeekableRev;
    double _seekRevSlop;
    unsigned int _canSeekRev:1;
    unsigned int _canSeekFwd:1;
    unsigned int _alwaysPlayWheneverPossible:1;
    unsigned int _stopAtEnd:1;
    unsigned int _didReachEnd:1;
    unsigned int _pausedDuringInterruption:1;
    unsigned int _resumePlaybackWhenActive:1;
    unsigned int _useApplicationAudioSession:1;
    unsigned int _playInBackgroundUserDefaultEnabled:1;
    unsigned int _canPlayFastForward:1;
    unsigned int _canPlayFastReverse:1;
    unsigned int _shouldAutoclearDisplayOverride:1;
    long long _state;
    long long _displayOverridePlaybackState;
    unsigned long long _bufferingState;
    NSNotification *_delayedPlaybackStateNotification;
    NSObject<OS_dispatch_source> *_stallTimerSource;
    _Bool _hasProvidedAudibleLikelyToKeepUp;
    _Bool _hasProvidedAudiblePlay;
    double _itemInitialBookmarkTime;
    float _rateBeforeResignActive;
    long long _ubiquitousBookkeepingDisabledCount;
    double _secondsSinceUbiquitousCheckpoint;
    Class _videoViewClass;
    double _lastInterruptionEnd;
    _Bool _shouldEnforceHDCP;
    NSMutableSet *_clientsWantingExternalPlayback;
    long long _currentItemRevisionID;
    unsigned long long _numberOfErrorsSinceLastPlay;
    _Bool _shouldResetQueueWhenReachingEnd;
    _Bool _muted;
    _Bool _limitsBandwidthForCellularAccess;
    _Bool _useAirPlayMusicMode;
    _Bool _managesAirPlayBehaviors;
    _Bool _wantsPictureInPicture;
    _Bool _automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
    MPAVPolicyEnforcer *_policyEnforcer;
    MPQueuePlayer *_queuePlayer;
    MPAVQueueCoordinator *_queueCoordinator;
    NSString *_identifier;
    AVPictureInPictureController *_pictureInPictureController;
}

+ (_Bool)automaticallyNotifiesObserversOfPlaylistManager;
+ (_Bool)prefersApplicationAudioSession;
+ (Class)playlistManagerClass;
+ (id)_playerKeysToObserve;
+ (id)_itemKeysToObserve;
+ (_Bool)outputSupportsAC3;
+ (id)keyPathsForValuesAffectingCurrentItem;
+ (_Bool)isNetworkSupportedPath:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool shouldEnforceHDCP; // @synthesize shouldEnforceHDCP=_shouldEnforceHDCP;
@property(nonatomic) _Bool automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds; // @synthesize automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds=_automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
@property(readonly, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property(nonatomic) _Bool wantsPictureInPicture; // @synthesize wantsPictureInPicture=_wantsPictureInPicture;
@property(nonatomic) _Bool managesAirPlayBehaviors; // @synthesize managesAirPlayBehaviors=_managesAirPlayBehaviors;
@property(nonatomic) _Bool useAirPlayMusicMode; // @synthesize useAirPlayMusicMode=_useAirPlayMusicMode;
@property(retain, nonatomic, getter=_playlistManager) MPAVPlaylistManager *playlistManager; // @synthesize playlistManager=_playlistManager;
@property(nonatomic) _Bool limitsBandwidthForCellularAccess; // @synthesize limitsBandwidthForCellularAccess=_limitsBandwidthForCellularAccess;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double nextFadeOutDuration; // @synthesize nextFadeOutDuration=_nextFadeOutDuration;
@property(retain, nonatomic) MPAVQueueCoordinator *queueCoordinator; // @synthesize queueCoordinator=_queueCoordinator;
@property(retain, nonatomic) MPQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property(retain, nonatomic) MPAVPolicyEnforcer *policyEnforcer; // @synthesize policyEnforcer=_policyEnforcer;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(readonly, nonatomic) unsigned long long bufferingState; // @synthesize bufferingState=_bufferingState;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool shouldResetQueueWhenReachingEnd; // @synthesize shouldResetQueueWhenReachingEnd=_shouldResetQueueWhenReachingEnd;
@property(nonatomic) long long displayOverridePlaybackState; // @synthesize displayOverridePlaybackState=_displayOverridePlaybackState;
- (void).cxx_destruct;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_verifyShouldContinuePlayback;
- (void)_updateCurrentItemDurationSnapshotWithPlayerTime:(CDStruct_1b6d18a9)arg1;
- (void)_resumePlaybackIfNecessary;
- (void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(_Bool)arg1;
- (void)_pausePlaybackIfNecessary;
- (void)_handlePlaybackErrorResolutionType:(long long)arg1 forItem:(id)arg2 playbackError:(id)arg3 resolutionError:(id)arg4;
- (_Bool)_canPlayItem:(id)arg1;
- (void)_playbackFailedWithError:(id)arg1 canResolve:(_Bool)arg2;
- (id)_pickedRoute;
- (void)_resumeTickTimer;
- (void)_pauseTickTimer;
- (id)_extractImageFromMetadata:(id)arg1;
- (void)_clearSeekingIntervalsForStreaming;
- (void)_updateSeekingIntervalsForStreaming;
- (void)_delayedSetCurrentTime;
- (void)_updateTypeForItem:(id)arg1;
- (void)_updateScanningRate;
- (void)_updatePlaybackModeForItem:(id)arg1;
- (void)setRateForScanning:(float)arg1;
- (void)_updateProgress:(struct __CFRunLoopTimer *)arg1;
- (void)_updateCurrentItemHasFinishedDownloading;
- (void)_unregisterForAVItemNotifications:(id)arg1;
- (void)_setValid:(_Bool)arg1;
- (void)_setVideoLayersEnabledForCurrentPlayerItemIfNeeded:(_Bool)arg1;
- (void)_setVideoLayerAttachedToPlayer:(_Bool)arg1 force:(_Bool)arg2 pauseIfNecessary:(_Bool)arg3;
- (_Bool)_isVideoLayerAttachedToPlayer;
- (void)_setState:(long long)arg1;
- (void)_setAllowsItemErrorResolution:(_Bool)arg1;
- (void)_clearResetRateAfterSeeking;
- (void)_configureUpdateCurrentItemBookkeepingTimer;
- (void)_cancelUpdateCurrentItemBookkeepingTimer;
- (void)_resumeBookkeepingTimer;
- (void)_pauseBookkeepingTimer;
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;
@property(readonly, nonatomic) long long _displayPlaybackState;
- (void)setAutoclearingDisplayOverridePlaybackState:(long long)arg1;
- (void)autoclearDisplayOverride;
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(long long)arg1 newState:(long long)arg2 delayable:(_Bool)arg3;
- (void)_delayedPostPlaybackStateChangedNotification;
- (void)_setActionAtEndAttributeForState:(long long)arg1;
- (void)_setBufferingState:(unsigned long long)arg1;
- (_Bool)_hasEnoughDataToPlay;
- (void)_attemptAutoPlay;
- (void)_setAutoPlayBackgroundTaskAssertionEnabled:(_Bool)arg1;
- (void)_resetInternalState;
- (void)_registerForAVItemNotifications:(id)arg1;
- (void)_reloadTimeMarkerObservationsForItem:(id)arg1;
- (void)_checkForBoundaryTimeCrossing;
- (unsigned long long)_currentIndexInBoundaryCMTimes:(id)arg1;
- (id)embeddedDataTimesForItem:(id)arg1;
- (void)_prepareToPlayItem:(id)arg1;
- (void)_endSeekAndChangeRate:(_Bool)arg1;
- (_Bool)_isVideosOrTVApp;
- (void)_unregisterForPlaylistManager:(id)arg1;
- (void)_unregisterForPlayer:(id)arg1;
- (void)_registerForPlaylistManager:(id)arg1;
- (_Bool)_shouldProvideAudiblePlaybackPerformance;
- (double)_currentTimeWithPreloadedPlayerTime:(_Bool)arg1 value:(CDStruct_1b6d18a9)arg2;
- (void)_configureAVPlaylistManager;
- (void)_clearVideoLayer:(_Bool)arg1;
- (_Bool)_changeChapterTimeMarkerIndexBy:(long long)arg1;
- (void)_cancelStallTimer;
@property(readonly, nonatomic) MPQueueFeeder *feeder;
- (void)_applyCellularAccessSettings;
- (void)_applyAirPlayMusicModeForItem:(id)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
- (void)_applyAirPlayMusicMode;
- (void)_verifyDisplayProtection;
- (void)_delayedUpdateTimeMarker;
- (void)_delayedUpdateScanningRate;
- (void)_delayedPlaybackIndexChange;
- (void)notifyAVPlayerItemDidChange:(id)arg1;
- (void)notifyAVPlayerItemWillChange:(id)arg1;
- (void)_audioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_readyForDisplayDidChange:(id)arg1;
- (void)_durationDidChange:(id)arg1;
- (void)_tracksDidChange:(id)arg1;
- (void)_timedMetadataDidChange:(id)arg1;
- (void)_canPlayFastReverseDidChange:(id)arg1;
- (void)_canPlayFastForwardDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_delegateAuthorizationForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_contentsChanged;
- (void)_networkChangedNotification:(id)arg1;
- (void)_streamLimitExceeded:(long long)arg1;
- (void)airPlayFailedRentalDownloadRequired;
- (void)airPlayVideoEnded;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_timeHasJumpedNotification:(id)arg1;
- (void)_streamUnlikelyToKeepUp:(id)arg1;
- (void)_streamRanDry:(id)arg1;
- (void)_streamLikelyToKeepUp:(id)arg1;
- (void)_streamBufferFull:(id)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_disconnectAVPlayerWithReason:(long long)arg1;
- (void)_connectAVPlayer;
- (void)_configureAudioSession;
- (void)_rateDidChange:(id)arg1;
- (void)_updateCurrentItemBookkeepingForTimerCallback;
- (void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(_Bool)arg1;
@property(nonatomic) _Bool ubiquitousBookkeepingEnabled;
- (void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned long long)arg3;
- (void)beginInterruption;
- (void)_itemWillChange:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemFailedToPlayToEnd:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (id)_playerFailedToQueueNotification:(id)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemSecureKeyDeliverDidFinishNotification:(id)arg1;
- (void)_itemPlaybackModeAvailableNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)_itemTimeMarkersAvailableNotification:(id)arg1;
- (void)_updateStateForPlaybackPrevention;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1;
- (void)_itemHasFinishedDownloadingDidChangeNotification:(id)arg1;
- (void)_itemBookmarkTimeDidChangeNotification:(id)arg1;
- (void)_itemAssetIsLoadedNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1;
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1;
- (void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)playlistManager:(id)arg1 queueCoordinator:(id)arg2 willInsertItem:(id)arg3 afterItem:(id)arg4;
- (void)playlistManager:(id)arg1 didFailLoadingAllItemsForQueueFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 didTransitionToPlaylistFeeder:(id)arg2;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)skipToSeekableEnd;
- (void)skipToSeekableStart;
- (_Bool)canSkipToSeekableEnd;
- (_Bool)canPlayFastReverse;
- (_Bool)canSeekForwards;
- (_Bool)canSeekBackwards;
- (_Bool)isLiveStreaming;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (double)timeOfPlayableEnd;
- (double)timeOfPlayableStart;
@property(readonly, nonatomic) double playableDurationOfCurrentItemIfAvailable;
@property(readonly, nonatomic) double durationOfCurrentItemIfAvailable;
@property(readonly, nonatomic) _Bool showPlaybackStateOverlaysOnTVOut;
- (_Bool)shouldHaveNoActionAtEndForState:(long long)arg1;
- (void)finalizeBookkeepingNow;
- (void)updateBookkeepingNow;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadWithPlaybackContext:(id)arg1;
@property(readonly, nonatomic) MPVideoView *videoView;
@property(readonly, nonatomic) AVPlayerLayer *videoLayer;
@property(nonatomic, getter=destinationIsTVOut, setter=setDestinationIsTVOut:) _Bool destinationIsTVOut;
- (void)_setLastSetTime:(double)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
- (void)setUsesAudioOnlyModeForExternalPlayback:(_Bool)arg1;
- (void)setCurrentTime:(double)arg1 options:(long long)arg2;
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity;
- (void)setActive:(_Bool)arg1;
@property(readonly, nonatomic) AVAudioSessionMediaPlayerOnly *_playerAVAudioSession;
- (id)preferredLanguages;
@property(readonly, nonatomic) long long externalPlaybackType;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (void)endUsingVideoLayer;
- (void)beginUsingVideoLayer;
@property(readonly, nonatomic) MPQueuePlayer *avPlayer;
- (void)applyShuffleSettings;
- (void)applyRepeatSettings;
- (void)enableAutoplayForCurrentItem;
- (void)disableAutoplayForCurrentItem;
@property(readonly, nonatomic, getter=isCurrentItemReady) _Bool currentItemReady;
@property(nonatomic) _Bool useApplicationAudioSession;
@property(readonly, nonatomic) MPAVRoutingController *routingController;
@property(nonatomic) _Bool stopAtEnd;
@property(nonatomic) float volume;
@property(readonly, nonatomic) _Bool hasVolumeControl;
@property(nonatomic) long long shuffleType;
@property(nonatomic) long long repeatType;
- (_Bool)_setRate:(float)arg1 forScanning:(_Bool)arg2 withItem:(id)arg3;
- (_Bool)_setRate:(float)arg1 forScanning:(_Bool)arg2;
- (_Bool)setRate:(float)arg1;
- (void)setDisableAirPlayMirroringDuringPlayback:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
@property(nonatomic) _Bool disableAirPlayMirroringDuringPlayback;
- (void)_sendTracePlaybackStartDidFinishIfNeededForItem:(id)arg1;
@property(readonly, nonatomic) float rate;
@property(nonatomic) _Bool alwaysPlayWheneverPossible;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) _Bool shouldDisplayAsPlaying;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
- (long long)_seeklessStateForState:(long long)arg1;
- (_Bool)_showsPlayingWhenInState:(long long)arg1;
@property(readonly, nonatomic) MPMediaQuery *currentMediaQuery;
@property(readonly, nonatomic) MPMediaItem *currentMediaItem;
@property(readonly, nonatomic) MPAVItem *currentItem;
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(_Bool)arg2 shouldIgnorePlaybackQueueTransactions:(_Bool)arg3;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(_Bool)arg2;
- (_Bool)allowsExternalPlayback;
@property(readonly, nonatomic) long long activeShuffleType;
@property(readonly, nonatomic) long long activeRepeatType;
- (void)tickTimerFired;
- (_Bool)isTickTimerEnabled;
- (void)endTickTimer;
- (void)beginTickTimerWithInterval:(double)arg1;
- (_Bool)forceRestartPlaybackIfNecessary;
- (void)togglePlaybackWithOptions:(unsigned long long)arg1;
- (void)togglePlayback;
@property(nonatomic) double currentTime;
- (void)playItemAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)_playWithOptions:(unsigned long long)arg1 allowsEnablingAutoPlay:(_Bool)arg2;
- (void)playWithOptions:(unsigned long long)arg1;
- (void)play;
- (void)_pauseWithFadeout:(float)arg1 forScanning:(_Bool)arg2;
- (void)pause;
- (void)pauseWithFadeout:(float)arg1;
- (void)endPlayback;
- (double)currentTimeForBookmarking;
- (_Bool)isSeekingOrScrubbing;
- (void)endSeek;
- (_Bool)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(_Bool)arg3 allowSkippingUnskippableContent:(_Bool)arg4 error:(id *)arg5;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(_Bool)arg3 allowSkippingUnskippableContent:(_Bool)arg4;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(_Bool)arg3;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2;
- (void)changePlaybackIndexBy:(long long)arg1;
- (void)setPlaybackIndex:(long long)arg1;
- (void)_updateLastSetTimeForCurrentItemIfNeeded;
- (void)setPlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (_Bool)_hasValidPlayerTime;
- (void)_clearLastSetTimeIfPlayerTimeIsValid;
- (void)beginSeek:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

