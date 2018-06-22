//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXObservable.h"

#import "PXAssetsDataSourceManagerObserver.h"

@class AEProgressViewModelSnapshot, NSDictionary, NSString, PXAssetsDataSourceManager;

__attribute__((visibility("hidden")))
@interface AEProgressViewModel : PXObservable <PXAssetsDataSourceManagerObserver>
{
    AEProgressViewModelSnapshot *_currentSnapshot;
    PXAssetsDataSourceManager *__dataSourceManager;
    NSDictionary *__progressByAsset;
}

@property(retain, nonatomic, setter=_setProgressByAsset:) NSDictionary *_progressByAsset; // @synthesize _progressByAsset=__progressByAsset;
@property(readonly, nonatomic) PXAssetsDataSourceManager *_dataSourceManager; // @synthesize _dataSourceManager=__dataSourceManager;
- (void).cxx_destruct;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)setProgress:(id)arg1 forAssetReference:(id)arg2;
- (id)_createSnapshot;
@property(readonly, nonatomic) AEProgressViewModelSnapshot *progressSnapshot;
- (void)dealloc;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

