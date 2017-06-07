//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/LKDocumentStore.h>

#import <NanoTimeKitCompanion/LKDocumentStoreDelegate-Protocol.h>

@class NSString, _NTKMicaDocumentFaceSnapshottingWindow;

@interface NTKMicaDocumentStore : LKDocumentStore <LKDocumentStoreDelegate>
{
    _NTKMicaDocumentFaceSnapshottingWindow *_snapshotWindow;
}

+ (void)removeCachedThumbnailImageForDocument:(id)arg1;
+ (void)cacheThumbnailImage:(id)arg1 forKey:(id)arg2;
+ (id)cachedThumbnailImageForKey:(id)arg1;
+ (_Bool)_hasWriteAccess;
+ (unsigned long long)indexOfDocument:(id)arg1;
+ (id)allDocuments;
- (void).cxx_destruct;
- (void)_redrawSnapshotForDocument:(id)arg1;
- (void)_asynchronouslySnapshotView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didRemoveDocument:(id)arg1;
- (void)_didModifyDocument:(id)arg1;
- (void)_didAddDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
