//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressReporting.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSProgress, NSString, PHAsset;

@interface PHResourceDownloadRequest : NSObject <NSProgressReporting>
{
    NSMutableDictionary *_progressByRequestIdentifier;
    CDUnknownBlockType _downloadCompletionHandler;
    _Bool __downloadCancelled;
    PHAsset *_asset;
    long long _requestType;
    double _progressFraction;
    NSProgress *_progress;
    CDUnknownBlockType _progressChangeHandler;
    NSArray *__assetResources;
    NSMutableArray *__activeAssetResourcesRequest;
}

+ (id)resourceInfoForAsset:(id)arg1 requestType:(long long)arg2 error:(id *)arg3;
+ (id)indexesForAssetsWithoutThumbnails:(id)arg1 requestType:(long long)arg2;
+ (id)indexesForAssetsRequiringDownload:(id)arg1 requestType:(long long)arg2;
+ (id)_resourceInfoForAsset:(id)arg1 resourcesToShare:(id)arg2 fulfillOnDemandResources:(_Bool)arg3 error:(id *)arg4;
+ (id)_resourcesToShareForAsset:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)_resourcesToShareForAsset:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSMutableArray *_activeAssetResourcesRequest; // @synthesize _activeAssetResourcesRequest=__activeAssetResourcesRequest;
@property(retain, nonatomic, setter=_setAssetResources:) NSArray *_assetResources; // @synthesize _assetResources=__assetResources;
@property(nonatomic, getter=_isDownloadCancelled, setter=_setDownloadCancelled:) _Bool _downloadCancelled; // @synthesize _downloadCancelled=__downloadCancelled;
@property(copy, nonatomic) CDUnknownBlockType progressChangeHandler; // @synthesize progressChangeHandler=_progressChangeHandler;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic, setter=_setProgressFraction:) double progressFraction; // @synthesize progressFraction=_progressFraction;
@property(readonly) long long requestType; // @synthesize requestType=_requestType;
@property(readonly) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (_Bool)isDownloadingRequiredForOptions:(id)arg1 resourceInfo:(id *)arg2;
- (void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(_Bool)arg3;
- (void)cancelDownloadRequest;
- (void)_cancelActiveAssetResourceRequests;
- (void)_didFinishDownloadWithSuccess:(_Bool)arg1 resourceInfo:(id)arg2 error:(id)arg3;
- (void)_simulateFetchResourcesWithDuration:(double)arg1 success:(_Bool)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg1 error:(id)arg2;
- (void)_fetchResourcesForDuplicatingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesForSharingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesForPickerAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesForEditingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesWithOptions:(id)arg1 networkAccessAllowed:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)downloadRequiredResourcesWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchIsDownloadRequiredWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAsset:(id)arg1 requestType:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

