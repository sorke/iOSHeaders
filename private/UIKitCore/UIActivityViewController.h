//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import "UIActionSheetPresentationControllerDelegate.h"
#import "UIAlertControllerContaining.h"
#import "UIAlertControllerVisualStyleProviding.h"
#import "UIViewControllerRestoration.h"
#import "_UIActivityHelperDelegate.h"
#import "_UIShareExtensionHost.h"

@class NSArray, NSExtension, NSMutableDictionary, NSOperationQueue, NSString, UIActivity, UIAlertAction, UIAlertController, UISUIActivityViewControllerConfiguration, _UIActivityGroupListViewController, _UIActivityHelper, _UIAlertControllerShimPresenter, _UIShareExtensionRemoteViewController;

@interface UIActivityViewController : UIViewController <UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIViewControllerRestoration, UIActionSheetPresentationControllerDelegate, _UIActivityHelperDelegate, _UIShareExtensionHost>
{
    _Bool _waitingForInitialShareServicePreferredContentSize;
    _Bool _shareServicePreferredContentSizeIsValid;
    _Bool __viewServiceBeganConnecting;
    _Bool _dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
    _Bool _willDismissActivityViewController;
    _Bool _performActivityForStateRestoration;
    _Bool _shouldMatchOnlyUserElectedExtensions;
    _Bool _hasPerformedInitialPresentation;
    _Bool _isPerformingPresentation;
    _Bool _allowsEmbedding;
    _Bool _showKeyboardAutomatically;
    _Bool _sourceIsManaged;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _completionWithItemsHandler;
    NSArray *_excludedActivityTypes;
    _UIShareExtensionRemoteViewController *_remoteContentViewController;
    NSExtension *_shareExtension;
    id <NSCopying> _extensionRequestIdentifier;
    id <_UIShareExtensionService> _shareExtensionService;
    UISUIActivityViewControllerConfiguration *_activityViewControllerConfiguration;
    _UIActivityGroupListViewController *_placeholderViewController;
    NSArray *_activityItems;
    NSArray *_applicationActivities;
    NSMutableDictionary *_activitiesByUUID;
    _UIActivityHelper *_activityHelper;
    long long _originalPopoverBackgroundStyle;
    Class _originalPopoverBackgroundViewClass;
    CDUnknownBlockType __popoverDismissalAction;
    CDUnknownBlockType _activityPresentationCompletionHandler;
    UIAlertController *_activityAlertController;
    _UIAlertControllerShimPresenter *_activityAlertControllerShimPresenter;
    UIAlertAction *_activityAlertCancelAction;
    NSArray *_activityItemProviderOperations;
    NSOperationQueue *_activityItemProviderOperationQueue;
    long long _totalProviderCount;
    long long _completedProviderCount;
    unsigned long long _backgroundTaskIdentifier;
    NSString *_subject;
    unsigned long long _clientAttemptedInitialPresentationOrEmbeddingTimestamp;
    unsigned long long _beginPerformingActivityTimestamp;
    unsigned long long _viewWillAppearTimestamp;
    unsigned long long _readyToInteractTimestamp;
    NSArray *_activityTypesToCreateInShareService;
    NSArray *_resolvedActivityItemsForCurrentActivity;
    CDUnknownBlockType _shareSheetReadyToInteractHandler;
    CDUnknownBlockType _preCompletionHandler;
    NSArray *_includedActivityTypes;
    long long _excludedActivityCategories;
    NSArray *_activityTypeOrder;
    UIActivity *_activity;
    UIViewController *_activityViewController;
    id <UIActivityViewControllerDelegate> _airDropDelegate;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (double)_asyncPresentationTimeout;
+ (_Bool)_popoverPresentationUsesModernPresentation;
+ (_Bool)_usesActionSheetPresentationController;
@property(nonatomic) __weak id <UIActivityViewControllerDelegate> airDropDelegate; // @synthesize airDropDelegate=_airDropDelegate;
@property(retain, nonatomic) UIViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(nonatomic) _Bool showKeyboardAutomatically; // @synthesize showKeyboardAutomatically=_showKeyboardAutomatically;
@property(nonatomic) _Bool allowsEmbedding; // @synthesize allowsEmbedding=_allowsEmbedding;
@property(copy, nonatomic) NSArray *activityTypeOrder; // @synthesize activityTypeOrder=_activityTypeOrder;
@property(nonatomic) long long excludedActivityCategories; // @synthesize excludedActivityCategories=_excludedActivityCategories;
@property(copy, nonatomic) NSArray *includedActivityTypes; // @synthesize includedActivityTypes=_includedActivityTypes;
@property(copy, nonatomic) CDUnknownBlockType preCompletionHandler; // @synthesize preCompletionHandler=_preCompletionHandler;
@property(copy, nonatomic, getter=_shareSheetReadyToInteractHandler, setter=_setShareSheetReadyToInteractHandler:) CDUnknownBlockType shareSheetReadyToInteractHandler; // @synthesize shareSheetReadyToInteractHandler=_shareSheetReadyToInteractHandler;
@property(readonly, nonatomic) NSArray *resolvedActivityItemsForCurrentActivity; // @synthesize resolvedActivityItemsForCurrentActivity=_resolvedActivityItemsForCurrentActivity;
@property(retain, nonatomic) NSArray *activityTypesToCreateInShareService; // @synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService;
@property(nonatomic, getter=_readyToInteractTimestamp, setter=_setReadyToInteractTimestamp:) unsigned long long readyToInteractTimestamp; // @synthesize readyToInteractTimestamp=_readyToInteractTimestamp;
@property(nonatomic, getter=_viewWillAppearTimestamp, setter=_setViewWillAppearTimestamp:) unsigned long long viewWillAppearTimestamp; // @synthesize viewWillAppearTimestamp=_viewWillAppearTimestamp;
@property(nonatomic, getter=_beginPerformingActivityTimestamp, setter=_setBeginPerformingActivityTimestamp:) unsigned long long beginPerformingActivityTimestamp; // @synthesize beginPerformingActivityTimestamp=_beginPerformingActivityTimestamp;
@property(nonatomic, getter=_clientAttemptedInitialPresentationOrEmbeddingTimestamp, setter=_setClientAttemptedInitialPresentationOrEmbeddingTimestamp:) unsigned long long clientAttemptedInitialPresentationOrEmbeddingTimestamp; // @synthesize clientAttemptedInitialPresentationOrEmbeddingTimestamp=_clientAttemptedInitialPresentationOrEmbeddingTimestamp;
@property(nonatomic, getter=_isPerformingPresentation, setter=_setIsPerformingPresentation:) _Bool isPerformingPresentation; // @synthesize isPerformingPresentation=_isPerformingPresentation;
@property(nonatomic, getter=_hasPerformedInitialPresentation, setter=_setHasPerformedInitialPresentation:) _Bool hasPerformedInitialPresentation; // @synthesize hasPerformedInitialPresentation=_hasPerformedInitialPresentation;
@property(nonatomic) _Bool shouldMatchOnlyUserElectedExtensions; // @synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions;
@property(nonatomic) _Bool performActivityForStateRestoration; // @synthesize performActivityForStateRestoration=_performActivityForStateRestoration;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic) long long completedProviderCount; // @synthesize completedProviderCount=_completedProviderCount;
@property(nonatomic) long long totalProviderCount; // @synthesize totalProviderCount=_totalProviderCount;
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue; // @synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue;
@property(retain, nonatomic) NSArray *activityItemProviderOperations; // @synthesize activityItemProviderOperations=_activityItemProviderOperations;
@property(retain, nonatomic) UIAlertAction *activityAlertCancelAction; // @synthesize activityAlertCancelAction=_activityAlertCancelAction;
@property(retain, nonatomic) _UIAlertControllerShimPresenter *activityAlertControllerShimPresenter; // @synthesize activityAlertControllerShimPresenter=_activityAlertControllerShimPresenter;
@property(retain, nonatomic) UIAlertController *activityAlertController; // @synthesize activityAlertController=_activityAlertController;
@property(copy, nonatomic, getter=_activityPresentationCompletionHandler, setter=_setActivityPresentationCompletionHandler:) CDUnknownBlockType activityPresentationCompletionHandler; // @synthesize activityPresentationCompletionHandler=_activityPresentationCompletionHandler;
@property(nonatomic) _Bool willDismissActivityViewController; // @synthesize willDismissActivityViewController=_willDismissActivityViewController;
@property(nonatomic) _Bool dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel; // @synthesize dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel=_dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
@property(copy, nonatomic) CDUnknownBlockType _popoverDismissalAction; // @synthesize _popoverDismissalAction=__popoverDismissalAction;
@property(retain, nonatomic) Class originalPopoverBackgroundViewClass; // @synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass;
@property(nonatomic) long long originalPopoverBackgroundStyle; // @synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle;
@property(retain, nonatomic) _UIActivityHelper *activityHelper; // @synthesize activityHelper=_activityHelper;
@property(retain, nonatomic) NSMutableDictionary *activitiesByUUID; // @synthesize activitiesByUUID=_activitiesByUUID;
@property(copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(retain, nonatomic, getter=_placeholderViewController, setter=_setPlaceholderViewController:) _UIActivityGroupListViewController *placeholderViewController; // @synthesize placeholderViewController=_placeholderViewController;
@property(nonatomic) _Bool _viewServiceBeganConnecting; // @synthesize _viewServiceBeganConnecting=__viewServiceBeganConnecting;
@property(nonatomic) _Bool shareServicePreferredContentSizeIsValid; // @synthesize shareServicePreferredContentSizeIsValid=_shareServicePreferredContentSizeIsValid;
@property(nonatomic) _Bool waitingForInitialShareServicePreferredContentSize; // @synthesize waitingForInitialShareServicePreferredContentSize=_waitingForInitialShareServicePreferredContentSize;
@property(retain, nonatomic) UISUIActivityViewControllerConfiguration *activityViewControllerConfiguration; // @synthesize activityViewControllerConfiguration=_activityViewControllerConfiguration;
@property(retain, nonatomic) id <_UIShareExtensionService> shareExtensionService; // @synthesize shareExtensionService=_shareExtensionService;
@property(copy, nonatomic) id <NSCopying> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *shareExtension; // @synthesize shareExtension=_shareExtension;
@property(retain, nonatomic) _UIShareExtensionRemoteViewController *remoteContentViewController; // @synthesize remoteContentViewController=_remoteContentViewController;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) CDUnknownBlockType completionWithItemsHandler; // @synthesize completionWithItemsHandler=_completionWithItemsHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
- (void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2;
- (void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1;
- (void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2;
- (void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
- (void)shareExtensionServiceChangeSheetDismissButtonHidden:(_Bool)arg1;
- (void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1;
- (void)_shareExtensionServicePreferredContentSizeUpdated:(struct CGSize)arg1;
- (_Bool)_shouldShowSystemActivityType:(id)arg1;
- (_Bool)activityHelper:(id)arg1 matchingWithContext:(id)arg2 shouldIncludeSystemActivityType:(id)arg3;
- (id)_configurationForActivity:(id)arg1;
- (id)_activityConfigurationsForActivities:(id)arg1;
- (id)_newShareUIConfigurationWithMatchingResults:(id)arg1;
- (id)_newShareUIConfigurationForCurrentState;
- (void)_loadActivityViewControllerConfiguration;
- (void)_preheatActivityViewControllerConfiguration;
- (void)_insertIntoActivitiesByUUID:(id)arg1;
- (void)_removeFromActivitiesByUUID:(id)arg1;
- (id)_activityWithActivityUUID:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cancel;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_changeActionSheetAvoidsKeyboardDisabledUntilNextUpdatePreferredContentSize:(_Bool)arg1;
- (void)_changeActionPresentationDismissButtonHidden:(_Bool)arg1;
- (void)_changeActionPresentationDismissButtonTitle:(id)arg1;
- (void)_endDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)_presentationControllerDismissalTransitionDidEndNotification:(id)arg1;
- (void)_beginDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)_endInProgressActivityExecutionForcedStrongReference;
- (void)_beginInProgressActivityExecutionForcedStrongReference;
- (_Bool)_queueBackgroundOperationsForActivityItems:(id)arg1 activityBeingPerformed:(id)arg2;
- (void)_performActivity:(id)arg1;
- (_Bool)_shouldExecuteItemOperation:(id)arg1 forActivity:(id)arg2;
- (void)_performActivityOfType:(id)arg1 executionEnvironment:(long long)arg2;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_resetAfterActivity:(_Bool)arg1;
- (void)_executeActivity;
- (void)_cleanupActivityWithSuccess:(_Bool)arg1;
- (void)_cleanupActivityWithSuccess:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (void)_emitInteractionTelemetry:(_Bool)arg1 error:(id)arg2;
- (void)_clearActivity;
- (void)_performDismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateSourceIsManagedForURLs;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setModalPresentationStyle:(long long)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (void)_updatePlaceholderPreferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)__viewControllerWillBePresented:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (double)_displayHeight;
- (void)_presentationOrEmbeddingDidBegin:(_Bool)arg1;
- (void)_createAndInstallPlaceholderViewControllerIfNeeded;
- (_Bool)_isActionRowExcluded;
- (_Bool)_isSharingRowExcluded;
- (_Bool)_isAirDropExcludedWithActivityItemValues:(id)arg1;
- (_Bool)_shouldIncludeTagsUIPlaceholderWithActivityItemValues:(id)arg1;
- (id)_containedAlertController;
- (void)_shareSheetReadyToInteractAfterCACommit:(_Bool)arg1;
- (void)_removePlaceholderViewControllerIfNeeded;
- (void)_installViewController:(id)arg1;
- (void)_embedRemoteContentViewControllerAndPerformAfterCompletingFencedCommit:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)_updateActivityViewControllerConfiguration;
- (void)_updateActivityItems:(id)arg1;
- (id)_newActivityMatchingContext;
- (id)_availableActivities;
- (id)_activityItemValues;
- (id)_securityScopedURLsForMatching;
- (id)_activityItemURLValuesForMatching;
- (id)_placeholderActivityItemValues;
- (void)dealloc;
- (void)_setupLegacyAlertPresentationControllers;
- (void)_preheatActivitiesIfNeeded;
- (void)_shareServiceFinishedInitialPreferredContentSizeUpdate;
- (void)_sendInitialShareServiceConfigurationAndUpdatePreferredContentSize;
- (void)_retryRemoteViewServiceConnectionIfPossibleWithPriming:(_Bool)arg1 previousAttempts:(long long)arg2;
- (void)_connectToRemoteViewServiceOnceWithPriming:(_Bool)arg1 previousAttempts:(long long)arg2;
- (void)_connectToRemoteViewServiceOnceWithPriming:(_Bool)arg1;
- (void)_preloadInitialConfigurationLocallyIfNeeded;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

