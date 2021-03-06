//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceWorker.h>

#import "PLPhotoAnalysisVisionServiceSceneClassificationProtocol.h"
#import "PLPhotoAnalysisVisionServiceTaxonomyProtocol.h"

@class NSDictionary;

@interface PHAVisionServiceSceneClassificationWorker : PHAVisionServiceWorker <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PLPhotoAnalysisVisionServiceSceneClassificationProtocol>
{
    NSDictionary *_imageSourceOptions;
    _Bool _disabledByUserDefaults;
}

+ (long long)applicationDataFolderIdentifier;
+ (_Bool)runsExclusively;
+ (short)workerType;
+ (void)initialize;
- (void).cxx_destruct;
- (void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2;
- (_Bool)supportsCoalescingResults;
- (_Bool)processAsset:(id)arg1 error:(id *)arg2;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (_Bool)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2;
- (void)_recordJunkClassificationForAsset:(id)arg1;
- (_Bool)isEnabled;
- (id)newAssetFetchOptions;
- (void)cooldown;
- (id)sceneTaxonomyHash;
- (void)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)localizedLabelForSceneIdentifier:(unsigned int)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (id)_performAnalysisOfAssetResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3;
- (id)_performAndPersistAnalysisWithHandler:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3;
- (id)_performAndPersistAnalysisOfImageData:(id)arg1 withOrientation:(unsigned int)arg2 withAttributes:(id)arg3 forAsset:(id)arg4;
- (id)_performAndPersistAnalysisOfImageFileAtURL:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3;
- (id)_computeImageprintForAsset:(id)arg1 usingRequestHandler:(id)arg2 error:(id *)arg3;
- (id)_performSceneClassificationOfAsset:(id)arg1 usingRequestHandler:(id)arg2;
- (_Bool)getLocallyAvailableAssetResource:(id *)arg1 forAnalyzingAsset:(id)arg2 error:(id *)arg3;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (struct CGImage *)_newCGImageRefForAssetResourceFileURL:(id)arg1 orientation:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_reclassificationOfSceneNeededForAsset:(id)arg1;
- (void)pingSceneWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

@end

