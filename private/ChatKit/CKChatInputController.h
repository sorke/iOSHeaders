//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKBrowserAppManagerViewControllerDelegate.h"
#import "CKBrowserSwitcherViewControllerDelegate.h"
#import "CKBrowserTransitionCoordinatorDelegate.h"
#import "CKBrowserViewControllerSendDelegate.h"
#import "CKBrowserViewControllerStoreSendDelegate.h"
#import "CKDeviceOrientationManagerDelegate.h"
#import "CKFullScreenAppViewControllerDelegate.h"
#import "CKHandwritingPresentationControllerDelegate.h"
#import "CKHandwritingViewControllerSendDelegate.h"
#import "CKMessageEntryViewInputDelegate.h"
#import "CKPhotoBrowserViewControllerSendDelegate.h"
#import "CKPluginEntryViewControllerDelegate.h"
#import "UITextInputPayloadDelegate.h"

@class CKBrowserSwitcherViewController, CKChatEagerUploadController, CKDeviceOrientationManager, CKHandwritingPresentationController, CKKeyboardContentViewController, CKMessageEntryView, CKScheduledUpdater, IMBalloonPlugin, IMBalloonPluginDataSource, IMScheduledUpdater, NSDate, NSString, UINavigationController, UITextInputPayloadController, UIViewController, UIViewController<CKBrowserViewControllerProtocol>;

@interface CKChatInputController : NSObject <UITextInputPayloadDelegate, CKMessageEntryViewInputDelegate, CKBrowserViewControllerSendDelegate, CKPhotoBrowserViewControllerSendDelegate, CKHandwritingViewControllerSendDelegate, CKBrowserViewControllerStoreSendDelegate, CKPluginEntryViewControllerDelegate, CKFullScreenAppViewControllerDelegate, CKDeviceOrientationManagerDelegate, CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKHandwritingPresentationControllerDelegate, CKBrowserAppManagerViewControllerDelegate>
{
    _Bool _shouldSuppressStatusBarForHandwriting;
    _Bool __isRunningPPT;
    _Bool _inputViewVisible;
    _Bool _inputViewWillBecomeVisible;
    _Bool _keyboardIsHiding;
    _Bool _inCollapseOrExpandAnimation;
    _Bool _shouldRestoreAppSwitcher;
    id <CKChatInputControllerDelegate> _delegate;
    IMBalloonPlugin *_browserPlugin;
    IMBalloonPluginDataSource *_browserPluginDataSource;
    UIViewController *_statusBarStyleViewController;
    CKMessageEntryView *_entryView;
    CKKeyboardContentViewController *_currentInputViewController;
    CKKeyboardContentViewController *_switcherInputViewController;
    CKBrowserSwitcherViewController *_browserSwitcher;
    NSDate *_switcherLastTouchDate;
    CKDeviceOrientationManager *_orientationManager;
    long long _lastSeenOrientation;
    UINavigationController *_presentedBrowserNavigationController;
    UIViewController<CKBrowserViewControllerProtocol> *_modalBrowserViewController;
    IMScheduledUpdater *_dismissEntryViewShelfUpdater;
    CKScheduledUpdater *_orientationUpdater;
    CKHandwritingPresentationController *_handwritingPresentationController;
    UITextInputPayloadController *_textInputPayloadController;
    CDUnknownBlockType _insertPayloadCompletionHandler;
    IMBalloonPluginDataSource *_deferredPluginDataSource;
    CKChatEagerUploadController *_eagerUploadController;
}

@property(retain, nonatomic) CKChatEagerUploadController *eagerUploadController; // @synthesize eagerUploadController=_eagerUploadController;
@property(retain, nonatomic) IMBalloonPluginDataSource *deferredPluginDataSource; // @synthesize deferredPluginDataSource=_deferredPluginDataSource;
@property(copy, nonatomic) CDUnknownBlockType insertPayloadCompletionHandler; // @synthesize insertPayloadCompletionHandler=_insertPayloadCompletionHandler;
@property(retain, nonatomic) UITextInputPayloadController *textInputPayloadController; // @synthesize textInputPayloadController=_textInputPayloadController;
@property(nonatomic) _Bool shouldRestoreAppSwitcher; // @synthesize shouldRestoreAppSwitcher=_shouldRestoreAppSwitcher;
@property(retain, nonatomic) CKHandwritingPresentationController *handwritingPresentationController; // @synthesize handwritingPresentationController=_handwritingPresentationController;
@property(retain, nonatomic) CKScheduledUpdater *orientationUpdater; // @synthesize orientationUpdater=_orientationUpdater;
@property(retain, nonatomic) IMScheduledUpdater *dismissEntryViewShelfUpdater; // @synthesize dismissEntryViewShelfUpdater=_dismissEntryViewShelfUpdater;
@property(nonatomic) _Bool inCollapseOrExpandAnimation; // @synthesize inCollapseOrExpandAnimation=_inCollapseOrExpandAnimation;
@property(nonatomic) _Bool keyboardIsHiding; // @synthesize keyboardIsHiding=_keyboardIsHiding;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *modalBrowserViewController; // @synthesize modalBrowserViewController=_modalBrowserViewController;
@property(retain, nonatomic) UINavigationController *presentedBrowserNavigationController; // @synthesize presentedBrowserNavigationController=_presentedBrowserNavigationController;
@property(nonatomic) long long lastSeenOrientation; // @synthesize lastSeenOrientation=_lastSeenOrientation;
@property(retain, nonatomic) CKDeviceOrientationManager *orientationManager; // @synthesize orientationManager=_orientationManager;
@property(retain, nonatomic) NSDate *switcherLastTouchDate; // @synthesize switcherLastTouchDate=_switcherLastTouchDate;
@property(retain, nonatomic) CKBrowserSwitcherViewController *browserSwitcher; // @synthesize browserSwitcher=_browserSwitcher;
@property(retain, nonatomic) CKKeyboardContentViewController *switcherInputViewController; // @synthesize switcherInputViewController=_switcherInputViewController;
@property(nonatomic) _Bool inputViewWillBecomeVisible; // @synthesize inputViewWillBecomeVisible=_inputViewWillBecomeVisible;
@property(retain, nonatomic) CKKeyboardContentViewController *currentInputViewController; // @synthesize currentInputViewController=_currentInputViewController;
@property(retain, nonatomic) CKMessageEntryView *entryView; // @synthesize entryView=_entryView;
@property(nonatomic, getter=isInputViewVisible) _Bool inputViewVisible; // @synthesize inputViewVisible=_inputViewVisible;
@property(nonatomic) _Bool _isRunningPPT; // @synthesize _isRunningPPT=__isRunningPPT;
@property(nonatomic) _Bool shouldSuppressStatusBarForHandwriting; // @synthesize shouldSuppressStatusBarForHandwriting=_shouldSuppressStatusBarForHandwriting;
@property(retain, nonatomic) UIViewController *statusBarStyleViewController; // @synthesize statusBarStyleViewController=_statusBarStyleViewController;
@property(retain, nonatomic) IMBalloonPluginDataSource *browserPluginDataSource; // @synthesize browserPluginDataSource=_browserPluginDataSource;
@property(retain, nonatomic) IMBalloonPlugin *browserPlugin; // @synthesize browserPlugin=_browserPlugin;
@property(nonatomic) __weak id <CKChatInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)eagerUploadPayload:(id)arg1 identifier:(id)arg2 replace:(_Bool)arg3;
- (void)eagerUploadCancelIdentifier:(id)arg1;
- (void)willSendComposition;
- (void)browserAppManagerDidSelectPlugin:(id)arg1;
- (void)deviceOrientationManager:(id)arg1 orientationDidChange:(long long)arg2;
- (void)openAppExtensionWithAdamID:(id)arg1;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)arg1;
- (void)handwritingPresentationControllerWillHideHandwriting:(id)arg1;
- (void)handwritingPresentationControllerDidShowHandwriting:(id)arg1;
- (void)dismissPlugin;
- (void)stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)workingDraftDirForPluginIdentifier:(id)arg1;
- (id)workingDirForDraft;
- (void)dismissEntryViewShelf;
- (void)showEntryViewShelf:(id)arg1 forPlugin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showEntryViewShelf:(id)arg1;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
- (void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 datasource:(id)arg3;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (id)pluginBundleID;
- (_Bool)_shouldSendTypingIndicatorDataForPluginIdentifier:(id)arg1;
- (void)_startEditingPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2 forPlugin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2 forPlugin:(id)arg3;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(id)arg1;
- (void)startEditingPayloadBypassingValidation:(id)arg1 forPlugin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deferredRequestPresentationStyleFullScreenModal;
- (void)_deferredRequestPresentationStyleExpanded:(id)arg1;
- (void)requestPresentationStyleFullScreenModalForPlugin:(id)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1 forPlugin:(id)arg2;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)forceDismissWithoutAnimation;
- (void)_deferredDismissToKeyboardAndFocusEntryView:(id)arg1;
- (void)dismissAndReloadInputViews:(_Bool)arg1 forPlugin:(id)arg2;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)dismiss;
- (void)dismissToKeyboard:(_Bool)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)commitSticker:(id)arg1 atScreenCoordinate:(struct CGPoint)arg2 scale:(double)arg3 rotation:(double)arg4;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)_deferredCommitSticker:(id)arg1;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 forPlugin:(id)arg2 bypassValidation:(_Bool)arg3;
- (void)commitSticker:(id)arg1 forPlugin:(id)arg2;
- (void)commitStickerBypassingValidation:(id)arg1 forPlugin:(id)arg2;
- (void)_deferredCommitPayload:(id)arg1;
- (_Bool)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(_Bool)arg3 error:(id *)arg4;
- (_Bool)commitPayloadBypassingValidation:(id)arg1 forPlugin:(id)arg2;
- (void)commitPayload:(id)arg1;
- (void)_openContainingBundleID:(id)arg1 applicationService:(id)arg2 withURL:(id)arg3 pluginID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)entryViewDidChangeSize;
- (void)messageEntryView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (long long)messageEntryViewHighLightInputButton:(id)arg1;
- (_Bool)messageEntryShouldHideCaret:(id)arg1;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (void)messageEntryViewPhotoButtonTouchDown:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (void)messageEntryViewDidTakeFocus:(id)arg1;
- (void)messageEntryViewDidCollapse:(id)arg1;
- (void)messageEntryViewDidExpand:(id)arg1;
- (void)setEntryViewHidden:(_Bool)arg1;
- (void)_handleOrientation;
@property(readonly, nonatomic) unsigned long long browserSupportedInterfaceOrientations;
@property(readonly, nonatomic) _Bool browserShouldAutorotate;
- (id)_browserViewControllerForInterfaceOrientationMethods;
@property(readonly, nonatomic) _Bool presentsHandwritingOnRotation;
@property(readonly, nonatomic) _Bool appManagerIsDisplayed;
@property(readonly, nonatomic) _Bool appStoreIsDisplayed;
- (_Bool)handwritingIsDisplayed;
- (void)showHandwritingBrowserWithExistingPayload:(id)arg1;
- (_Bool)_switcherPluginHasTouchTokenForDirectSend;
- (_Bool)_switcherPluginCanMessageAPI;
- (_Bool)_switcherPluginCanMessageAPIOnBehalfOfPlugin:(id)arg1;
- (_Bool)_currentPluginIsPhotos;
- (_Bool)_currentPluginIsDT;
- (void)showKeyboard;
- (void)_dismissBrowserViewControllerAndReloadInputViews:(_Bool)arg1;
- (void)dismissBrowserViewController;
- (void)showBrowserForPlugin:(id)arg1 dataSource:(id)arg2 expanded:(_Bool)arg3;
- (void)_setupObserverForLaunchAppExtensionForDebugging;
- (void)_launchAppExtensionForDebugging;
- (void)switcherViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)switcherViewController:(id)arg1 willHideSelectionViewWithAnimations:(CDUnknownBlockType *)arg2 completion:(CDUnknownBlockType *)arg3;
- (void)switcherViewController:(id)arg1 willShowSelectionViewWithAnimations:(CDUnknownBlockType *)arg2 completion:(CDUnknownBlockType *)arg3;
- (void)switcherViewController:(id)arg1 didSelectPluginAtIndexPath:(id)arg2;
- (void)switcherViewControllerDidSelectAppManager:(id)arg1 shouldRestoreAppSwitcher:(_Bool)arg2;
- (void)switcherViewControllerDidSelectAppStore:(id)arg1 shouldRestoreAppSwitcher:(_Bool)arg2;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (void)switcherViewControllerDidStartSwitching:(id)arg1;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)_reconfigurePluginDataSourceWithBalloonControllerIfNecessary;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)setInputViewVisible:(_Bool)arg1 entryFieldCollapsed:(_Bool)arg2 animated:(_Bool)arg3 messageDelegate:(_Bool)arg4;
- (void)setInputViewVisible:(_Bool)arg1 entryFieldCollapsed:(_Bool)arg2 animated:(_Bool)arg3;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)applicationWillAddDeactivationReasonNotification:(id)arg1;
- (void)prepareForSuspend;
- (void)requestPhotoBrowserInitFromDraft:(id)arg1;
- (void)requestPhotoBrowserToPrepareForDraft;
- (void)requestPhotoBrowserToAppendFinalImagesToComposition;
- (void)notifyBrowserViewControllerOfMatchingNewMessages:(id)arg1;
- (void)presentAppManager;
- (void)presentAppStoreForURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)presentAppStoreForURL:(id)arg1;
- (void)presentAppStoreForAdamID:(id)arg1;
- (void)presentViewControllerWithPluginChatItem:(id)arg1 expanded:(_Bool)arg2;
- (id)_adamIDFromPluginPayloadData:(id)arg1;
- (void)swipeDismissBrowser;
- (void)showHandwritingBrowser;
- (void)showAppsBrowser;
- (void)_showFullScreenBrowser:(id)arg1;
- (void)showDTCompose;
- (void)showPhotosBrowserCollapsingEntryField:(_Bool)arg1;
- (void)showPhotosBrowser;
- (void)_loadPhotosBrowserCollapsingEntryField:(_Bool)arg1;
- (_Bool)_isRunningInMVS;
- (void)_loadPhotosBrowser;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)clearBrowserViewControllerIfNecessary;
- (id)inputAccessoryView;
- (id)inputViewController;
- (id)init;
- (void)dealloc;
- (id)_entryViewSnapshotWithFrame:(struct CGRect)arg1;
- (void)_dismissCompactSwitcherOverKeyboardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentCompactSwitcherOverKeyboardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentPluginWithBundleID:(id)arg1 sendingTextInputPayload:(id)arg2 withPayloadID:(id)arg3 expanded:(_Bool)arg4;
- (void)_presentPluginWithBundleID:(id)arg1 sendingTextInputPayload:(id)arg2 withPayloadID:(id)arg3;
- (id)_formattedPayload:(id)arg1 forPayloadID:(id)arg2;
- (void)handlePayload:(id)arg1 withPayloadId:(id)arg2;
- (void)presentPluginWithBundleID:(id)arg1 appLaunchPayload:(id)arg2;
- (void)unregisterForTextInputPayloadHandling;
- (void)registerForTextInputPayloadHandling:(_Bool)arg1 isGroupChat:(_Bool)arg2;
- (void)handleMoneyActionWithAmount:(id)arg1 currencies:(id)arg2;
- (void)handleClientActionFromUrl:(id)arg1 context:(id)arg2;
- (id)localizedTitleForClientActionFromUrl:(id)arg1 context:(id)arg2;
- (_Bool)canHandleClientActionFromUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

