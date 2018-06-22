//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>

#import "PXPhotoLibraryUIChangeObserver.h"

@class NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, PHPhotoLibrary, PXCMMMomentShareInvitationsDataSource, PXCMMMomentShareInvitationsDataSourceState;

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isLoading;
    _Bool _hasCreatedInitialDataSource;
    PXCMMMomentShareInvitationsDataSourceState *_state;
    NSMutableOrderedSet *_remainingMomentShareObjectIDsToFetch;
}

+ (id)mockOutgoingDataSourceManager;
+ (id)mockIncomingDataSourceManager;
+ (id)dataSourceManager;
+ (id)_dataSourceManagerWithPredicate:(id)arg1;
+ (id)emptyDataSourceManager;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;
- (void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)arg1;
- (void)_startLoadingIfNeeded;
- (id)momentShares;
- (id)createInitialDataSource;
- (void)dealloc;
- (id)init;
- (id)_initWithFetchResult:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXCMMMomentShareInvitationsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

