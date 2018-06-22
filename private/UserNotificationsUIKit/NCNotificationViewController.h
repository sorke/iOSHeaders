//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NCLegibilitySettingsAdjusting.h"
#import "NCNotificationCustomContentDelegate.h"
#import "PLContentSizeCategoryAdjusting.h"
#import "PLExpandedPlatterPresentationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NCNotificationAction, NCNotificationRequest, NCNotificationViewControllerView, NSPointerArray, NSString, UIPanGestureRecognizer, UIScrollView, UIView, UIViewController<NCNotificationCustomContent>;

@interface NCNotificationViewController : UIViewController <UIScrollViewDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterPresentationControllerDelegate, PLContentSizeCategoryAdjusting, NCLegibilitySettingsAdjusting>
{
    _Bool _didQueryCanPan;
    _Bool _canPan;
    long long _ncTransitionAnimationState;
    NSPointerArray *_observers;
    struct UIView *_lookView;
    _Bool _revealAdditionalContentOnPresentation;
    _Bool _customContentHomeAffordanceVisible;
    _Bool _interactionEnabled;
    _Bool _shouldRestorePresentingShortLookOnDismiss;
    id <NCNotificationViewControllerDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
    NSString *_groupName;
    UIPanGestureRecognizer *_customContentHomeAffordanceGestureRecognizer;
    NCNotificationAction *_presentationSourceAction;
    id <NCNotificationStaticContentProviding> _staticContentProvider;
    id <NCNotificationCustomContentProviding> _customContentProvider;
    id <NCAuxiliaryOptionsProviding> _auxiliaryOptionsContentProvider;
    id <UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    UIView *_associatedView;
    CDUnknownBlockType _pendingPresentationTransitionDidEndBlock;
    UIViewController<NCNotificationCustomContent> *_customContentProvidingViewController;
    CDUnknownBlockType _dismissalCompletion;
}

@property(copy, nonatomic, getter=_dismissalCompletion, setter=_setDismissalCompletion:) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(nonatomic, getter=_shouldRestorePresentingShortLookOnDismiss, setter=_setShouldRestorePresentingShortLookOnDismiss:) _Bool shouldRestorePresentingShortLookOnDismiss; // @synthesize shouldRestorePresentingShortLookOnDismiss=_shouldRestorePresentingShortLookOnDismiss;
@property(retain, nonatomic, getter=_customContentProvidingViewController, setter=_setCustomContentProvidingViewController:) UIViewController<NCNotificationCustomContent> *customContentProvidingViewController; // @synthesize customContentProvidingViewController=_customContentProvidingViewController;
@property(copy, nonatomic, getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:) CDUnknownBlockType pendingPresentationTransitionDidEndBlock; // @synthesize pendingPresentationTransitionDidEndBlock=_pendingPresentationTransitionDidEndBlock;
@property(nonatomic) __weak UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(nonatomic, getter=isInteractionEnabled) _Bool interactionEnabled; // @synthesize interactionEnabled=_interactionEnabled;
@property(retain, nonatomic, getter=_activeTransitionCoordinator, setter=_setActiveTransitionCoordinator:) id <UIViewControllerTransitionCoordinator> activeTransitionCoordinator; // @synthesize activeTransitionCoordinator=_activeTransitionCoordinator;
@property(retain, nonatomic) id <NCAuxiliaryOptionsProviding> auxiliaryOptionsContentProvider; // @synthesize auxiliaryOptionsContentProvider=_auxiliaryOptionsContentProvider;
@property(retain, nonatomic) id <NCNotificationCustomContentProviding> customContentProvider; // @synthesize customContentProvider=_customContentProvider;
@property(retain, nonatomic) id <NCNotificationStaticContentProviding> staticContentProvider; // @synthesize staticContentProvider=_staticContentProvider;
@property(nonatomic) __weak NCNotificationAction *presentationSourceAction; // @synthesize presentationSourceAction=_presentationSourceAction;
@property(nonatomic) __weak UIPanGestureRecognizer *customContentHomeAffordanceGestureRecognizer; // @synthesize customContentHomeAffordanceGestureRecognizer=_customContentHomeAffordanceGestureRecognizer;
@property(nonatomic, getter=isCustomContentHomeAffordanceVisible) _Bool customContentHomeAffordanceVisible; // @synthesize customContentHomeAffordanceVisible=_customContentHomeAffordanceVisible;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) _Bool revealAdditionalContentOnPresentation; // @synthesize revealAdditionalContentOnPresentation=_revealAdditionalContentOnPresentation;
@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(nonatomic) __weak id <NCNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (void)customContentRequestsDismiss:(id)arg1;
- (void)customContentRequestsDefaultAction:(id)arg1;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)contentProvider:(id)arg1 requestsPresentingLongLookAnimated:(_Bool)arg2;
- (void)contentProvider:(id)arg1 performAction:(id)arg2 animated:(_Bool)arg3;
- (void)_askDelegateToExecuteAction:(id)arg1 withParameters:(id)arg2 animated:(_Bool)arg3;
- (void)_updateScrollViewContentSize;
- (_Bool)_shouldPadScrollViewContentSizeHeight;
- (void)_executeCancelAction:(_Bool)arg1;
- (void)_executeCloseAction:(_Bool)arg1;
- (void)_executeClearAction:(_Bool)arg1;
- (void)_executeDefaultAction:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setNCTransitionAnimationState:(long long)arg1;
- (long long)ncTransitionAnimationState;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)notificationUsageTrackingState;
- (void)_updatePreferredContentSize;
- (void)_setPreferredCustomContentSize:(struct CGSize)arg1;
- (struct CGSize)_preferredCustomContentSizeForSize:(struct CGSize)arg1 parentContentContainerBounds:(struct CGRect)arg2;
- (void)_notificationViewControllerViewDidLoad;
- (void)_loadLookView;
@property(readonly, nonatomic, getter=_notificationViewControllerView) NCNotificationViewControllerView *notificationViewControllerView;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (void)_updateWithProvidedCustomContent;
- (long long)_dateFormatStyle;
- (void)_updateWithProvidedStaticContent;
- (struct UIView *)_lookView;
- (struct UIView *)_lookViewIfLoaded;
- (struct UIView *)_lookViewLoadingIfNecessary:(_Bool)arg1;
@property(readonly, nonatomic, getter=isCoalescedNotificationBundle) _Bool coalescedNotificationBundle;
- (_Bool)shouldRestorePresentingShortLookOnDismiss;
- (void)removeAudioAccesoryObserver:(id)arg1;
- (void)addAudioAccessoryObserver:(id)arg1;
- (void)expandAndPlayAudioMessage;
- (_Bool)_canPan;
- (_Bool)restoreInputViews;
- (void)preserveInputViews;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateContent;
- (void)setHasUpdatedContent;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_customContentProvidingViewControllerCreateIfNecessary;
- (void)_setupAuxiliaryOptionsContentProvider;
- (void)reloadAuxiliaryOptionsContentProvider;
- (void)_setupCustomContentProvider;
- (void)_setupStaticContentProvider;
- (void)reloadStaticContentProvider;
- (void)reloadContentProviders;
@property(readonly, nonatomic, getter=hasCommittedToPresentingCustomContentProvidingViewController) _Bool committedToPresentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=_isPresentingCustomContentProvidingViewController) _Bool presentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
@property(readonly, nonatomic, getter=isShortLook) _Bool shortLook;
- (_Bool)_setNotificationRequest:(id)arg1;
- (_Bool)_setDelegate:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;
- (void)presentLongLookAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
@property(readonly, nonatomic, getter=isLookStyleLongLook) _Bool lookStyleLongLook;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView; // @dynamic scrollView;
@property(readonly) Class superclass;

@end

