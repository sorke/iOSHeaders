//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVPlayerItemInternal, NSArray, NSDate, NSError, NSString;

@interface AVPlayerItem : NSObject <NSCopying>
{
    AVPlayerItemInternal *_playerItem;
}

+ (_Bool)automaticallyNotifiesObserversOfTracks;
+ (_Bool)automaticallyNotifiesObserversOfPresentationSize;
+ (_Bool)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (_Bool)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (_Bool)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (_Bool)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (_Bool)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (_Bool)automaticallyNotifiesObserversOfAsset;
+ (_Bool)automaticallyNotifiesObserversOfStatus;
+ (_Bool)automaticallyNotifiesObserversOfAllowProgressiveResume;
+ (_Bool)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+ (_Bool)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (_Bool)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+ (_Bool)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (_Bool)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (_Bool)automaticallyNotifiesObserversOfVariantIndex;
+ (_Bool)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+ (_Bool)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (struct OpaqueCMTimebase *)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
+ (int)_createFigPlaybackItemForFigPlayer:(struct OpaqueFigPlayer *)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned int)arg4 playbackItem:(struct OpaqueFigPlaybackItem **)arg5;
+ (_Bool)_hasOverrideForSelector:(SEL)arg1;
+ (id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
+ (id)playerItemWithAsset:(id)arg1;
+ (id)playerItemWithURL:(id)arg1;
+ (_Bool)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (_Bool)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (long long)propertyStorageCachePolicy;
+ (void)initialize;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
- (void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1;
- (void)setMediaKind:(id)arg1;
- (void)_updateMediaKindOnFigPlaybackItem;
- (id)mediaKind;
- (unsigned long long)restrictions;
- (void)setRestrictions:(unsigned long long)arg1;
- (void)_updateRestrictionsOnFigPlaybackItem;
- (id)videoApertureMode;
- (void)setVideoApertureMode:(id)arg1;
- (void)_updateVideoApertureModeOnFigPlaybackItem;
- (_Bool)suppressesAudioOnlyVariants;
- (void)setSuppressesAudioOnlyVariants:(_Bool)arg1;
- (void)setRequiresAccessLog:(_Bool)arg1;
- (_Bool)requiresAccessLog;
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;
- (void)setPreferredMaximumResolution:(struct CGSize)arg1;
- (void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
- (struct CGSize)preferredMaximumResolution;
- (void)setPreferredPeakPresentationSize:(struct CGSize)arg1;
- (struct CGSize)preferredPeakPresentationSize;
- (void)setMaximumBitRate:(float)arg1;
- (float)maximumBitRate;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)_updatePreferredPeakBitRateOnFigPlaybackItem;
- (double)preferredPeakBitRate;
- (void)setIFramePrefetchTargetDimensions:(struct CGSize)arg1;
- (void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
- (struct CGSize)IFramePrefetchTargetDimensions;
- (void)setAllowProgressiveResume:(_Bool)arg1;
- (_Bool)allowProgressiveResume;
- (void)setAllowProgressiveStartup:(_Bool)arg1;
- (_Bool)allowProgressiveStartup;
- (void)setAllowProgressiveSwitchUp:(_Bool)arg1;
- (_Bool)allowProgressiveSwitchUp;
- (void)setNetworkUsuallyExceedsMaxBitRate:(_Bool)arg1;
- (_Bool)networkUsuallyExceedsMaxBitRate;
- (_Bool)_hasEnqueuedVideoFrame;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;
- (void)_setSuppressesVideoLayers:(_Bool)arg1;
- (_Bool)_suppressesVideoLayers;
- (_Bool)_suppressionForOutputs:(id)arg1;
- (_Bool)hasEnabledAudio;
- (_Bool)_hasEnabledAudio;
- (_Bool)hasVideo;
- (_Bool)hasEnabledVideo;
- (_Bool)_hasEnabledVideo;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary *)arg1;
- (void)_addSyncLayer:(id)arg1;
- (void)_removeSyncLayer:(id)arg1;
- (void)_setSyncLayersOnFigPlaybackItem:(id)arg1;
- (void)_setTimedMetadata:(id)arg1;
- (id)timedMetadata;
- (struct OpaqueFigCPEProtector *)_figCPEProtector;
- (void)setNonForcedSubtitleDisplayEnabled:(_Bool)arg1;
- (_Bool)isNonForcedSubtitleDisplayEnabled;
- (_Bool)_isNonForcedSubtitleDisplayEnabled;
- (void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
- (id)currentMediaSelection;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (_Bool)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(_Bool)arg3;
- (void)_selectMediaOption:(id)arg1 inStreamingGroup:(id)arg2 cacheIfAppropriate:(_Bool)arg3;
- (void)_selectMediaOption:(id)arg1 inNonStreamingGroup:(id)arg2 cacheIfAppropriate:(_Bool)arg3;
- (id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2;
- (_Bool)_hasSelectionInCachedMediaSelectionGroup:(id)arg1;
- (void)_clearCachedMediaSelectionGroup:(id)arg1;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (void)_applyMediaSelectionOptions;
- (void)_markAsReadyForInspectionOfMediaSelectionOptions;
- (_Bool)_isReadyForInspectionOfMediaSelectionOptions;
- (void)_removeMediaOptionsSelectedByClient;
- (void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2;
- (id)_mediaOptionsSelectedByClientForKey:(id)arg1;
- (id)_mediaOptionsSelectedByClient;
- (float)volumeAdjustment;
- (void)setVolumeAdjustment:(float)arg1;
- (void)_updateVolumeAdjustmentOnFigPlaybackItem;
- (float)soundCheckVolumeNormalization;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)_updateSoundCheckVolumeNormalizationOnFigPlaybackItem;
- (void)setVariantIndex:(long long)arg1;
- (void)_quietlySetVariantIndex:(long long)arg1;
- (double)liveUpdateInterval;
- (long long)variantIndex;
- (void)setGaplessInfo:(id)arg1;
- (void)_updatePlaybackPropertiesOnFigPlaybackItem;
- (id)_playbackProperties;
- (id)gaplessInfo;
- (id)loadedTimeRanges;
- (id)_loadedTimeRanges;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1;
- (double)seekableTimeRangesLastModifiedTime;
- (id)seekableTimeRanges;
- (id)_seekableTimeRanges;
- (void)setLoopTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)loopTimeRange;
- (void)_updateLoopTimeRangeOnFigPlaybackItem;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1;
- (id)playabilityMetrics;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(_Bool)arg1;
- (void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
- (_Bool)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (_Bool)isPlaybackBufferEmpty;
- (_Bool)isPlaybackBufferFull;
- (_Bool)isPlaybackLikelyToKeepUp;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
- (id)audioTimePitchAlgorithm;
- (void)setTextStyleRules:(id)arg1;
- (void)_updateTextStyleRulesOnFigPlaybackItem;
- (id)textStyleRules;
- (void)setUsesMinimalLatencyForVideoCompositionRendering:(_Bool)arg1;
- (void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
- (_Bool)usesMinimalLatencyForVideoCompositionRendering;
- (void)setSeekingWaitsForVideoCompositionRendering:(_Bool)arg1;
- (void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
- (_Bool)seekingWaitsForVideoCompositionRendering;
- (id)customVideoCompositor;
- (void)_setVideoCompositor:(void *)arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositionColorTransferFunction:(id)arg1;
- (void)_setVideoCompositionColorYCbCrMatrix:(id)arg1;
- (void)_setVideoCompositionColorPrimaries:(id)arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize)arg1;
- (void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1;
- (void)_setVideoCompositionFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (void)setAudioMix:(id)arg1;
- (void)_applyCurrentAudioMix;
- (void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1 forTrackID:(int)arg2;
- (void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2;
- (id)audioMix;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
- (_Bool)speedThresholdForIFrameOnlyPlaybackWasSet;
- (float)speedThresholdForIFrameOnlyPlayback;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(CDStruct_1b6d18a9)arg1;
- (void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
- (_Bool)minimumIntervalForIFrameOnlyPlaybackWasSet;
- (CDStruct_1b6d18a9)minimumIntervalForIFrameOnlyPlayback;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(_Bool)arg1;
- (void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
- (_Bool)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
- (_Bool)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (void)setContinuesPlayingDuringPrerollForRateChange:(_Bool)arg1;
- (void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
- (_Bool)continuesPlayingDuringPrerollForRateChange;
- (void)setContinuesPlayingDuringPrerollForSeek:(_Bool)arg1;
- (void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
- (_Bool)continuesPlayingDuringPrerollForSeek;
- (void)setSavesDownloadedDataToDiskWhenDone:(_Bool)arg1;
- (_Bool)savesDownloadedDataToDiskWhenDone;
- (void)setWillNeverSeekBackwardsHint:(_Bool)arg1;
- (void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
- (_Bool)willNeverSeekBackwardsHint;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
- (long long)playbackLikelyToKeepUpTrigger;
- (void)setAlwaysMonitorsPlayability:(_Bool)arg1;
- (void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
- (_Bool)alwaysMonitorsPlayability;
- (void)setMaximumForwardBufferDuration:(CDStruct_1b6d18a9)arg1;
- (void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
- (CDStruct_1b6d18a9)maximumForwardBufferDuration;
- (void)setMaximumTrailingBufferDuration:(CDStruct_1b6d18a9)arg1;
- (void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
- (CDStruct_1b6d18a9)maximumTrailingBufferDuration;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (double)preferredForwardBufferDuration;
- (void)setAllowsExtendedReadAhead:(_Bool)arg1;
- (_Bool)allowsExtendedReadAhead;
- (void)setLimitReadAhead:(_Bool)arg1;
- (void)_updateLimitReadAheadOnFigPlaybackItem;
- (_Bool)limitReadAhead;
- (unsigned int)RTCReportingFlags;
- (void)setRTCReportingFlags:(unsigned int)arg1;
- (void)_updateRTCReportingFlagsOnFigPlaybackItem;
- (void)_updateTimebase;
- (struct OpaqueCMTimebase *)timebase;
- (struct OpaqueCMTimebase *)_copyTimebase;
- (struct OpaqueCMTimebase *)_copyProxyTimebase;
- (struct OpaqueCMTimebase *)_copyLoopingTimebase;
- (void)setDecodesAllFramesDuringOrdinaryPlayback:(_Bool)arg1;
- (void)_quietlySetDecodesAllFramesDuringOrdinaryPlayback:(_Bool)arg1;
- (_Bool)decodesAllFramesDuringOrdinaryPlayback;
- (void)setAggressivelyCachesVideoFrames:(_Bool)arg1;
- (void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
- (_Bool)aggressivelyCachesVideoFramesWasSet;
- (_Bool)aggressivelyCachesVideoFrames;
- (void)setReversesMoreVideoFramesInMemory:(_Bool)arg1;
- (void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
- (_Bool)reversesMoreVideoFramesInMemoryWasSet;
- (_Bool)reversesMoreVideoFramesInMemory;
- (void)setBlendsVideoFrames:(_Bool)arg1;
- (void)_updateBlendsVideoFramesOnFigPlaybackItem;
- (_Bool)blendsVideoFramesWasSet;
- (_Bool)blendsVideoFrames;
- (void)setImageQueueInterpolationCurve:(id)arg1;
- (void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
- (_Bool)imageQueueInterpolationCurveWasSet;
- (id)imageQueueInterpolationCurve;
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;
- (void)stepByCount:(long long)arg1;
- (void)setInitialEstimatedDate:(id)arg1;
- (id)initialEstimatedDate;
- (id)currentEstimatedDate;
- (void)setInitialDate:(id)arg1;
- (id)initialDate;
- (_Bool)seekToDate:(id)arg1;
- (_Bool)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)currentDate;
- (void)cancelPendingSeeks;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(_Bool)arg2;
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_CreateSeekID;
- (CDStruct_1b6d18a9)currentTime;
- (struct CGSize)presentationSize;
- (struct CGSize)_presentationSize;
- (void)_markAsReadyForInspectionOfPresentationSize;
- (_Bool)_isReadyForInspectionOfPresentationSize;
- (_Bool)canStepBackward;
- (_Bool)_canStepBackward;
- (_Bool)canStepForward;
- (_Bool)_canStepForward;
- (_Bool)canPlaySlowReverse;
- (_Bool)canPlaySlowForward;
- (_Bool)canPlayReverse;
- (_Bool)_canPlayReverse;
- (_Bool)_isAFileBasedItemThatsReadyToPlay;
- (_Bool)canPlayFastReverse;
- (_Bool)_canPlayFastReverse;
- (_Bool)canPlayFastForward;
- (_Bool)_canPlayFastForward;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_invokeReadyForEnqueueingHandlers;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(CDStruct_1b6d18a9)arg1;
- (void)_markAsReadyForBasicInspection;
- (_Bool)_isReadyForBasicInspection;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_removeLoopingTBListeners;
- (void)_addLoopingTBListeners;
- (void)_removeFAListeners;
- (void)_addFAListeners;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (id)_fpNotificationNames;
- (id)_enabledTrackFormatDescriptions;
- (id)_trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)_tracks;
- (void)_markAsReadyForInspectionOfTracks;
- (_Bool)_isReadyForInspectionOfTracks;
- (id)_tracksFromAssetTrackIDs;
- (id)_cachedTracks;
- (id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)_duration;
- (void)_markAsReadyForInspectionOfDuration;
- (_Bool)_isReadyForInspectionOfDuration;
- (id)automaticallyLoadedAssetKeys;
- (id)asset;
- (void)_changeStatusToFailedWithError:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)_informObserversAboutAvailabilityOfDuration:(CDStruct_1b6d18a9)arg1;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfTracks;
- (void)_kickAssetObserversIfAppropriate;
- (void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_markAsNeedingNewAssetWithFigPlaybackItem;
- (id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)_setURL:(id)arg1;
- (id)_URL;
- (void)_removeFromItems;
- (void)_insertAfterItem:(id)arg1;
- (id)_previousItem;
- (id)_nextItem;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
- (_Bool)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2;
- (void)_attachToFigPlayer;
- (void)_attachToPlayer:(id)arg1;
- (id)_playerConnection;
- (id)_player;
- (void)_configurePlaybackItem;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)valueForKeyForKVO:(id)arg1;
- (void)_playerDidAccessCurrentItemKeypaths;
- (void)_playerWillAccessCurrentItemKeypaths;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (_Bool)_getCachedNonForcedSubtitleEnabled:(_Bool *)arg1;
- (_Bool)_getCachedPresentationSize:(struct CGSize *)arg1;
- (id)_propertyStorage;
- (struct OpaqueFigPlaybackItem *)_copyFigPlaybackItem;
- (id)_copyStateDispatchQueue;
- (id)_weakReference;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)_nameForLogging;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isContentAuthorizedForPlayback) _Bool contentAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isApplicationAuthorizedForPlayback) _Bool applicationAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isAuthorizationRequiredForPlayback) _Bool authorizationRequiredForPlayback;
@property(readonly, nonatomic) NSDate *_rentalPlaybackExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalPlaybackStartedDate;
@property(readonly, nonatomic, getter=_isRentalPlaybackStarted) _Bool _rentalPlaybackStarted;
@property(readonly, nonatomic) NSDate *_rentalExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalStartDate;
@property(readonly, nonatomic, getter=_isRental) _Bool _rental;
@property(nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) _Bool _externalProtectionRequiredForPlayback;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
- (id)errorLog;
- (id)accessLog;
- (long long)_availableFileSize;
- (long long)_fileSize;
- (void)_setEQPreset:(int)arg1;
- (void)_quietlySetEQPreset:(int)arg1;
- (void)_setAudibleDRMInfo:(id)arg1;
- (void)_setRampInOutInfo:(id)arg1;
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeOutput:(id)arg1;
- (void)_removeMetadataOutput:(id)arg1;
- (void)_removeLegibleOutput:(id)arg1;
- (void)_removeVideoOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)_addMetadataOutput:(id)arg1;
- (void)_addLegibleOutput:(id)arg1;
- (void)_addVideoOutput:(id)arg1;
- (id)_preferredPixelBufferAttributes;
- (void)_configureVideoCompositionColorProperties;
- (void)_evaluateMetadataOutputs;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateVideoOutputs;
- (id)_metadataOutputsForKeys;
- (id)_legibleOutputsForKeys;
- (id)_videoOutputs;
- (void)_updateTaggedMetadataArray:(id)arg1;
- (id)_metadataCollectors;
@property(readonly, nonatomic) NSArray *mediaDataCollectors;
- (void)removeMediaDataCollector:(id)arg1;
- (void)addMediaDataCollector:(id)arg1;
- (void)_removeMetadataCollector:(id)arg1;
- (void)_addMetadataCollector:(id)arg1;
@property(copy, nonatomic) NSString *serviceIdentifier;
- (void)_quietlySetServiceIdentifier:(id)arg1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(CDStruct_1b6d18a9)arg4 withLegibleOutputsDictionaryKey:(id)arg5;
- (id)_legibleOutputForKey:(id)arg1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4;
- (id)_metadataOutputForKey:(id)arg1;
@property(retain, nonatomic) id <NSObject><NSCopying> AVKitData;
- (void)setVideoEnhancementMode:(id)arg1;
- (id)videoEnhancementMode;

@end

