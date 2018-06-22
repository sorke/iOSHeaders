//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetsdClientService.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString, PLAssetsdClientServiceReceiver;

@interface PLGatekeeperClient : NSObject <PLAssetsdClientService>
{
    NSObject<OS_dispatch_queue> *_serialReplyQueue;
    NSArray *_previewRenderedContentURLs;
    PLAssetsdClientServiceReceiver *_clientServiceReceiver;
    NSObject<OS_xpc_object> *connection;
    NSArray *_previewAssetLocalIdentifiers;
}

+ (id)securityPolicyErrorForMissingEntitlement:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection;
- (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)estimateUploadSizeForMomentShare:(id)arg1;
- (void)acceptMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)resetPendingAnalysisStatesWithError:(id *)arg1;
- (_Bool)markStatesProcessedForWorkerType:(short)arg1 error:(id *)arg2;
- (void)removeAnalysisRecordsForDeletedAssets:(id)arg1 forWorkerType:(short)arg2;
- (id)debugSidecarFileURLsForAsset:(id)arg1;
- (void)computeFingerPrintsOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resourceURLReceivedForIdentifier:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)assetAvailableForIdentifier:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)downloadFinishedForIdentifier:(id)arg1 success:(_Bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(_Bool)arg3 data:(id)arg4 error:(id)arg5;
- (void)recoverAssetsInInconsistentCloudState;
- (void)markPersonAsNeedingKeyFace:(id)arg1 synchronously:(_Bool)arg2;
- (void)overrideSystemBudgetsForSyncSession:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateUnverifiedFaceCountThreshold;
- (void)getCurrentTransferProgress:(CDUnknownBlockType)arg1;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (void)setPhotosXPCEndpointForEndpoint:(id)arg1;
- (id)getPhotosXPCEndpoint;
- (id)getCPLState;
- (id)getXPCTransactionStatus;
@property(retain, nonatomic) NSArray *previewAssetLocalIdentifiers; // @synthesize previewAssetLocalIdentifiers=_previewAssetLocalIdentifiers;
- (id)previewRenderedContentURLAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long previewRenderedContentURLCount;
- (void)setPreviewRenderedContentURLs:(id)arg1;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)repairMemoriesWithUUIDs:(id)arg1;
- (void)prefetchResourcesForMemories:(id)arg1;
- (void)pruneAssets:(id)arg1 resourceTypes:(id)arg2;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(_Bool)arg3;
- (void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(_Bool)arg3 trackCPLDownload:(_Bool)arg4 downloadIsTransient:(_Bool)arg5 proposedTaskIdentifier:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2;
- (id)getKeywordsForAssetWithUUID:(id)arg1;
- (void)removeLocalDuplicates;
- (void)dumpCloudPhotosStatusIncludingDaemon:(_Bool)arg1;
- (void)pauseICloudPhotos:(_Bool)arg1 reason:(short)arg2 waitForReply:(_Bool)arg3;
- (void)pauseICloudPhotos:(_Bool)arg1 reason:(short)arg2;
- (void)enableCloudPhotos:(_Bool)arg1;
- (id)dictionaryWithContentsOfMediaFilePath:(id)arg1;
- (void)softResetSyncStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)syncWithCloudPhotoLibrary;
- (long long)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
- (long long)migrateCloudFaces;
- (int)getCurrentModelVersion;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadCloudSharedAsset:(id)arg1 withCloudPlaceholderKind:(unsigned long long)arg2 shouldPrioritize:(_Bool)arg3 shouldExtendTimer:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)rebuildAllThumbnails;
- (void)resetDupesAnalysis;
- (void)rebuildCloudFeed;
- (void)dumpPhotoAnalysisStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerSceneTaxonomySHA:(id)arg1;
- (void)applySearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)applySearchIndexUpdates:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)rebuildSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitForSearchIndexExistenceWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSearchIndexProgress:(CDUnknownBlockType)arg1;
- (void)setSearchIndexPaused:(_Bool)arg1 synchronously:(_Bool)arg2 reason:(id)arg3;
- (void)dropSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)analyzeMomentListID:(id)arg1;
- (void)analyzeMomentID:(id)arg1;
- (void)clearUserInfluencedMoments;
- (id)allMomentsMetadataWithOutputPath:(id)arg1;
- (id)dumpMetadataForMomentsWithOutputPath:(id)arg1;
- (id)locationShiftStatus;
- (id)momentAnalysisStatus;
- (void)invalidateLocationShift;
- (void)analyzeAllMoments;
- (void)rebuildMomentLists;
- (void)rebuildMomentsSynchronous:(_Bool)arg1 incremental:(_Bool)arg2 deleteAllMoments:(_Bool)arg3;
- (id)momentGenerationStatus;
- (void)reloadMomentGenerationOptions;
- (void)purgeExpiredOutboundSharingAssets;
- (void)automaticallyDeleteEmptyAlbum:(id)arg1;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (id)personInfoDictionaryForPersonID:(id)arg1;
- (id)emailAddressForKey:(int)arg1;
- (int)keyForEmailAddress:(id)arg1;
- (unsigned long long)attemptToPurgeSharedAssetsExceptForRecentlyViewedAssets;
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)arg1;
- (unsigned long long)purgeableSharedAssetsSpace;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)waitUntilConnectionSendsAllMessages;
- (void)sendDaemonJob:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)cleanupForStoreDemoMode;
- (void)noteExpiringMomentShareWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (void)noteSuggestedCMMViewedForColletionID:(id)arg1;
- (void)noteSuggestedCMMNotificationForColletionID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (void)noteUserRespondedToMemoriesNotification;
- (void)noteInterestingMemoryNotificationViewedForColletionID:(id)arg1;
- (void)noteInterestingMemoryNotificationForColletionID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (void)sendResponse:(_Bool)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2;
- (void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;
- (void)repairSingletonObjects;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)recoverFromCrashIfNeeded;
- (_Bool)hasCompletedMomentAnalysis;
- (id)incompleteRestoreProcesses;
- (_Bool)hasCompletedRestorePostProcessing;
- (_Bool)isReadyForCloudPhotoLibrary;
- (void)dataMigrationWillFinish;
- (void)repairPotentialModelCorruption;
- (void)cleanupModelForDataMigration;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(_Bool)arg3;
- (void)finalizeOTARestoreRecreatingAlbums:(_Bool)arg1;
- (void)updateModelAfterOTARestore;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateThumbnailsForPhotos:(id)arg1 waitForReply:(_Bool)arg2 assignNewIndex:(_Bool)arg3 forceRefresh:(_Bool)arg4;
- (void)getLibrarySizesFromDB:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getLibrarySizes:(CDUnknownBlockType)arg1;
- (void)getPhotosAndVideosCountWithHandler:(CDUnknownBlockType)arg1;
- (void)launchAssetsd;
- (void)importFileSystemAssetsWaitingForReply:(_Bool)arg1;
- (void)createPhotoLibraryDatabase;
- (void)setExternalUsageIntent:(unsigned long long)arg1 forAssetWithURL:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)deleteAssetWithURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addGroupWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)cancelCPLDownloadWithContext:(id)arg1;
- (void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)revertToOriginalForAsset:(id)arg1;
- (void)requestAdjustmentDataForAsset:(id)arg1 withDataBlob:(_Bool)arg2 networkAccessAllowed:(_Bool)arg3 trackCPLDownload:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(_Bool)arg3 streamingAllowed:(_Bool)arg4 restrictToPlayable:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;
- (void)requestMasterThumbnailForAssetUUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestSandboxExtensionForMedia;
- (id)sandboxExtensionForAssetResourcePath:(id)arg1;
- (void)getSandboxExtensionForPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateOnDemandResourcesForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(int)arg2 doneTokens:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestImageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;
- (id)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 outImageDataInfo:(id *)arg7 outCPLDownloadContext:(id *)arg8;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)updateLocationDataForAssetUUID:(id)arg1;
- (void)batchSaveAssetsWithJobDictionaries:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)saveAssetWithJobDictionary:(id)arg1 handler:(CDUnknownBlockType)arg2 imageSurface:(void *)arg3 previewImageSurface:(void *)arg4;
- (id)fileURLForAssetURL:(id)arg1 withAdjustments:(_Bool)arg2;
- (int)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(_Bool)arg2 outFileExtension:(id *)arg3;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (void)requestAccessWithHandler:(CDUnknownBlockType)arg1;
- (id)newAssetsdEndpoint;
- (void)dealloc;
- (id)init;
- (id)deviceSpecificReplyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
- (id)sendQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

