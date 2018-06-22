//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingIrisPlayerChange : PUViewModelChange
{
    _Bool _livePhotoPlaybackAllowedDidChange;
    _Bool _livePhotoLoadingAllowedDidChange;
    _Bool _livePhotoDidChange;
    _Bool _playerDidChange;
    _Bool _playbackStateDidChange;
    _Bool _hasPendingVitalityHintDidChange;
    _Bool _activatedDidChange;
    _Bool _scrubbingPhotoTimeDidChange;
    _Bool _currentlyDisplayedTimesDidChange;
    _Bool _playingDidChange;
    _Bool _isLivePhotoLoadingAllowedDidChange;
    _Bool _isLivePhotoPlaybackAllowedDidChange;
}

@property(nonatomic, setter=_setLivePhotoPlaybackAllowedDidChange:) _Bool isLivePhotoPlaybackAllowedDidChange; // @synthesize isLivePhotoPlaybackAllowedDidChange=_isLivePhotoPlaybackAllowedDidChange;
@property(nonatomic, setter=_setLivePhotoLoadingAllowedDidChange:) _Bool isLivePhotoLoadingAllowedDidChange; // @synthesize isLivePhotoLoadingAllowedDidChange=_isLivePhotoLoadingAllowedDidChange;
@property(nonatomic, setter=_setPlayingDidChange:) _Bool playingDidChange; // @synthesize playingDidChange=_playingDidChange;
@property(nonatomic, setter=_setCurrentlyDisplayedTimesDidChange:) _Bool currentlyDisplayedTimesDidChange; // @synthesize currentlyDisplayedTimesDidChange=_currentlyDisplayedTimesDidChange;
@property(nonatomic, setter=_setScrubbingPhotoTimeDidChange:) _Bool scrubbingPhotoTimeDidChange; // @synthesize scrubbingPhotoTimeDidChange=_scrubbingPhotoTimeDidChange;
@property(nonatomic, setter=_setActivatedDidChange:) _Bool activatedDidChange; // @synthesize activatedDidChange=_activatedDidChange;
@property(nonatomic, setter=_setHasPendingVitalityHintDidChange:) _Bool hasPendingVitalityHintDidChange; // @synthesize hasPendingVitalityHintDidChange=_hasPendingVitalityHintDidChange;
@property(nonatomic, setter=_setPlaybackStateDidChange:) _Bool playbackStateDidChange; // @synthesize playbackStateDidChange=_playbackStateDidChange;
@property(nonatomic, setter=_setPlayerDidChange:) _Bool playerDidChange; // @synthesize playerDidChange=_playerDidChange;
@property(nonatomic, setter=_setLivePhotoDidChange:) _Bool livePhotoDidChange; // @synthesize livePhotoDidChange=_livePhotoDidChange;
@property(readonly, nonatomic) _Bool livePhotoLoadingAllowedDidChange; // @synthesize livePhotoLoadingAllowedDidChange=_livePhotoLoadingAllowedDidChange;
@property(readonly, nonatomic) _Bool livePhotoPlaybackAllowedDidChange; // @synthesize livePhotoPlaybackAllowedDidChange=_livePhotoPlaybackAllowedDidChange;
- (_Bool)hasChanges;

@end

