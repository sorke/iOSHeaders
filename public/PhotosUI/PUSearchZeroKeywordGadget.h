//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "PXGadget.h"
#import "UICollectionViewDataSourcePrefetching.h"

@class NSObject<OS_dispatch_queue>, NSString, PUSearchHomeThumbnailManager, PUSearchZeroKeywordDataSource, PUSearchZeroKeywordGadgetLayout, PXGadgetSpec;

__attribute__((visibility("hidden")))
@interface PUSearchZeroKeywordGadget : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXGadget>
{
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    unsigned long long _placeTileFetchCounter;
    PUSearchZeroKeywordDataSource *_zeroKeywordDataSource;
    unsigned long long _dataSourceSection;
    long long _sectionType;
    PUSearchHomeThumbnailManager *_thumbnailManager;
    unsigned long long _cellLabelNumberOfLinesPermitted;
    NSObject<OS_dispatch_queue> *_placeTileFetchCounterQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *placeTileFetchCounterQueue; // @synthesize placeTileFetchCounterQueue=_placeTileFetchCounterQueue;
@property(nonatomic) unsigned long long cellLabelNumberOfLinesPermitted; // @synthesize cellLabelNumberOfLinesPermitted=_cellLabelNumberOfLinesPermitted;
@property(retain, nonatomic) PUSearchHomeThumbnailManager *thumbnailManager; // @synthesize thumbnailManager=_thumbnailManager;
@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, nonatomic) unsigned long long dataSourceSection; // @synthesize dataSourceSection=_dataSourceSection;
@property(readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource; // @synthesize zeroKeywordDataSource=_zeroKeywordDataSource;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)updateCellLabelNumberOfLinesWithScreenSize:(struct CGSize)arg1;
- (void)layoutPeopleViews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)getCellThumbnailSize;
- (struct CGSize)getCellSizeWithScreenWidth:(double)arg1;
- (struct CGSize)getCellSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_updateCurrentContentOffsetWithProposedOffset:(struct CGPoint)arg1;
@property(nonatomic) unsigned long long placeTileFetchCounter; // @synthesize placeTileFetchCounter=_placeTileFetchCounter;
- (void)_fetchPlaceThumbnailForCell:(id)arg1 itemType:(long long)arg2 key:(id)arg3 currentTag:(unsigned long long)arg4;
- (void)_configureCellLabelNumberOfLinesWithScreenSize:(struct CGSize)arg1;
@property(readonly, nonatomic) PUSearchZeroKeywordGadgetLayout *zeroKeywordGadgetLayout;
- (void)_configureCollectionView;
- (id)debugURLsForDiagnostics;
- (_Bool)hasLoadedContentData;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct NSObject *)contentViewController;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 dataSourceSection:(unsigned long long)arg2 sectionType:(long long)arg3;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) struct CGRect visibleContentRect;

@end

