//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NSCache, NSMutableArray, NSMutableDictionary;

@interface NTKCompanionCustomPhotosEditor : NTKCompanionResourceDirectoryEditor
{
    NSMutableDictionary *_pickedPhotos;
    NSMutableDictionary *_newPhotos;
    NSMutableArray *_orderList;
    NSCache *_scaledImageCache;
    _Bool _previewIsValid;
}

- (void).cxx_destruct;
- (void)_reinitializeWithImageList:(id)arg1 andResourceDirectory:(id)arg2;
- (id)_copyOrTranscodePhotosTo:(id)arg1;
- (id)_fetchAssetsForNewPhotos:(id)arg1;
- (void)_fetchAssetsForPickedPhotos;
- (void)_readPickedPhotosFrom:(id)arg1;
- (struct CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1;
- (struct CGRect)originalCropForPhotoAtIndex:(long long)arg1;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPhotoInPhotoLibraryAtIndex:(long long)arg1;
- (_Bool)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1;
- (_Bool)setOriginalCrop:(struct CGRect)arg1 forPhotoAtIndex:(long long)arg2;
- (void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deletePhotoAtIndex:(long long)arg1;
- (_Bool)addAssetsFromAssetList:(id)arg1;
- (_Bool)addPhotosFromUIImagePicker:(id)arg1;
@property(readonly, nonatomic) long long photosCount;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;

@end

