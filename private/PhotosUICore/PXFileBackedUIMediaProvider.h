//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXUIMediaProvider.h>

@class NSCache, NSOperationQueue;

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider
{
    NSOperationQueue *_queue;
    NSCache *_cache;
}

- (void).cxx_destruct;
- (void)_handleImageCreated:(id)arg1 imageKey:(id)arg2;
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize)arg3 bakeInOrientation:(_Bool)arg4 error:(id *)arg5;
- (id)_createImageForKey:(id)arg1 error:(id *)arg2;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

