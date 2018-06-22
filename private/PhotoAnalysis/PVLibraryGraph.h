//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAGraph.h"

#import "PVPhotoLibraryProtocol.h"

@class NSDictionary, NSString;

@interface PVLibraryGraph : MAGraph <PVPhotoLibraryProtocol>
{
    NSDictionary *_faceprintDictionary;
    NSDictionary *_distanceIdentityDictionary;
}

+ (id)defaultFacesDataSnapshotPath;
+ (id)graphWithName:(id)arg1 forFacesDataSnapshotAtPath:(id)arg2;
+ (id)graphForFacesDataSnapshotAtPath:(id)arg1;
+ (id)originGraphForFacesDataSnapshotAtPath:(id)arg1;
+ (id)graphForLibrary:(id)arg1 ingestPeople:(_Bool)arg2;
+ (Class)edgeClass;
+ (Class)nodeClass;
@property(retain, nonatomic) NSDictionary *distanceIdentityDictionary; // @synthesize distanceIdentityDictionary=_distanceIdentityDictionary;
@property(retain, nonatomic) NSDictionary *faceprintDictionary; // @synthesize faceprintDictionary=_faceprintDictionary;
- (void).cxx_destruct;
- (_Bool)_saveDictionary:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)_insertFaceGroupNodeForFaceGroup:(id)arg1;
- (id)_insertPeopleNodeForPerson:(id)arg1 withType:(unsigned long long)arg2;
- (id)_insertFaceNodeForFace:(id)arg1;
- (id)_insertAssetNodeForAsset:(id)arg1;
- (id)_insertMomentNodeForMoment:(id)arg1;
- (id)_infoNode;
- (id)init;
- (_Bool)saveFacesDataSnapshotAtPath:(id)arg1 error:(id *)arg2;
- (unsigned long long)getPeopleTypeForFaceGroupNode:(id)arg1;
- (id)pv_lastAssetDate;
- (_Bool)pv_isLibraryBeingSynchronized;
- (float)pv_faceProcessingProgress;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;
- (id)pv_fetchAssetsForPerson:(id)arg1;
- (id)pv_fetchAssetsInMoment:(id)arg1;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForPerson:(id)arg1;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMoments;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchFacesForFaceGroup:(id)arg1;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPerson:(id)arg1;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchPersonsInMoment:(id)arg1;
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (_Bool)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)pv_persistentStorageDirectoryURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

