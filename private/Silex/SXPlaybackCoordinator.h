//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoMetadataProviding.h"

@class NSArray, NSError, NSHashTable, NSObject<SXVideoPlaybackHost>, NSString, SVKeyValueObserver, SXAVPlayer;

@interface SXPlaybackCoordinator : NSObject <SVVideoMetadataProviding>
{
    _Bool _playbackLikelyToKeepUp;
    _Bool _playbackBufferFull;
    _Bool _muted;
    _Bool _playbackRequested;
    _Bool _initiatedPlayback;
    id <SXVideoProviding> _video;
    unsigned long long _state;
    NSObject<SXVideoPlaybackHost> *_host;
    NSError *_error;
    NSHashTable *_observers;
    SXAVPlayer *_player;
    CDUnknownBlockType _cancelHandler;
    SVKeyValueObserver *_playerItemPresentationSizeObserver;
    SVKeyValueObserver *_readyForDisplayObserver;
    id <SXAVPlayerFactory> _playerFactory;
    SVKeyValueObserver *_muteStateObserver;
    SVKeyValueObserver *_playbackLikelyToKeepUpObserver;
    SVKeyValueObserver *_playbackBufferFullObserver;
    struct CGSize _dimensions;
}

@property(retain, nonatomic) SVKeyValueObserver *playbackBufferFullObserver; // @synthesize playbackBufferFullObserver=_playbackBufferFullObserver;
@property(retain, nonatomic) SVKeyValueObserver *playbackLikelyToKeepUpObserver; // @synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver;
@property(retain, nonatomic) SVKeyValueObserver *muteStateObserver; // @synthesize muteStateObserver=_muteStateObserver;
@property(readonly, nonatomic) id <SXAVPlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(retain, nonatomic) SVKeyValueObserver *readyForDisplayObserver; // @synthesize readyForDisplayObserver=_readyForDisplayObserver;
@property(retain, nonatomic) SVKeyValueObserver *playerItemPresentationSizeObserver; // @synthesize playerItemPresentationSizeObserver=_playerItemPresentationSizeObserver;
@property(nonatomic) _Bool initiatedPlayback; // @synthesize initiatedPlayback=_initiatedPlayback;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) SXAVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool playbackRequested; // @synthesize playbackRequested=_playbackRequested;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak NSObject<SXVideoPlaybackHost> *host; // @synthesize host=_host;
@property(nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) id <SXVideoProviding> video; // @synthesize video=_video;
@property(readonly, nonatomic) _Bool playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property(readonly, nonatomic) _Bool playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
- (void).cxx_destruct;
- (void)removePlayerItemPresentationSizeObserver;
- (void)addPlayerItemPresentationSizeObserver;
- (void)muteStateChanged;
- (void)addMuteStateObserver;
- (void)playbackLikelyToKeepUpStateChanged;
- (void)addPlaybackLikelyToKeepUpObserver;
- (void)playbackBufferFullStateChanged;
- (void)addPlaybackBuferObserver;
- (void)stateChanged;
- (void)loadedTimeRangesChanged;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (void)setupPlayerWithURL:(id)arg1;
- (void)loadVideoIfNeeded;
- (void)load;
@property(readonly, nonatomic) double loadingProgress;
@property(readonly, nonatomic) double volume;
@property(readonly, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) double timePlayed;
@property(readonly, nonatomic) double time;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double framerate;
- (void)seekToTime:(double)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removePlaybackObserver:(id)arg1;
- (void)addPlaybackObserver:(id)arg1;
- (void)pause;
- (void)play;
- (id)initWithVideo:(id)arg1 playerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

