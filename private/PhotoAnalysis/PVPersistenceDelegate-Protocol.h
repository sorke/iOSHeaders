//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSSet, NSString, PVCanceler, PVContext, PVFace, PVFaceCrop, PVFaceprint, PVPerson;
@protocol PVFaceComparer;

@protocol PVPersistenceDelegate <NSObject>
@property unsigned int activeFaceprintVersion;
- (void)logPVDebugMessage:(NSString *)arg1;
- (void)logPVInfoMessage:(NSString *)arg1;
- (void)logPVWarningMessage:(NSString *)arg1;
- (void)logPVErrorMessage:(NSString *)arg1;
- (void)buildPersonsWithFaceComparer:(id <PVFaceComparer>)arg1 canceler:(PVCanceler *)arg2 context:(PVContext *)arg3;
- (void)autonameFaceClusters:(NSDictionary *)arg1 faceComparer:(id <PVFaceComparer>)arg2 recallThreshold:(float)arg3;
- (_Bool)needsPersonBuilding;
- (_Bool)recordNeedToPersonBuildOnFaceGroupContainingFace:(PVFace *)arg1 error:(id *)arg2;
- (_Bool)deleteEmptyGroupsAndReturnError:(id *)arg1;
- (_Bool)deleteFaceGroupsAndReturnError:(id *)arg1;
- (_Bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)persistChangesToAlgorithmicFaceGroups:(NSDictionary *)arg1 andFaces:(NSDictionary *)arg2 withCanceler:(PVCanceler *)arg3 returningPersistedClusters:(id *)arg4 faceGroupsThatLostFaces:(id *)arg5 faceGroupsWithoutKeyFace:(id *)arg6 csnsToBeRemovedFromClusterState:(NSMutableSet *)arg7 toBeReclusteredFaceIds:(NSMutableSet *)arg8 error:(id *)arg9;
- (_Bool)setKeyFaceOfAlgorithmicFaceGroupToFaceWithClusterSequenceNumbers:(NSArray *)arg1 error:(id *)arg2;
- (NSSet *)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(NSSet *)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (NSSet *)clusterSequenceNumbersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(NSSet *)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (NSSet *)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (NSSet *)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(NSSet *)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (NSSet *)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (NSArray *)allAlgorithmicFaceGroupsAsClusterSequenceNumbers:(id *)arg1;
- (NSArray *)allAlgorithmicFaceGroups:(id *)arg1;
- (unsigned long long)countOfAlgorithmicFaceGroups:(id *)arg1;
- (NSSet *)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFaceGroupLocalIdentifiersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFacesForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)facesForPersonWithLocalIdentifier:(NSString *)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3 error:(id *)arg4;
- (NSSet *)personsForLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (PVPerson *)personWithFaceLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)allPersons:(id *)arg1;
- (_Bool)getFace:(id *)arg1 associatedWithFaceCrop:(PVFaceCrop *)arg2 error:(id *)arg3;
- (NSString *)associateFace:(PVFace *)arg1 withFaceCrop:(PVFaceCrop *)arg2 error:(id *)arg3;
- (_Bool)clearDirtyStateOnFaceCrops:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)dirtyFaceCropsWithLimit:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)hasDirtyFaceCrops;
- (_Bool)persistGeneratedFaceCrops:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)updateFaceprint:(PVFaceprint *)arg1 ofPersistedFace:(PVFace *)arg2 error:(id *)arg3;
- (NSDictionary *)faceprintsByFaceLocalIdentifiers:(NSArray *)arg1 version:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)persistFaces:(NSArray *)arg1 deleteFaces:(NSArray *)arg2 forAsset:(id)arg3 persistedFaces:(id *)arg4 error:(id *)arg5;
- (void)removeExistingFacesFromCSNs:(NSMutableSet *)arg1;
- (_Bool)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)resetClusterSequenceNumberOfAllFaces:(id *)arg1;
- (NSArray *)facesFromAsset:(id)arg1 error:(id *)arg2;
- (NSSet *)facesForFaceClusterSequenceNumbers:(NSArray *)arg1 withFaceprintVersion:(unsigned int)arg2;
- (NSSet *)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(NSArray *)arg1 withFaceprintVersion:(unsigned int)arg2;
- (NSDictionary *)facesByFaceLocalIdentifiers:(NSArray *)arg1 withFaceprintVersion:(unsigned int)arg2 excludeClustered:(_Bool)arg3;
- (NSSet *)facesForClusteringWithLocalIdentifiers:(NSArray *)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(_Bool)arg3;
- (NSSet *)facesForClusteringWithFaceprintVersion:(unsigned int)arg1 minClusterSequenceNumber:(unsigned long long)arg2 maxClusterSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (NSSet *)facesForClusteringWithFaceprintVersion:(unsigned int)arg1 excludeClustered:(_Bool)arg2 maxCount:(unsigned long long)arg3 error:(id *)arg4;
- (NSSet *)unclusteredFaceLocalIdentifiersWithFaceprintVersion:(unsigned int)arg1 error:(id *)arg2;
- (NSSet *)faceLocalIdentifiersInFaceGroupWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)facesByFaceLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSSet *)facesForFaceLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;
@end
