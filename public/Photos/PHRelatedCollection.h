//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSArray, NSString, PHObject;

@interface PHRelatedCollection : PHAssetCollection
{
    long long _titleCategory;
    unsigned long long _relationType;
    NSArray *_debugInfo;
    PHObject *_relatedObject;
    NSArray *_momentLocalIdentifiers;
    NSString *_subtitle;
}

+ (id)_transientCollectionListWithCollectionsRelatedToIdentifiers:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 photoLibrary:(id)arg4;
+ (id)transientCollectionListWithCollectionsRelatedToPersons:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)transientCollectionListWithCollectionsRelatedToObject:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)_relatedCollectionsFromInfos:(id)arg1 relatedObject:(id)arg2;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSArray *momentLocalIdentifiers; // @synthesize momentLocalIdentifiers=_momentLocalIdentifiers;
@property(readonly, nonatomic) PHObject *relatedObject; // @synthesize relatedObject=_relatedObject;
@property(readonly, nonatomic) NSArray *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(readonly, nonatomic) unsigned long long relationType; // @synthesize relationType=_relationType;
- (void).cxx_destruct;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (long long)titleCategory;
- (id)localizedSubtitle;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 relationType:(unsigned long long)arg3 relatedObject:(id)arg4 title:(id)arg5 subtitle:(id)arg6 titleCategory:(long long)arg7 momentLocalIdentifiers:(id)arg8 debugInfo:(id)arg9;

@end

