//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, PHPhotoLibraryChangeObserver>
{
    PHFetchResult *_importSessions;
}

+ (void)_updateFlowLayout:(id)arg1 withBounds:(struct CGRect)arg2 traitCollection:(id)arg3;
@property(retain, nonatomic) PHFetchResult *importSessions; // @synthesize importSessions=_importSessions;
- (void).cxx_destruct;
- (id)_assetsForSection:(long long)arg1;
- (id)_assetForIndexPath:(id)arg1;
- (void)_scrollToBottom:(id)arg1;
- (void)_reloadData;
- (void)photoLibraryDidChange:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_updateTitle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

