//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSURL, NSXPCConnection, _PLPhotoAnalysisXPCConnection;

@interface PLPhotoAnalysisServiceClient : NSObject
{
    NSURL *_libraryURL;
    _PLPhotoAnalysisXPCConnection *_xpcConnection;
    NSDictionary *_cachedRequestContextDictionary;
    NSObject<OS_dispatch_queue> *_constraintChangeQueue;
}

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)dumpAnalysisStatusError:(id *)arg1;
- (int)photoanalysisdPid;
- (id)initWithLibraryURL:(id)arg1;
- (id)init;
- (void)unloadGraph;
- (void)loadGraph;
- (_Bool)isGraphReady;
- (_Bool)rebuildPersonsWithOptions:(id)arg1 error:(id *)arg2;
- (id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (void)personPromoterAdvancedStatus:(CDUnknownBlockType)arg1;
- (void)personPromoterStatus:(CDUnknownBlockType)arg1;
- (id)requestSuggestedMePersonIdentifierWithError:(id *)arg1;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;
- (id)faceClusteringInformation:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)processPersonsWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)reclusterFacesWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)resetFaceClassificationModel:(id *)arg1;
- (_Bool)resetPeople:(id *)arg1;
- (_Bool)resetFaceClusteringState:(id *)arg1;
- (long long)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id *)arg3;
- (long long)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id *)arg2;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (int)pingFaceWorkerWithOptions:(id)arg1 error:(id *)arg2;
- (int)pingSceneWorkerWithOptions:(id)arg1 error:(id *)arg2;
- (void)dispatchOnQueue:(id)arg1 blockWithoutBoost:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)requestContextDictionaryWithOperationId:(_Bool)arg1;
- (id)requestContextDictionary;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *constraintChangeQueue;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 error:(id *)arg3;
- (id)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestSuggestedContributionsForAssetsMetadata:(id)arg1 error:(id *)arg2;
- (id)requestSuggestedRecipientsForMomentIdentifiers:(id)arg1 sharingStream:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestSharingSuggestionsFromMomentLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (_Bool)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (_Bool)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (_Bool)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (_Bool)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id *)arg2 subtitle:(id *)arg3 error:(id *)arg4;
- (_Bool)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;
- (id)requestDefaultsObjectForKey:(id)arg1 withError:(id *)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (_Bool)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id *)arg4;
- (id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id *)arg3;
- (id)requestMetadataSnapshotFolderCreation:(id *)arg1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)requestInvalidatePersistentCaches:(id *)arg1;
- (_Bool)requestInvalidateTransientCaches:(id *)arg1;
- (void)requestGraphRebuildFractionCompletedWithReply:(CDUnknownBlockType)arg1;
- (id)requestGraphPerformQuery:(id)arg1 error:(id *)arg2;
- (id)requestGraphStatus:(id *)arg1;
- (void)requestHighlightEstimatesWithReply:(CDUnknownBlockType)arg1;
- (id)requestGraphStatisticsWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestExportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestTransientMemoriesWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)requestSearchInformationForTripUUIDs:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)requestLocalizedSceneAncestryInformationWithError:(id *)arg1;
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestSynonymsDictionariesWithError:(id *)arg1;
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id *)arg2;
- (void)invalidateGraphWithReply:(CDUnknownBlockType)arg1;
- (void)rebuildGraphWithProgress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestAssetsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestRelatedMomentsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestSocialGroupsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id *)arg2;
- (id)requestSortedArrayOfPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (void)generateSuggestionsWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (int)pingGraphWorkerWithOptions:(id)arg1 error:(id *)arg2;

@end

