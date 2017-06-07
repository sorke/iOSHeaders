//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSManagedObjectID, NSString, NSURL, PLManagedAsset, PLPhotoLibrary;

@protocol _PLImageLoadingAsset <NSObject>
- (unsigned long long)localResourcesState;
- (_Bool)isOriginalSRGB;
- (void)generateLargeThumbnailFileIfNecessary;
- (_Bool)isTimelapsePlaceholder;
- (PLManagedAsset *)managedAssetForPhotoLibrary:(PLPhotoLibrary *)arg1;
- (double)duration;
- (long long)cloudPlaceholderKind;
- (_Bool)isCloudPlaceholder;
- (_Bool)isCloudPhotoLibraryAsset;
- (long long)cloudSharedAssetPlaceholderKind;
- (_Bool)isCloudSharedAsset;
- (_Bool)isInFlight;
- (NSURL *)fileURLForFullsizeRenderImage;
- (NSURL *)fileURLForFullsizeRenderVideo;
- (NSString *)pathForNonAdjustedSRGBLargeThumbnailFile;
- (NSString *)pathForAdjustedSRGBLargeThumbnailFile;
- (NSString *)pathForSRGBLargeThumbnailFile;
- (NSString *)pathForVideoPreviewFile;
- (NSString *)pathForMediumThumbnailFile;
- (NSString *)pathForLargeThumbnailFile;
- (NSString *)pathForNonAdjustedFullsizeImageFile;
- (NSString *)pathForFullsizeRenderImageFile;
- (NSString *)pathForAdjustmentDataFile;
- (NSString *)pathForAdjustmentFile;
- (NSString *)pathForPenultimateFullsizeRenderVideoFile;
- (NSString *)pathForPenultimateFullsizeRenderImageFile;
- (NSString *)pathForSubstandardFullsizeRenderImageFile;
- (NSString *)pathForOriginalFile;
- (NSString *)originalFileName;
- (int)orientation;
- (_Bool)isStreamedVideo;
- (_Bool)isPartOfBurst;
- (_Bool)isRAW;
- (_Bool)isJPEG;
- (_Bool)isVideo;
- (NSString *)uniformTypeIdentifier;
- (NSManagedObjectID *)objectID;
- (struct CGSize)imageSize;
- (NSString *)thumbnailIdentifier;
- (_Bool)complete;
- (short)kindSubtype;
- (short)kind;
- (short)savedAssetType;
- (NSString *)uuid;
- (unsigned long long)effectiveThumbnailIndex;
- (NSString *)debugFilename;
- (_Bool)hasAdjustments;
- (_Bool)hasLegacyAdjustments;
- (long long)originalImageOrientation;
- (NSURL *)assetsLibraryURL;
- (double)aspectRatio;
- (PLPhotoLibrary *)pl_photoLibrary;
@end
