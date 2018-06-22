//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import "PXCollectionsDataSourceManagerObserver.h"
#import "PXNavigationListDataSourceManagerObserver.h"

@class NSMapTable, NSMutableDictionary, NSString, PXArrayChangeDetails, PXNavigationListDataSource, PXNavigationListDataSourceConfiguration, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager;

@interface PXNavigationListDataSourceManager : PXSectionedDataSourceManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSourceManagerObserver>
{
    NSMutableDictionary *_childDataSourceManagers;
    NSMutableDictionary *_childDataSourceIndexes;
    NSMapTable *_parentListItems;
    PXNavigationListDataSourceConfiguration *_configuration;
    PXPhotoKitCollectionsDataSourceManager *_collectionsDataSourceManager;
    PXPhotoKitCollectionsDataSource *_collectionsDataSource;
    PXArrayChangeDetails *_latestArrayChangeDetails;
    PXNavigationListDataSource *_latestDataSource;
}

@property(retain, nonatomic) PXNavigationListDataSource *latestDataSource; // @synthesize latestDataSource=_latestDataSource;
@property(retain, nonatomic) PXArrayChangeDetails *latestArrayChangeDetails; // @synthesize latestArrayChangeDetails=_latestArrayChangeDetails;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSource *collectionsDataSource; // @synthesize collectionsDataSource=_collectionsDataSource;
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager; // @synthesize collectionsDataSourceManager=_collectionsDataSourceManager;
@property(readonly, nonatomic) PXNavigationListDataSourceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(readonly, copy) NSString *description;
- (id)createInitialDataSource;
- (id)childDataSourceManagerForItem:(id)arg1;
- (void)collapseListItem:(id)arg1 hintIndex:(long long)arg2;
- (void)expandListItem:(id)arg1 hintIndex:(long long)arg2;
- (void)resumeBackgroundFetchingIfNeeded;
- (id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSource:(id)arg2 expanding:(_Bool)arg3;
- (void)_updateDataSourceWithChangeDetailsHint:(id)arg1 changeDetailsByItem:(id)arg2;
- (id)_newDataSource;
- (id)_newCollectionsDataSourceManager;
- (id)init;
- (id)initWithCollectionList:(id)arg1 indentationLevel:(long long)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXNavigationListDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

