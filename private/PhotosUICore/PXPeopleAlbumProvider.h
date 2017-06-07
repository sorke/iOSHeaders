//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDataSourceDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableDictionary, NSString, PHPhotoLibrary, PXPeoplePersonDataSource, PXPeopleProgressManager;
@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleDataSourceDelegate, PXPhotoLibraryUIChangeObserver>
{
    _Bool _didInitiateReCacheRequest;
    _Bool _didInitiatePeopleCountFetchRequest;
    _Bool _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
    // Error parsing type: Ai, name: _currentRequestId
    PXPeoplePersonDataSource *_favoriteDS;
    PXPeoplePersonDataSource *_otherDS;
    PXPeopleProgressManager *_progressMgr;
    CDUnknownBlockType _requestCompletion;
    long long _cachedPeopleCount;
    NSMutableDictionary *_imageCache;
    struct CGSize _imageSize;
}

@property(retain) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
// Error parsing type for property currentRequestId:
// Property attributes: TAi,V_currentRequestId

@property(nonatomic) long long cachedPeopleCount; // @synthesize cachedPeopleCount=_cachedPeopleCount;
@property(copy, nonatomic) CDUnknownBlockType requestCompletion; // @synthesize requestCompletion=_requestCompletion;
@property(retain, nonatomic) PXPeopleProgressManager *progressMgr; // @synthesize progressMgr=_progressMgr;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) PXPeoplePersonDataSource *otherDS; // @synthesize otherDS=_otherDS;
@property(retain, nonatomic) PXPeoplePersonDataSource *favoriteDS; // @synthesize favoriteDS=_favoriteDS;
- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_invalidateCache;
- (void)imageCacheDidChanged:(id)arg1;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (_Bool)_shouldShowInterstitialProgress;
- (void)_handleRequestResult:(id)arg1 forRequestID:person:atIndex:error:completion: /* Error: Ran out of types for this method. */;
- (void)_asyncAddImagesToCacheWithItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reCacheImagesCompletion:(CDUnknownBlockType)arg1;
- (id)_members;
@property(readonly, nonatomic) long long peopleCount;
- (void)_updateCachedCountIfNeeded;
@property(readonly, nonatomic, getter=isCountAvailable) _Bool countAvailable;
- (id)peopleViewController;
- (void)requestAlbumImagesWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_prepareIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
