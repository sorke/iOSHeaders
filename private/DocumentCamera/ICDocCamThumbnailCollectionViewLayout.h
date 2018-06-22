//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailCollectionViewLayout : UICollectionViewLayout
{
    _Bool _transitioning;
    _Bool _compactLayout;
    id <ICDocCamThumbnailViewLayoutDelegate> _delegate;
    NSDictionary *_layoutInfo;
    NSMutableArray *_deleteIndexPaths;
    NSMutableArray *_insertIndexPaths;
    struct CGSize _itemSize;
}

@property(retain, nonatomic) NSMutableArray *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(retain, nonatomic) NSMutableArray *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(retain, nonatomic) NSDictionary *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) _Bool compactLayout; // @synthesize compactLayout=_compactLayout;
@property(nonatomic) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) __weak id <ICDocCamThumbnailViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGRect)frameForThumbnailAtIndexPath:(id)arg1;
- (struct CGRect)compactFrameForThumbnailAtIndexPath:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGSize)frameSizeForImageSize:(struct CGSize)arg1;
- (void)finalizeLayoutTransition;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout:(_Bool)arg1;
- (void)prepareLayout;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

