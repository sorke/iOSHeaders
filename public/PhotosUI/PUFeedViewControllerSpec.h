//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, PUPhotosGridViewControllerSpec, PUPhotosPickerViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerSpec : NSObject
{
    int _squareThumbnailFastImageFormat;
    int _squareThumbnailQualityImageFormat;
    int _smallTileFastImageFormat;
    int _smallTileQualityImageFormat;
    int _smallTilePanoQualityImageFormat;
    int _mediumTileFastImageFormat;
    int _mediumTileQualityImageFormat;
    int _largeTileFastImageFormat;
    int _largeTileQualityImageFormat;
    int _veryLargeTileFastImageFormat;
    int _veryLargeTileQualityImageFormat;
    struct CGSize _squareThumbnailMaximumSize;
    struct CGSize _smallTileMaximumFittingSize;
    double _smallTilePanoAspectRatio;
    struct CGSize _mediumTileMaximumFillingSize;
    struct CGSize _largeTileMaximumFillingSize;
    _Bool _shouldUseAspectThumbnails;
    _Bool _shouldHideBarsInLandscape;
    _Bool _shouldShowInvitationsInPopover;
    _Bool _shouldUseFullscreenLayout;
    NSIndexSet *_qualityImageFormats;
    long long _largeNumberOfSubjectsForLikes;
    PUFeedViewControllerSpec *_popoverFeedViewControllerSpec;
    PUPhotosGridViewControllerSpec *_gridSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerSpec;
    long long _promptStyle;
    double _collectionViewContentInset;
    double _standardSideMargins;
    struct CGSize _minimumVideoTileSize;
    struct CGSize _thumbnailSize;
}

@property(readonly, nonatomic) double standardSideMargins; // @synthesize standardSideMargins=_standardSideMargins;
@property(readonly, nonatomic) double collectionViewContentInset; // @synthesize collectionViewContentInset=_collectionViewContentInset;
@property(readonly, nonatomic) _Bool shouldUseFullscreenLayout; // @synthesize shouldUseFullscreenLayout=_shouldUseFullscreenLayout;
@property(readonly, nonatomic) long long promptStyle; // @synthesize promptStyle=_promptStyle;
@property(readonly, nonatomic) PUPhotosPickerViewControllerSpec *photosPickerSpec; // @synthesize photosPickerSpec=_photosPickerSpec;
@property(readonly, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
@property(readonly, nonatomic) PUFeedViewControllerSpec *popoverFeedViewControllerSpec; // @synthesize popoverFeedViewControllerSpec=_popoverFeedViewControllerSpec;
@property(readonly, nonatomic) _Bool shouldShowInvitationsInPopover; // @synthesize shouldShowInvitationsInPopover=_shouldShowInvitationsInPopover;
@property(readonly, nonatomic) _Bool shouldHideBarsInLandscape; // @synthesize shouldHideBarsInLandscape=_shouldHideBarsInLandscape;
@property(readonly, nonatomic) _Bool shouldUseAspectThumbnails; // @synthesize shouldUseAspectThumbnails=_shouldUseAspectThumbnails;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(readonly, nonatomic) long long largeNumberOfSubjectsForLikes; // @synthesize largeNumberOfSubjectsForLikes=_largeNumberOfSubjectsForLikes;
@property(readonly, nonatomic) struct CGSize minimumVideoTileSize; // @synthesize minimumVideoTileSize=_minimumVideoTileSize;
@property(copy, nonatomic, setter=_setQualityImageFormats:) NSIndexSet *qualityImageFormats; // @synthesize qualityImageFormats=_qualityImageFormats;
- (void).cxx_destruct;
- (double)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(_Bool)arg4 collectionViewType:(long long)arg5;
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (void)configureGradientCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(long long)arg2;
- (struct CGSize)thumbnailSizeForImageSize:(struct CGSize)arg1;
- (id)defaultSubTitleTextAttributesForCollectionViewType:(long long)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2 date:(id)arg3;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2 date:(id)arg3;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2 date:(id)arg3;
- (double)textDetailTextSpacing:(id)arg1;
- (_Bool)shouldShowCommentBadgesInCollectionViewType:(long long)arg1;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1;
- (struct UIEdgeInsets)contentInsetsForSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (struct UIEdgeInsets)textInsetsForHeadersAndFootersInSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3;
- (void)setLayoutReferenceWidth:(double)arg1;
- (void)getFastImageFormat:(out int *)arg1 qualityImageFormat:(out int *)arg2 forSourceSize:(struct CGSize)arg3 destinationSize:(struct CGSize)arg4 allowCrop:(_Bool)arg5;
- (void)updateFormats;
- (_Bool)canUseSimplePreheatManager;
- (id)init;

@end

