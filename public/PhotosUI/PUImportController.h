//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXObservable.h"

#import "PHImportServiceImporterDelegate.h"
#import "PHImportSourceDelegate.h"
#import "PUImportAssetsDataSourceManagerDelegate.h"
#import "PUImportMediaProviderNotificationsReceiver.h"
#import "PUMutableImportController.h"
#import "PXChangeObserver.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSObject<PUImportControllerImportCompletionDelegate>, NSProgress, NSString, NSTimer, PHAssetCollection, PHImportController, PHImportSource, PUImportAssetsDataSourceManager, PUImportDeleteAction, PUImportMediaProvider, PUImportPowerController, PUImportSessionInfo, PXSectionedSelectionManager, PXSelectionSnapshot;

@interface PUImportController : PXObservable <PUImportAssetsDataSourceManagerDelegate, PUMutableImportController, PHImportServiceImporterDelegate, PHImportSourceDelegate, PUImportMediaProviderNotificationsReceiver, PXChangeObserver>
{
    NSArray *_lastSelectedModels;
    _Bool _loadingContent;
    _Bool _userRequiredToTrustHostOnSourceDevice;
    _Bool _importingAssets;
    _Bool _deletingAssets;
    _Bool _alreadyImportedItemsSelectable;
    _Bool _hasLoadedAssets;
    unsigned int _importAssetsPowerAssertionIdentifier;
    unsigned int _deleteAssetsPowerAssertionIdentifier;
    unsigned int _loadAssetsPowerAssertionIdentifier;
    PHImportController *_photosImportController;
    PHImportSource *_importSource;
    PUImportMediaProvider *_importMediaProvider;
    NSObject<PUImportControllerImportCompletionDelegate> *_importCompletionDelegate;
    PUImportAssetsDataSourceManager *_dataSourceManager;
    PUImportSessionInfo *_importSessionInfo;
    NSProgress *_importProgress;
    PHAssetCollection *_importDestinationAlbum;
    PUImportDeleteAction *_deleteAction;
    PXSectionedSelectionManager *_selectionManager;
    NSMutableDictionary *_sharedViewModelsById;
    NSMutableSet *_otherDataSourceManagers;
    PUImportPowerController *_powerController;
    NSTimer *_assetLoadingPowerAssertionTimer;
    CDUnknownBlockType _importCompletionHandler;
    CDUnknownBlockType _deleteCompletionHandler;
    PXSelectionSnapshot *_lastSelectionSnapshot;
}

+ (void)unregisterPUImportControllerNotificationsReceiver:(struct NSObject *)arg1;
+ (void)registerPUImportControllerNotificationsReceiver:(struct NSObject *)arg1;
+ (id)itemsConstrainedByAvailableDiskSpaceFromItems:(id)arg1 additionalBytesRequired:(inout long long *)arg2;
+ (id)assetsForModels:(id)arg1;
+ (id)importOperationQueue;
@property(retain, nonatomic) PXSelectionSnapshot *lastSelectionSnapshot; // @synthesize lastSelectionSnapshot=_lastSelectionSnapshot;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionHandler; // @synthesize deleteCompletionHandler=_deleteCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType importCompletionHandler; // @synthesize importCompletionHandler=_importCompletionHandler;
@property(retain, nonatomic) NSTimer *assetLoadingPowerAssertionTimer; // @synthesize assetLoadingPowerAssertionTimer=_assetLoadingPowerAssertionTimer;
@property(nonatomic) unsigned int loadAssetsPowerAssertionIdentifier; // @synthesize loadAssetsPowerAssertionIdentifier=_loadAssetsPowerAssertionIdentifier;
@property(nonatomic) unsigned int deleteAssetsPowerAssertionIdentifier; // @synthesize deleteAssetsPowerAssertionIdentifier=_deleteAssetsPowerAssertionIdentifier;
@property(nonatomic) unsigned int importAssetsPowerAssertionIdentifier; // @synthesize importAssetsPowerAssertionIdentifier=_importAssetsPowerAssertionIdentifier;
@property(retain, nonatomic) PUImportPowerController *powerController; // @synthesize powerController=_powerController;
@property(readonly, nonatomic) NSMutableSet *otherDataSourceManagers; // @synthesize otherDataSourceManagers=_otherDataSourceManagers;
@property(readonly, nonatomic) NSMutableDictionary *sharedViewModelsById; // @synthesize sharedViewModelsById=_sharedViewModelsById;
@property(nonatomic) _Bool hasLoadedAssets; // @synthesize hasLoadedAssets=_hasLoadedAssets;
@property(nonatomic) _Bool alreadyImportedItemsSelectable; // @synthesize alreadyImportedItemsSelectable=_alreadyImportedItemsSelectable;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain, nonatomic) PUImportDeleteAction *deleteAction; // @synthesize deleteAction=_deleteAction;
@property(readonly, nonatomic, getter=isDeletingAssets) _Bool deletingAssets; // @synthesize deletingAssets=_deletingAssets;
@property(retain, nonatomic) PHAssetCollection *importDestinationAlbum; // @synthesize importDestinationAlbum=_importDestinationAlbum;
@property(retain, nonatomic) NSProgress *importProgress; // @synthesize importProgress=_importProgress;
@property(retain, nonatomic) PUImportSessionInfo *importSessionInfo; // @synthesize importSessionInfo=_importSessionInfo;
@property(readonly, nonatomic, getter=isImportingAssets) _Bool importingAssets; // @synthesize importingAssets=_importingAssets;
@property(nonatomic, getter=isUserRequiredToTrustHostOnSourceDevice) _Bool userRequiredToTrustHostOnSourceDevice; // @synthesize userRequiredToTrustHostOnSourceDevice=_userRequiredToTrustHostOnSourceDevice;
@property(readonly, nonatomic, getter=isLoadingContent) _Bool loadingContent; // @synthesize loadingContent=_loadingContent;
@property(readonly, nonatomic) PUImportAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(nonatomic) __weak NSObject<PUImportControllerImportCompletionDelegate> *importCompletionDelegate; // @synthesize importCompletionDelegate=_importCompletionDelegate;
@property(readonly, nonatomic) PUImportMediaProvider *importMediaProvider; // @synthesize importMediaProvider=_importMediaProvider;
@property(readonly, nonatomic) PHImportSource *importSource; // @synthesize importSource=_importSource;
@property(readonly, nonatomic) PHImportController *photosImportController; // @synthesize photosImportController=_photosImportController;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)assetLoadingPowerAssertionTimerFired;
- (void)stopTimedAssetsLoadingPowerAssertion;
- (void)restartTimedAssetsLoadingPowerAssertion;
- (void)stopObservingImportProgress;
- (void)startObservingImportProgress;
- (void)sendActionProgress:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_dequeueNextThumbnailWorkItem;
- (void)mediaProviderThumbnailingBecameIdle;
- (id)selectedItems;
- (void)deselectItem:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)setSelected:(_Bool)arg1 forItems:(id)arg2;
- (void)finishDeletingItems;
- (void)deleteItems:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setDeletingAssets:(_Bool)arg1;
- (void)completedImportRecord:(id)arg1;
- (void)finishImportingWithResults:(id)arg1;
- (void)stopImport;
- (void)importItems:(id)arg1 toDestination:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setImportingAssets:(_Bool)arg1;
- (id)viewModelMapForImportAssetsDataSourceManager:(id)arg1;
- (void)removeDataSourceManager:(id)arg1;
- (id)createDataSourceManager;
- (void)userHasTrustedHostForImportSource:(id)arg1;
- (void)userRequiredToTrustHostForImportSource:(id)arg1;
- (_Bool)shouldImportAsset:(id)arg1 asDuplicateOfLibraryAsset:(id)arg2 applyToAll:(_Bool *)arg3;
- (void)importSource:(id)arg1 didDeleteAsset:(id)arg2;
- (void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;
- (void)importSource:(id)arg1 didRemoveAssets:(id)arg2;
- (void)importSource:(id)arg1 didAddAssets:(id)arg2;
- (void)loadAssets;
- (void)setLoadingContent:(_Bool)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)shutdown;
- (id)initWithPhotosImportController:(id)arg1 importSource:(id)arg2 importCompletionDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

