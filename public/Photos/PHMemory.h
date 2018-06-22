//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, PHMemoryFeature;

@interface PHMemory : PHAssetCollection
{
    NSString *_title;
    NSString *_localizedSubtitle;
    NSData *_photosGraphData;
    long long _photosGraphVersion;
    NSDictionary *_transientMemoryProperties;
    NSDate *_creationDate;
    unsigned long long _category;
    unsigned long long _subcategory;
    unsigned long long _notificationState;
    _Bool _rejected;
    _Bool _favorite;
    _Bool _pending;
    _Bool _userCreated;
    NSDictionary *_movieAssetState;
    NSData *_movieData;
    double _score;
    NSDate *_lastViewedDate;
    NSDate *_lastMoviePlayedDate;
    NSString *_titleFontName;
    NSData *_assetListPredicate;
    PHMemoryFeature *_blacklistedFeature;
    long long _syncedPlayCount;
    long long _syncedShareCount;
    long long _syncedViewCount;
    long long _pendingPlayCount;
    long long _pendingShareCount;
    long long _pendingViewCount;
    _Bool _didLoadTitleCategory;
    long long _titleCategory;
    NSDictionary *_photosGraphProperties;
}

+ (id)fetchBestRecentMemoryWithOptions:(id)arg1;
+ (id)stringForSubcategory:(unsigned long long)arg1;
+ (id)stringForCategory:(unsigned long long)arg1;
+ (id)assetListPredicateFromQueryHintObjects:(id)arg1;
+ (id)titleFontNameFromMovieData:(id)arg1;
+ (id)movieDataWithTitleFontName:(id)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyMap;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsRejectedState;
+ (_Bool)managedObjectSupportsPendingState;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (void)generateMemoriesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)memoryTreeLevelWithOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)fetchTransientMemoriesWithOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)_fetchOptionsForTransientMemoryAssetsWithOptions:(id)arg1;
+ (id)transientMemoryWithDictionary:(id)arg1;
@property(readonly, nonatomic) PHMemoryFeature *blacklistedFeature; // @synthesize blacklistedFeature=_blacklistedFeature;
@property(readonly, nonatomic) NSData *assetListPredicate; // @synthesize assetListPredicate=_assetListPredicate;
@property(readonly, nonatomic) NSDate *lastMoviePlayedDate; // @synthesize lastMoviePlayedDate=_lastMoviePlayedDate;
@property(readonly, nonatomic) NSDate *lastViewedDate; // @synthesize lastViewedDate=_lastViewedDate;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) long long photosGraphVersion; // @synthesize photosGraphVersion=_photosGraphVersion;
@property(readonly, nonatomic) NSData *movieData; // @synthesize movieData=_movieData;
@property(readonly, nonatomic, getter=isUserCreated) _Bool userCreated; // @synthesize userCreated=_userCreated;
@property(readonly, nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(readonly, nonatomic, getter=isRejected) _Bool rejected; // @synthesize rejected=_rejected;
@property(readonly, nonatomic) unsigned long long notificationState; // @synthesize notificationState=_notificationState;
@property(readonly, nonatomic) unsigned long long subcategory; // @synthesize subcategory=_subcategory;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *photosGraphProperties; // @synthesize photosGraphProperties=_photosGraphProperties;
@property(readonly, nonatomic) _Bool isGreat;
@property(readonly, nonatomic) _Bool isStellar;
@property(readonly, nonatomic) _Bool isMustSee;
- (id)moodKeywords;
- (unsigned long long)suggestedMood;
- (id)description;
- (id)_extendedCuratedAssetIDs;
- (id)_curatedAssetIDs;
- (id)_representativeAndCuratedAssetIDs;
- (id)predicateForAllMomentsFromRepresentativeAssets;
- (id)predicateForAllAssets;
- (unsigned long long)titleFontNameHash;
- (id)titleFontName;
@property(readonly, nonatomic) long long viewCount;
@property(readonly, nonatomic) long long shareCount;
@property(readonly, nonatomic) long long playCount;
- (_Bool)hasBlacklistableFeature;
@property(readonly, nonatomic) NSArray *blacklistableFeatures;
@property(readonly, nonatomic) _Bool isContiguous;
@property(readonly, nonatomic) NSSet *featuredPeopleIdentifiers;
- (_Bool)collectionHasFixedOrder;
- (_Bool)canShowAvalancheStacks;
- (_Bool)canContainAssets;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (id)creationDate;
@property(readonly, nonatomic) NSString *subtitle;
- (id)localizedSubtitle;
- (long long)titleCategory;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (id)movieStateDataForAsset:(id)arg1;
- (id)transientMemoryStartDate;
- (id)rejectionCause;
- (_Bool)isTransient;
- (id)transientRepresentativeAndCuratedAssetIDs;
- (id)query;
- (id)queryForKeyAssetWithOptions:(id)arg1;
- (id)queryForCuratedAssetsWithOptions:(id)arg1;
- (id)queryForExtendedCuratedAssetsWithOptions:(id)arg1;
- (void)setupTransientMemory;

@end

