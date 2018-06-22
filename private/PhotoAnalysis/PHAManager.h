//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHAServiceOperationHandling.h"

@class NSDictionary, NSURL, PHAAssetResourceDataLoader, PHAExecutive, PHAGraphManager, PHAJobCoordinator, PHAMonitoring, PHPhotoLibrary;

@interface PHAManager : NSObject <PHAServiceOperationHandling>
{
    PHAMonitoring *_monitoring;
    PHAExecutive *_executive;
    PHAAssetResourceDataLoader *_dataLoader;
    PHAGraphManager *_graphManager;
    NSURL *_libraryURL;
    PHPhotoLibrary *_photoLibrary;
    PHAJobCoordinator *_jobCoordinator;
    NSDictionary *_photoAnalysisWorkersByType;
}

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(CDUnknownBlockType)arg1;
@property(retain) NSDictionary *photoAnalysisWorkersByType; // @synthesize photoAnalysisWorkersByType=_photoAnalysisWorkersByType;
@property(readonly) PHAGraphManager *graphManager; // @synthesize graphManager=_graphManager;
@property(readonly) PHAJobCoordinator *jobCoordinator; // @synthesize jobCoordinator=_jobCoordinator;
@property(retain) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (void).cxx_destruct;
- (id)monitoring;
- (void)enumerateWorkersUsingBlock:(CDUnknownBlockType)arg1;
- (id)faceProcessingServiceWorker;
- (id)sceneClassificationServiceWorker;
- (id)taxonomyServiceWorker;
- (id)faceClassificationServiceWorker;
- (id)autoloopServiceWorker;
- (id)graphServiceWorker;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleOperation:(id)arg1;
- (void)backgroundActivityDidBegin;
- (void)stopBackgroundActivity;
- (void)triggerBackgroundActivity;
- (void)checkForQuiescence;
- (id)statusAsDictionary;
- (void)shutdown;
- (_Bool)isInitialSyncActive;
- (_Bool)photosIsConnected;
- (void)setTurboMode;
- (_Bool)isTurboMode;
@property(readonly, getter=isQuiescent) _Bool quiescent;
- (id)description;
- (id)initWithPhotoLibraryURL:(id)arg1 executive:(id)arg2;
- (id)init;

@end

