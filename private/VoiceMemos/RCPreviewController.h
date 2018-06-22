//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCAVPlayerDelegate.h"

@class AVPlayerItem, NSHashTable, NSMutableDictionary, NSString, NSURL, NSUUID, RCAVPlayer, RCAVState, RCAudioSessionRoutingAssertion;

@interface RCPreviewController : NSObject <RCAVPlayerDelegate>
{
    _Bool _resetUseVoiceMemoSettingsValue;
    _Bool _voiceMemoSettingEnabledNeedsReset;
    _Bool _isPreparingForPreview;
    NSURL *_lastPlayedAssetReferenceURL;
    _Bool _logNextRouteUsageStatisticForced;
    NSString *_activePlaybackContextName;
    NSString *_lastRouteKeyForRouteUsageLog;
    double _currentTimeTarget;
    double _currentRateTarget;
    double _AVPlayerItemCachedDuration;
    RCAudioSessionRoutingAssertion *_activePreviewRouteAssertion;
    RCAudioSessionRoutingAssertion *_preparingToPreviewRouteAssertion;
    NSUUID *_preparingToPreviewRouteAssertionSessionUUID;
    NSHashTable *_weakObservers;
    NSMutableDictionary *_monitoredDispatchSourcesByURL;
    _Bool _useVoiceMemoSettings;
    _Bool _didJumpTime;
    AVPlayerItem *_AVPlayerItem;
    double _currentTimeDelegateUpdateRate;
    RCAVPlayer *_AVPlayer;
    RCAVState *_AVState;
}

@property(nonatomic) _Bool didJumpTime; // @synthesize didJumpTime=_didJumpTime;
@property(retain, nonatomic) RCAVState *AVState; // @synthesize AVState=_AVState;
@property(readonly, nonatomic) RCAVPlayer *AVPlayer; // @synthesize AVPlayer=_AVPlayer;
@property(nonatomic) _Bool useVoiceMemoSettings; // @synthesize useVoiceMemoSettings=_useVoiceMemoSettings;
@property(nonatomic) double currentTimeDelegateUpdateRate; // @synthesize currentTimeDelegateUpdateRate=_currentTimeDelegateUpdateRate;
@property(retain, nonatomic) AVPlayerItem *AVPlayerItem; // @synthesize AVPlayerItem=_AVPlayerItem;
- (void).cxx_destruct;
- (void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1;
- (void)_audioRouteControllerWillDeactivateAudioSessionNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_postDelegateJumpTimeUpdate;
- (void)_postDelegateCurrentTimeUpdate;
- (void)_postDelegateDidBeginPlaybackWithRate:(float)arg1;
- (void)_playbackUsageStatisticsPrepareForPlaybackContextName:(id)arg1;
- (void)_playbackUsageStatisticsPrepareForStartingNewPlayback;
- (void)_playbackUsageStatisticsIncrementPlaybackIfNecessary;
- (_Bool)_monitorUnderlyingAssetPathInPlayerItem:(id)arg1 assetDisappearedBlock:(CDUnknownBlockType)arg2;
- (void)_stopMonitoringUnderylingAssetPath;
- (void)_handleUnderlyingAssetDisappeared;
- (void)_handleDidStopPlaybackWithError:(id)arg1;
- (void)_performWithObserversBlock:(CDUnknownBlockType)arg1;
- (id)_AVPlayerIfActive;
- (id)_recreateAVPlayer;
- (void)_readyToPlay_playPlayer:(id)arg1;
- (void)_setPreparingToPlay:(_Bool)arg1 notifyObservers:(_Bool)arg2;
- (void)handlePreviewEnded;
- (void)playerCurrentTimeDidChange:(id)arg1;
- (void)playerCurrentRateDidChange:(id)arg1;
- (void)_playerCurrentRateDidChangeToRate:(float)arg1 hadPlaybackItem:(_Bool)arg2;
- (void)playerCurrentItemDidBecomeReadyToPlay:(id)arg1;
- (void)playerDidBecomeInvalid:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) float rate;
- (void)setRate:(float)arg1;
@property(nonatomic) double currentTime;
@property(nonatomic) CDStruct_73a5d3ca playableTimeRange;
- (void)stop;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)pause;
- (void)playWithTimeRange:(CDStruct_73a5d3ca)arg1 startTime:(double)arg2 playbackContextName:(id)arg3;
- (void)_endActivePreviewRouteAssertion;
- (void)_beginActivePreviewRouteAssertion;
- (void)_beginPreparingToPreviewRouteAssertion;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

