//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PUDebugSceneGridViewController : PUPhotosAlbumViewController
{
    NSNumber *_sceneIdentifier;
}

+ (CDUnknownBlockType)assetResourceLargestToSmallestComparator;
@property(retain, nonatomic) NSNumber *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void).cxx_destruct;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (id)assetResourceFromAcceptableAssetResources:(id)arg1;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id *)arg2;
- (_Bool)_isJunkSceneIdentifer:(id)arg1;
- (double)_thresholdForSceneIdentifer:(id)arg1;
- (id)_keywordForSceneIdentifier:(id)arg1;
- (id)_assetResourceForAsset:(id)arg1;
- (id)_assetResourcesForAssets:(id)arg1;
- (id)_assetPathsForAssets:(id)arg1;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (void)_tappedFileRadarButton:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (_Bool)allowSlideshowButton;
- (id)_newEditActionItemsWithWideSpacing:(_Bool)arg1;
- (double)globalHeaderHeight;
- (void)configureGlobalHeaderView:(id)arg1;
- (id)_globalHeaderTitle;

@end
