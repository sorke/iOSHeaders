//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PVFaceClusteringProtocol.h"

@class NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL, PVCanceler, PVContext, PVDataAccessor, PVEventManager, PVQueue, PVSuggestionRequest, VNCanceller, VNClustererBuilder;

@interface PVClusterer : NSObject <PVFaceClusteringProtocol>
{
    id <PVVisionIntegrating> _visionIntegration;
    PVQueue *_processingQueue;
    PVContext *_context;
    PVDataAccessor *_dataAccessor;
    NSURL *_cacheDirUrl;
    NSURL *_cacheFileUrl;
    NSString *_clusteringType;
    NSNumber *_threshold;
    NSSet *_faceCSNsInClusterCache;
    unsigned long long _nextSeqNum;
    NSMutableSet *_faceIdStrsToAdd;
    NSMutableSet *_faceCSNsToRemove;
    unsigned long long _accumulatedChangesCount;
    unsigned long long _nextClusterTriggeringAccumulatedChangesCount;
    PVCanceler *_clusteringCanceler;
    VNCanceller *_visionCanceler;
    VNClustererBuilder *_clusterBuilder;
    _Bool _rebuildClusterer;
    NSMutableArray *_outstandingSuggestionRequests;
    PVSuggestionRequest *_currentSuggestionRequest;
    NSLock *_suggestionLock;
    NSLock *_currentStatusSnapshotLock;
    CDStruct_6069b02b _currentStatusSnapshot;
    _Bool _currentStatusSnapshotIsValid;
    NSLock *_propertyDictionaryLock;
    NSMutableDictionary *_propertyDictionary;
    long long _clustererBringUpState;
    NSDate *_timestampOfLastClusterComparison;
    PVEventManager *_eventManager;
}

+ (_Bool)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id *)arg3;
@property __weak PVEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(nonatomic) long long clustererBringUpState; // @synthesize clustererBringUpState=_clustererBringUpState;
- (void).cxx_destruct;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id *)arg3;
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id *)arg3;
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool needsUpdate;
@property(readonly, nonatomic) _Bool needsFullSync;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic) long long clustererState;
- (id)_stringForPVClustererBringUpState:(long long)arg1;
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;
- (void)_readPropertyDictionary;
- (id)_propertyDictionaryFileURL;
- (_Bool)getClusters:(id *)arg1 threshold:(double *)arg2 utilizingGPU:(_Bool *)arg3 error:(id *)arg4;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;
- (_Bool)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(_Bool)arg3 error:(id *)arg4;
- (_Bool)isReadyToReturnSuggestions;
- (void)cancelAllSuggestionRequests;
- (void)cancelSuggestionRequest:(id)arg1;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id *)arg2;
- (long long)restoreClusterCacheAndSyncWithLibrary:(_Bool)arg1;
- (_Bool)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)_processingQueueResetClusterCache:(id *)arg1;
- (_Bool)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id *)arg4;
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id *)arg3;
- (_Bool)_processingQueueSaveClusterCache:(id *)arg1;
- (_Bool)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id *)arg1 lastClusterSequenceNumber:(unsigned long long *)arg2 error:(id *)arg3;
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 withCanceler:(id)arg2;
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id *)arg2 withCanceler:(id)arg3;
- (void)_removeEmptyGroups;
- (id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(_Bool)arg2 updatedFaces:(id)arg3;
- (id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(_Bool)arg2 updatedFaces:(id)arg3 excludeClustered:(_Bool)arg4;
- (id)_faceObservationsFromFaceCSNs:(id)arg1;
- (_Bool)_performAndPersistClustersByAddingFaceObs:(id)arg1 removingFaceObs:(id)arg2 updateFaces:(id)arg3 canceler:(id)arg4 error:(id *)arg5;
- (id)status;
- (void)_recordCurrentStatus:(CDStruct_6069b02b)arg1;
- (void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_recordClusterRebuildRequired:(_Bool)arg1;
- (void)_recordClusteringState:(_Bool)arg1;
- (void)cancelClustering;
- (void)_cancelClusteringAndRestoreClusterCache:(_Bool)arg1;
- (void)performClusteringWithCompletion:(CDUnknownBlockType)arg1;
- (void)clusterAndWait;
- (void)clusterIfNecessaryAndWait;
- (unsigned long long)numberOfAccumulatedClusterChanges;
- (_Bool)_processingQueuePerformForcedFaceClustering:(_Bool)arg1 withCanceler:(id)arg2;
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
- (void)terminate;
- (id)_persistenceDelegate;
- (id)initWithContext:(id)arg1 dataAccessor:(id)arg2 cacheDirectoryURL:(id)arg3 visionIntegration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

