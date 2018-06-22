//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLDismissableViewController.h"
#import "PUAvalancheReviewControllerDelegate.h"
#import "PUCollectionViewLayoutProvider.h"
#import "PUFunEffectsViewControllerObserver.h"
#import "PUOneUpPhotosSharingTransitionDelegate.h"
#import "PUPhotoEditViewControllerPresentationDelegate.h"
#import "PUPhotoMarkupViewControllerObserver.h"
#import "PUPhotosSharingViewControllerDelegate.h"
#import "PUSlideshowViewControllerDelegate.h"
#import "PUVideoEditViewControllerPresentationDelegate.h"

@class NSHashTable, NSString, PUAssetReference, PUAvalancheReviewController, PUEditViewController, PUFunEffectsViewController, PUPhotoMarkupViewController, PUPhotosSharingViewController, PUSlideshowViewController;

@interface PUOverOneUpPresentationSession : NSObject <PUPhotoEditViewControllerPresentationDelegate, PUVideoEditViewControllerPresentationDelegate, PUSlideshowViewControllerDelegate, PUAvalancheReviewControllerDelegate, PUPhotosSharingViewControllerDelegate, PUOneUpPhotosSharingTransitionDelegate, PUCollectionViewLayoutProvider, PLDismissableViewController, PUPhotoMarkupViewControllerObserver, PUFunEffectsViewControllerObserver>
{
    struct {
        _Bool respondsToTilingView;
        _Bool respondsToViewController;
        _Bool respondsToBrowsingViewModel;
        _Bool respondsToDidPresent;
        _Bool respondsToDidFinish;
        _Bool respondsToIsReady;
    } _delegateFlags;
    struct {
        _Bool respondsToActivities;
        _Bool respondsToBarButtonItem;
        _Bool respondsToDidAppendReviewScreenAction;
    } _barsDelegateFlags;
    _Bool __needsUpdatePresentedViewControllers;
    id <PUOverOneUpPresentationSessionDelegate> _delegate;
    id <PUOverOneUpPresentationSessionBarsDelegate> _barsDelegate;
    PUPhotosSharingViewController *__sharingViewController;
    PUAvalancheReviewController *__avalancheReviewController;
    PUSlideshowViewController *__slideshowViewController;
    PUEditViewController *__editViewController;
    PUPhotoMarkupViewController *__photoMarkupViewController;
    PUFunEffectsViewController *__funEffectsViewController;
    PUAssetReference *__stashedAssetReference;
    struct NSHashTable *__presentedViewControllers;
}

@property(nonatomic, setter=_setNeedsUpdatePresentedViewControllers:) _Bool _needsUpdatePresentedViewControllers; // @synthesize _needsUpdatePresentedViewControllers=__needsUpdatePresentedViewControllers;
@property(retain, nonatomic, setter=_setPresentedViewControllers:) NSHashTable *_presentedViewControllers; // @synthesize _presentedViewControllers=__presentedViewControllers;
@property(copy, nonatomic, setter=_setStashedAssetReference:) PUAssetReference *_stashedAssetReference; // @synthesize _stashedAssetReference=__stashedAssetReference;
@property(retain, nonatomic, setter=_setFunEffectsViewController:) PUFunEffectsViewController *_funEffectsViewController; // @synthesize _funEffectsViewController=__funEffectsViewController;
@property(retain, nonatomic, setter=_setPhotoMarkupViewController:) PUPhotoMarkupViewController *_photoMarkupViewController; // @synthesize _photoMarkupViewController=__photoMarkupViewController;
@property(retain, nonatomic, setter=_setEditViewController:) PUEditViewController *_editViewController; // @synthesize _editViewController=__editViewController;
@property(retain, nonatomic, setter=_setSlideshowViewController:) PUSlideshowViewController *_slideshowViewController; // @synthesize _slideshowViewController=__slideshowViewController;
@property(retain, nonatomic, setter=_setAvalancheReviewController:) PUAvalancheReviewController *_avalancheReviewController; // @synthesize _avalancheReviewController=__avalancheReviewController;
@property(retain, nonatomic, setter=_setSharingViewController:) PUPhotosSharingViewController *_sharingViewController; // @synthesize _sharingViewController=__sharingViewController;
@property(nonatomic) __weak id <PUOverOneUpPresentationSessionBarsDelegate> barsDelegate; // @synthesize barsDelegate=_barsDelegate;
@property(nonatomic) __weak id <PUOverOneUpPresentationSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ppt_presentPhotoEditor;
- (void)ppt_cancelActivity;
- (void)ppt_shareUsingActivityOfType:(id)arg1;
- (void)ppt_dismissShareSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)ppt_tapNextButton:(CDUnknownBlockType)arg1;
- (void)ppt_presentShareSheetWithCompletion:(CDUnknownBlockType)arg1;
- (id)_assetReferenceAtGlobalIndex:(long long)arg1;
- (long long)_globalIndexForAssetReference:(id)arg1;
- (long long)_numberOfItems;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (long long)_tileCountForCurrentModalViewController;
- (id)_assetCollectionsDataSourceForCurrentModalViewController;
- (void)photosSharingTransitionWillAnimateDismissal:(id)arg1;
- (void)photosSharingTransitionWillAnimatePresentation:(id)arg1;
- (id)photosSharingTransitionTransitioningView:(id)arg1;
- (void)photosSharingTransition:(id)arg1 setVisibility:(_Bool)arg2 forAssetReference:(id)arg3;
- (struct CGPoint)photosSharingTransition:(id)arg1 contentOffsetForAssetReference:(id)arg2;
- (id)photosSharingTransition:(id)arg1 layoutForAssetReference:(id)arg2;
- (struct CGRect)_frameAtIndexPath:(id)arg1;
- (struct CGRect)_frameForAssetReference:(id)arg1;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1 inAssetCollectionsDataSource:(id)arg2 allowZoom:(_Bool)arg3;
- (void)_finalizeSharingViewControllerDismiss;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3 withAsset:(id)arg4;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(_Bool)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1 withAsset:(id)arg2;
- (void)_prepareForSharingViewControllerDismiss:(id)arg1 withAsset:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_finalizeAvalancheReviewControllerDismiss;
- (void)avalancheReviewControllerDidComplete:(id)arg1 animated:(_Bool)arg2;
- (void)avalancheReviewControllerDidComplete:(id)arg1 withAsset:(id)arg2 animated:(_Bool)arg3;
- (void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3;
- (void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2;
- (void)videoEditViewController:(id)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id)arg2 modificationDate:(id)arg3 seekTime:(CDStruct_1b6d18a9)arg4;
- (void)photoEditController:(id)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id)arg2;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (void)_performNavigationRequestForAssetDisplayDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_assetReferenceFromAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (_Bool)_dismissAvalancheReviewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissPhotosSharingViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissFunEffectsViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissPhotoMarkupViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissEditViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_dismissSlideshowViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_presentScreenRoutePickerViewController:(id)arg1;
- (_Bool)_presentSlideshowViewController:(id)arg1;
- (_Bool)_presentAvalancheReviewController:(id)arg1;
- (_Bool)_presentPhotosSharingViewController:(id)arg1;
- (_Bool)_presentFunEffectsViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_presentPhotoMarkupViewController:(id)arg1;
- (_Bool)_presentEditViewController:(id)arg1;
- (_Bool)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_currentTileController;
- (id)_assetsDataSource;
- (id)_viewModel;
- (id)_tilingView;
- (id)viewController;
- (void)finishOverOneUpPresentationSessionDismissForced:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isPresentingAnOverOneUpViewController;
- (void)_updatePresentedViewControllersIfNeeded;
- (void)_invalidatePresentedViewControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

