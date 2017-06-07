//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

#import <MediaPlaybackCore/AVAssetResourceLoaderDelegate-Protocol.h>
#import <MediaPlaybackCore/AVPlayerItemMetadataOutputPushDelegate-Protocol.h>
#import <MediaPlaybackCore/MPMusicSubscriptionLeasePlaybackParticipating-Protocol.h>
#import <MediaPlaybackCore/MPRTCReportingItemSessionCreating-Protocol.h>

@class ICMusicSubscriptionLeaseSession, ICStoreRequestContext, MPCAVItemNetworkPolicyHandler, MPCModelGenericAVItemTimedMetadataRequest, MPCModelGenericAVItemTimedMetadataResponse, MPCPlaybackRequestEnvironment, MPMediaLibrary, MPModelGenericObject, MPPropertySet, NSArray, NSData, NSNumber, NSObject, NSString, NSURL;
@protocol MPCModelPlaybackAssetCacheProviding, MPCReportingIdentityPropertiesLoading, OS_dispatch_queue;

@interface MPCModelGenericAVItem : MPAVItem <AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, MPMusicSubscriptionLeasePlaybackParticipating, MPRTCReportingItemSessionCreating>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _allowsAirPlayFromCloud;
    ICMusicSubscriptionLeaseSession *_subscriptionLeaseSession;
    _Bool _shouldAutomaticallyRefreshSubscriptionLease;
    _Bool _shouldUseSubscriptionLease;
    id _suzeLeaseSessionToken;
    CDUnknownBlockType _firstBecomeActivePlayerItemBlock;
    NSArray *_currentGlobalTimedMetadataGroups;
    MPModelGenericObject *_flattenedGenericObject;
    MPModelGenericObject *_flattenedMetadataGenericObject;
    MPModelGenericObject *_metadataGenericObject;
    MPPropertySet *_itemProperties;
    id <MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
    MPCModelGenericAVItemTimedMetadataRequest *_timedMetadataRequest;
    MPCModelGenericAVItemTimedMetadataResponse *_timedMetadataResponse;
    _Bool _isHLSAsset;
    _Bool _isiTunesStoreStream;
    ICStoreRequestContext *_storeRequestContext;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_streamingKeyServerURL;
    id _rtcReportingParentHierarchyToken;
    NSString *_rtcReportingServiceIdentifier;
    MPCAVItemNetworkPolicyHandler *_networkPolicyHandler;
    _Bool supportsRadioTrackActions;
    _Bool _radioPlayback;
    long long _leasePlaybackPreventionState;
    id <MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
    NSString *_assetSourceStoreFrontID;
    long long _equivalencySourceAdamID;
    MPModelGenericObject *_genericObject;
    NSData *_jingleTimedMetadata;
    MPMediaLibrary *_mediaLibrary;
    NSNumber *_privateListeningEnabled;
    NSNumber *_siriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
}

@property(readonly, copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
@property(nonatomic, getter=isRadioPlayback) _Bool radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property(copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // @synthesize siriInitiated=_siriInitiated;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @synthesize privateListeningEnabled=_privateListeningEnabled;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(readonly, copy, nonatomic) NSData *jingleTimedMetadata; // @synthesize jingleTimedMetadata=_jingleTimedMetadata;
@property(retain, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property(copy, nonatomic) NSString *assetSourceStoreFrontID; // @synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID;
@property(retain, nonatomic) id <MPCModelPlaybackAssetCacheProviding> assetCacheProvider; // @synthesize assetCacheProvider=_assetCacheProvider;
@property(nonatomic) _Bool supportsRadioTrackActions; // @synthesize supportsRadioTrackActions;
@property(readonly, nonatomic) long long leasePlaybackPreventionState; // @synthesize leasePlaybackPreventionState=_leasePlaybackPreventionState;
- (void).cxx_destruct;
- (void)_updatePreventionStatusWithLeaseSession:(id)arg1;
- (void)_updateJingleTimedMetadata;
- (void)_updateAutomaticSubscriptionLeaseRefresh;
- (id)_storeRequestContext;
- (id)_rtcReportingServiceIdentifierWithAssetURL:(id)arg1;
- (id)_radioStation;
- (void)_postInvalidationNotifications;
- (id)_modelPlaybackPosition;
- (id)_householdID;
- (void)_applyLoudnessInfo;
- (void)_timedMetadataResponseDidInvalidateNotification:(id)arg1;
- (void)_suzeLeaseSessionRenewDidFailNotification:(id)arg1;
- (void)_subscriptionLeaseStatusDidChangeNotification:(id)arg1;
- (void)_reloadTimedMetadataRequest;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
@property(readonly, nonatomic) long long rtcReportingAssetType;
@property(readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier;
@property(readonly, nonatomic) id rtcReportingParentHierarchyToken;
- (id)mpcReporting_siriInitiated;
- (id)mpcReporting_privateListeningEnabled;
- (_Bool)mpcReporting_shouldReportPlayEventsToStore;
- (_Bool)mpcReporting_shouldUseRelativeTimePositions;
- (id)mpcReporting_requestingBundleVersion;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_jingleTimedMetadata;
- (id)mpcReporting_identityPropertiesLoader;
- (id)mpcReporting_householdID;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (void)_willResignActivePlayerItem;
- (void)_willBecomeActivePlayerItem;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (_Bool)shouldPreventPlayback;
- (void)resolvePlaybackError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)allowsExternalPlayback;
- (_Bool)allowsAirPlayFromCloud;
- (float)userRating;
- (_Bool)useEmbeddedChapterData;
- (long long)type;
- (_Bool)hasStoreLyrics;
- (id)libraryLyrics;
- (_Bool)supportsLikedState;
- (long long)storeSubscriptionAdamID;
- (long long)storeItemInt64ID;
- (id)stationStringID;
- (id)stationName;
- (id)stationHash;
- (long long)stationID;
- (_Bool)stationAllowsItemLiking;
@property(readonly, nonatomic) _Bool shouldReportPlayEventsToStore;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)reevaluateType;
- (void)prepareForRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)prefersSeekOverSkip;
- (_Bool)shouldShowComposer;
- (unsigned long long)composerPersistentID;
- (unsigned long long)genrePersistentID;
- (unsigned long long)artistPersistentID;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (unsigned long long)persistentID;
- (unsigned long long)mediaType;
- (id)modelGenericObject;
- (id)mediaItem;
- (id)mainTitle;
- (void)loadAssetAndPlayerItem;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;
- (_Bool)isStreamable;
- (_Bool)isRadioItem;
- (_Bool)isLikedStateEnabled;
- (_Bool)isExplicitTrack;
- (_Bool)isAssetURLValid;
- (_Bool)isAlwaysLive;
- (id)genre;
- (id)externalContentIdentifier;
- (double)durationFromExternalMetadata;
- (id)copyrightText;
- (id)composer;
- (id)artist;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(_Bool)arg1;
- (_Bool)allowsEQ;
- (long long)artistStoreID;
- (long long)albumStoreID;
- (id)albumArtist;
- (id)album;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithGenericObject:(id)arg1 itemProperties:(id)arg2 playbackRequestEnvironment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
