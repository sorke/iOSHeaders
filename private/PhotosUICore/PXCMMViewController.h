//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PXActionMenuDelegate.h"
#import "PXCMMActionControllerDelegate.h"
#import "PXCMMActionPerformerDelegate.h"
#import "PXCMMAssetsViewControllerDelegate.h"
#import "PXChangeObserver.h"
#import "PXSectionedDataSourceManagerObserver.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class NSArray, NSProgress, NSString, PXActionMenuController, PXCMMAssetsProgressListener, PXCMMAssetsViewController, PXCMMSession, PXCMMSpecManager, PXOneUpPresentation, PXUpdater, UIActivityIndicatorView, UIBarButtonItem, UINavigationBar;

@interface PXCMMViewController : UIViewController <PXChangeObserver, PXCMMAssetsViewControllerDelegate, PXCMMActionControllerDelegate, PXActionMenuDelegate, UIPopoverPresentationControllerDelegate, PXSectionedDataSourceManagerObserver, PXCMMActionPerformerDelegate>
{
    PXCMMAssetsProgressListener *_assetsProgressListener;
    _Bool _showTitleInNavigationBar;
    _Bool _loadingPeopleSuggestions;
    PXCMMSession *_session;
    id <PXCMMViewControllerDelegate> _delegate;
    id <PXCMMActionControllerDelegate> _actionDelegate;
    PXOneUpPresentation *_oneUpPresentation;
    PXCMMSpecManager *_specManager;
    UINavigationBar *_standaloneNavigationBar;
    NSArray *_layoutConstraints;
    PXCMMAssetsViewController *_assetsViewController;
    PXUpdater *_updater;
    NSProgress *_actionProgress;
    UIActivityIndicatorView *_activityIndicatorView;
    UIBarButtonItem *_progressButton;
    UIBarButtonItem *_actionMenuButtonItem;
    PXActionMenuController *_activeActionMenuController;
}

@property(nonatomic, getter=isLoadingPeopleSuggestions) _Bool loadingPeopleSuggestions; // @synthesize loadingPeopleSuggestions=_loadingPeopleSuggestions;
@property(retain, nonatomic) PXActionMenuController *activeActionMenuController; // @synthesize activeActionMenuController=_activeActionMenuController;
@property(retain, nonatomic) UIBarButtonItem *actionMenuButtonItem; // @synthesize actionMenuButtonItem=_actionMenuButtonItem;
@property(retain, nonatomic) UIBarButtonItem *progressButton; // @synthesize progressButton=_progressButton;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSProgress *actionProgress; // @synthesize actionProgress=_actionProgress;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(nonatomic) _Bool showTitleInNavigationBar; // @synthesize showTitleInNavigationBar=_showTitleInNavigationBar;
@property(readonly, nonatomic) PXCMMAssetsViewController *assetsViewController; // @synthesize assetsViewController=_assetsViewController;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UINavigationBar *standaloneNavigationBar; // @synthesize standaloneNavigationBar=_standaloneNavigationBar;
@property(readonly, nonatomic) PXCMMSpecManager *specManager; // @synthesize specManager=_specManager;
@property(readonly, nonatomic) PXOneUpPresentation *oneUpPresentation; // @synthesize oneUpPresentation=_oneUpPresentation;
@property(nonatomic) __weak id <PXCMMActionControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <PXCMMViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXCMMSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)actionMenu:(id)arg1 actionPerformer:(id)arg2 didChangeState:(unsigned long long)arg3;
- (_Bool)actionMenu:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)actionMenu:(id)arg1 presentViewController:(id)arg2;
- (void)_dismissViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_presentViewController:(id)arg1;
- (id)completeMyMomentViewController:(id)arg1 performSendBackActionForSession:(id)arg2;
- (id)completeMyMomentViewController:(id)arg1 performActionForSession:(id)arg2;
- (void)didPerformDeletionActionForAssetsViewController:(id)arg1;
- (id)oneUpPresentationForAssetsViewController:(id)arg1;
- (void)assetsViewControllerDidTapSendBackActionButton:(id)arg1;
- (void)assetsViewControllerDidTapActionButton:(id)arg1;
- (void)didTapAddMoreButtonForAssetsViewController:(id)arg1;
- (_Bool)shouldShowAddMoreButtonForAssetsViewController:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)px_canPerformCrossfadeTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformCrossfadeTransitionWithDetailViewController:(id)arg1;
- (void)_handleComposeRecipientCancelButton:(id)arg1;
- (void)_handleActionButton;
- (void)_completePeopleSuggestionsLoading;
- (void)_presentComposeRecipientViewController;
- (_Bool)_shouldWaitBeforePresentingComposeRecipientViewController;
- (_Bool)_canPresentComposeRecipientViewController;
- (void)_updateStyle;
- (void)_updateActionProgress;
- (void)_updateTitle;
- (id)_localizedSelectionTitle;
- (void)_updateComponentsViewControllerLayout;
- (void)_setNeedsUpdate;
- (void)_updateComponentViewController:(id)arg1 frame:(struct CGRect)arg2;
- (void)_handleActionMenuButtonItem:(id)arg1;
- (void)_performCancel;
- (_Bool)_shouldShowActionMenu;
- (void)_setupNavigationItem;
- (void)updateViewConstraints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

