//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUAlbumListViewControllerSpec, PUSessionInfo, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUAlbumNavigationHelperParams : NSObject
{
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUSessionInfo *_sessionInfo;
    PUAlbumListViewControllerSpec *_spec;
    id <PXGridPresentation> _gridPresentation;
}

@property(retain, nonatomic) id <PXGridPresentation> gridPresentation; // @synthesize gridPresentation=_gridPresentation;
@property(retain, nonatomic) PUAlbumListViewControllerSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSource *dataSource;

@end

