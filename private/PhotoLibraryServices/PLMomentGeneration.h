//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSSet, PLMomentAnalyzer;

@interface PLMomentGeneration : NSObject
{
    _Bool _isGenerationPassInProgress;
    unsigned long long _inProgressCount;
    NSMutableOrderedSet *_pendingInsertsAndUpdates;
    NSMutableDictionary *_pendingDeletes;
    NSMutableArray *_pendingCompletionBlocks;
    NSObject<OS_dispatch_queue> *_incrementalGenerationStateQueue;
    PLMomentAnalyzer *_pairedAnalyzer;
    PLMomentAnalyzer *_analyzer;
    _Bool _isInStressTestMode;
    NSSet *_clusteringDeletedClusters;
    id <PLMomentGenerationDataManagement> _momentGenerationDataManager;
}

+ (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
+ (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
+ (void)_updateMoment:(id)arg1 fromCluster:(id)arg2 inManager:(id)arg3;
+ (id)generateSplitCustomMomentUUID;
+ (id)generateMergeCustomMomentUUID;
+ (_Bool)_rebuildAllMomentListsWithDataManager:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) id <PLMomentGenerationDataManagement> momentGenerationDataManager; // @synthesize momentGenerationDataManager=_momentGenerationDataManager;
@property(retain, nonatomic) NSSet *clusteringDeletedClusters; // @synthesize clusteringDeletedClusters=_clusteringDeletedClusters;
- (void)clearUserInfluencedMoments;
- (id)allMomentsMetadataWriteToFile:(id)arg1;
- (id)_detailsForMoment:(id)arg1;
- (id)_nameForMomentGenerationType:(short)arg1;
- (id)allAssetMetadataWriteToFile:(id)arg1;
- (id)_logEntryForAssets:(id)arg1 isBatchUpdate:(_Bool)arg2;
- (void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(_Bool)arg2;
- (void)_clearReplayLog;
- (id)_detailsForAsset:(id)arg1 simpleOnly:(_Bool)arg2;
- (_Bool)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3;
- (id)momentGenerationStatus;
- (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
- (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
- (void)_cleanUpMoment:(id)arg1;
- (id)_insertAndUpdateRemainingMomentsInManager:(id)arg1 withAffectedMoments:(id)arg2;
- (id)_insertMomentsForMomentClusters:(id)arg1 inManager:(id)arg2;
- (id)_momentClustersForAssets:(id)arg1 inManager:(id)arg2 updateDeletedClusters:(_Bool)arg3;
- (void)rebuildAllMomentLists:(CDUnknownBlockType)arg1;
- (void)_processMomentsWithAssets:(id)arg1 hiddenAssets:(id)arg2 inManager:(id)arg3 affectedMoments:(id)arg4 updatedMoments:(id *)arg5;
- (_Bool)_rebuildAllMomentsInManager:(id)arg1 shouldAnalyze:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_deleteAllMomentDataInManager:(id)arg1 incremental:(_Bool)arg2 error:(id *)arg3;
- (void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_runIncrementalGenerationPassWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_refreshObjects:(id)arg1 withDataManager:(id)arg2;
- (void)generateWithIncrementalDataCompletionHandler:(CDUnknownBlockType)arg1;
- (void)generateWithAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveChangesForAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2;
- (_Bool)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1;
- (void)_updateIncrementalMomentGeneration;
- (void)dealloc;
@property(nonatomic) PLMomentAnalyzer *analyzer;
- (id)initWithMomentGenerationDataManager:(id)arg1;
- (_Bool)rebuildAllMomentsWithManager:(id)arg1 error:(id *)arg2;

@end

