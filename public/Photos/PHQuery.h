//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSPredicateVisitor.h"

@class NSArray, NSDictionary, NSFetchRequest, NSManagedObjectID, NSMutableDictionary, NSMutableSet, NSPredicate, NSRelationshipDescription, NSSet, NSString, PHCollection, PHFetchOptions, PHPhotoLibrary;

@interface PHQuery : NSObject <NSPredicateVisitor, NSCopying>
{
    NSPredicate *_cachedFetchOptionsPredicate;
    NSPredicate *_basePredicate;
    NSPredicate *_filterPredicate;
    NSFetchRequest *_fetchRequest;
    long long _collectionFetchType;
    _Bool _preparedContainerInfo;
    NSRelationshipDescription *_containerRelationship;
    NSManagedObjectID *_containerIdentifier;
    PHCollection *_containerCollection;
    _Bool _preparedCombinedQueryKeys;
    id _combinedQueryGroupKey;
    NSString *_combinedQueryKeyPath;
    NSManagedObjectID *_combinedQuerySeparatingIdentifier;
    _Bool _preparedFilteringAttributes;
    NSMutableSet *_filteringKeys;
    unsigned long long _filteringAttributesIndexValue;
    unsigned long long _filteringRelationshipsIndexValue;
    unsigned long long _objectToContainerRelationshipIndexValue;
    unsigned long long _containerToObjectRelationshipIndexValue;
    unsigned long long _containerSortingAttributesIndexValue;
    NSMutableSet *_filteringOids;
    NSMutableSet *_filteringObjectKeyPaths;
    NSMutableDictionary *_filteringRelationshipsIndexValueByBaseEntityName;
    _Bool __includesCameraRoll;
    PHFetchOptions *_fetchOptions;
    NSString *_fetchType;
    NSArray *_seedOIDs;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)queryForImportSessionsWithOptions:(id)arg1;
+ (id)queryForSuggestionsWithState:(unsigned short)arg1 type:(unsigned short)arg2 options:(id)arg3;
+ (id)queryForSuggestionsWithState:(unsigned short)arg1 options:(id)arg2;
+ (id)queryForSuggestionsWithOptions:(id)arg1;
+ (id)queryForMomentShareParticiapntsWithLocalIdentifiers:(id)arg1;
+ (id)queryForMomentShareParticipantsInMomentShare:(id)arg1 options:(id)arg2;
+ (id)queryForFaceCropsForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForFaceCropsWithOptions:(id)arg1;
+ (id)queryForInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForAssociatedPersonForFaceGroup:(id)arg1 withOptions:(id)arg2;
+ (id)queryForEmptyFaceGroupsWithOptions:(id)arg1;
+ (id)queryForFaceGroupsWithFace:(id)arg1 options:(id)arg2;
+ (id)queryForFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForFaceGroupsForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForFaceGroupsWithOptions:(id)arg1;
+ (id)queryForAssetsForFaces:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsForPersons:(id)arg1 options:(id)arg2;
+ (id)queryForRejectedPersonsForFace:(id)arg1 options:(id)arg2;
+ (id)queryForPersonsWithFace:(id)arg1 options:(id)arg2;
+ (id)queryForPersonsWithContactIdentifiers:(id)arg1 options:(id)arg2;
+ (id)_queryForPersonsWithFaceRelationshipPredicate:(id)arg1 options:(id)arg2;
+ (id)queryForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)_queryForPersonsInAssetsWithObjectIDs:(id)arg1 withOptions:(id)arg2;
+ (id)queryForPersonsInAssets:(id)arg1 withOptions:(id)arg2;
+ (id)queryForPersonsInAsset:(id)arg1 options:(id)arg2;
+ (id)queryForPersonsWithType:(long long)arg1 options:(id)arg2;
+ (id)queryForPersonsWithOptions:(id)arg1;
+ (id)queryForKeyFaceOnPerson:(id)arg1 options:(id)arg2;
+ (id)queryForFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2;
+ (id)queryForRejectedFacesOnPerson:(id)arg1 options:(id)arg2;
+ (id)queryForFacesOnFaceCrop:(id)arg1 options:(id)arg2;
+ (id)queryForFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
+ (id)queryForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;
+ (id)queryForFacesInFaceGroup:(id)arg1 options:(id)arg2;
+ (id)queryForFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForFacesInAsset:(id)arg1 options:(id)arg2;
+ (id)queryForSingletonFacesWithOptions:(id)arg1;
+ (id)queryForFacesWithOptions:(id)arg1;
+ (id)queryForMomentListsWithSubType:(long long)arg1 options:(id)arg2;
+ (id)queryForMomentListsWithSubType:(long long)arg1 containingMoment:(id)arg2;
+ (id)queryForCloudSharedAlbums;
+ (id)queryForTopLevelUserCollections;
+ (id)queryForRootAlbumCollectionList;
+ (id)_rootFolderID;
+ (id)queryForCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)queryForCollectionListsWithCloudIdentifiers:(id)arg1;
+ (id)queryForCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2;
+ (id)queryForCollectionListContainingCollection:(id)arg1;
+ (id)queryForCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)queryForMomentsContainingAssetsWithLocalIdentifiers:(id)arg1;
+ (id)queryForMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)queryForMomentsBackingMemory:(id)arg1;
+ (id)queryForMomentsWithOptions:(id)arg1;
+ (id)queryForAssetCollectionsWithObjectIDs:(id)arg1;
+ (id)queryForAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)queryForAssetCollectionsWithCloudIdentifiers:(id)arg1;
+ (id)queryForAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2;
+ (id)_fetchTypeForLocalIdentifiers:(id)arg1;
+ (id)queryForAssetCollectionsWithLocalIdentifiers:(id)arg1;
+ (_Bool)_validateLocalIdentifiers:(id)arg1 compatibilityWithFetchType:(id)arg2;
+ (id)queryForAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2;
+ (id)queryForAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2;
+ (id)queryForQuarantinedAssetsWithOptions:(id)arg1;
+ (id)queryForKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForKeyAssetsInMomentShare:(id)arg1 options:(id)arg2;
+ (id)queryForCustomKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithOptions:(id)arg1;
+ (id)queryForAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)_defaultFetchOptionsForIdentifiedAssetsQuery;
+ (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(_Bool)arg3;
+ (id)queryForAssetsWithMediaType:(long long)arg1 options:(id)arg2;
+ (id)queryForMovieCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3;
+ (id)queryForRepresentativeAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForRepresentativeAssetsInSuggestion:(id)arg1 options:(id)arg2;
+ (id)queryForKeyAssetsInSuggestion:(id)arg1 options:(id)arg2;
+ (id)queryForKeyAssetInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForExtendedCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)_fetchOptionsForFetchingAssetsFromAssetCollection:(id)arg1 options:(id)arg2;
+ (id)combinedFetchRequestForQueries:(id)arg1;
+ (id)_filterPredicateFromFetchOptionsPredicate:(id)arg1 options:(id)arg2 phClass:(Class)arg3;
+ (id)_containerIdentifierForFetchType:(id)arg1 predicate:(id)arg2 outRelationship:(id *)arg3;
+ (id)_transformedSortDescriptors:(id)arg1 forFetchType:(id)arg2;
+ (id)defaultSortDescriptorForFetchType:(id)arg1 predicate:(id)arg2;
+ (id)_relationshipForFetchType:(id)arg1 predicate:(id)arg2;
+ (id)queryForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4;
+ (id)queryForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly) NSArray *seedOIDs; // @synthesize seedOIDs=_seedOIDs;
@property(readonly) NSPredicate *basePredicate; // @synthesize basePredicate=_basePredicate;
@property(readonly) NSString *fetchType; // @synthesize fetchType=_fetchType;
@property(nonatomic, setter=_setIncludesCameraRoll:) _Bool _includesCameraRoll; // @synthesize _includesCameraRoll=__includesCameraRoll;
@property(copy, nonatomic) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
- (void).cxx_destruct;
- (id)description;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)_prepareFilteringAttributes;
@property(readonly, nonatomic) NSDictionary *filteringRelationshipsIndexValueByBaseEntityName;
@property(readonly, nonatomic) NSSet *filteringOids;
- (unsigned long long)containerToObjectRelationshipIndexValue;
- (unsigned long long)objectToContainerRelationshipIndexValue;
- (unsigned long long)filteringRelationshipsIndexValue;
- (unsigned long long)filteringAttributesIndexValue;
- (unsigned long long)containerSortingAttributesIndexValue;
@property(readonly) NSManagedObjectID *combinedQuerySeparatingIdentifier;
@property(readonly) NSString *combinedQueryKeyPath;
@property(readonly) id combinedQueryGroupKey;
- (void)_prepareCombinedQueryKeys;
- (id)executeQuery;
- (id)effectivePredicateForPHClass:(Class)arg1 request:(id)arg2 includingBasePredicate:(_Bool)arg3;
@property(readonly) NSPredicate *filterPredicate;
- (id)_globalPredicatesForPHClass:(Class)arg1;
- (void)_prepareContainerInfo;
- (void)_setContainerCollection:(id)arg1;
- (id)containerIdentifier;
- (id)_containerRelationship;
- (void)_setCollectionFetchType:(long long)arg1;
- (long long)collectionFetchType;
@property(readonly) NSFetchRequest *fetchRequest;
- (id)_effectiveSortDescriptors;
- (_Bool)_isAlbumContentTitleSort;
- (_Bool)_isAlbumContentSort;
- (id)_createFetchRequestIncludingBasePredicate:(_Bool)arg1;
- (id)updatedQueryWithChange:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3;
- (id)initForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4;

@end

