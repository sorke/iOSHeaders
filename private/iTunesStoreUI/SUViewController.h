//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ISOperationDelegate.h"
#import "SUScriptNativeObject.h"

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUNavigationItem, SURotationController, SUViewControllerContext, SUViewControllerScriptProperties, UIBarButtonItem;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate>
{
    SUViewControllerScriptProperties *_cachedScriptProperties;
    _Bool _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    SUClientInterface *_clientInterface;
    _Bool _excludeFromNavigationHistory;
    UIBarButtonItem *_exitStoreButton;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    _Bool _isEnteringForeground;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    long long _rotationState;
    _Bool _shouldInvalidateForMemoryPurge;
    _Bool _showsLibraryButton;
    long long _transitionSafetyCount;
    _Bool _skLoading;
    _Bool _shouldAdjustContentOffsets;
}

@property(nonatomic) _Bool shouldAdjustContentOffsets; // @synthesize shouldAdjustContentOffsets=_shouldAdjustContentOffsets;
@property(nonatomic, getter=isSkLoading) _Bool skLoading; // @synthesize skLoading=_skLoading;
@property(nonatomic) _Bool showsLibraryButton; // @synthesize showsLibraryButton=_showsLibraryButton;
@property(nonatomic) _Bool shouldInvalidateForMemoryPurge; // @synthesize shouldInvalidateForMemoryPurge=_shouldInvalidateForMemoryPurge;
@property(nonatomic) _Bool shouldExcludeFromNavigationHistory; // @synthesize shouldExcludeFromNavigationHistory=_excludeFromNavigationHistory;
@property(readonly, nonatomic, getter=_restoredContext) SUViewControllerContext *_restoredContext; // @synthesize _restoredContext;
@property(readonly, nonatomic, getter=_pendingDialogs) NSArray *_pendingDialogs; // @synthesize _pendingDialogs;
@property(retain, nonatomic) UIViewController *inputAccessoryViewController; // @synthesize inputAccessoryViewController=_inputAccessoryViewController;
@property(readonly, nonatomic) UIViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property(readonly, nonatomic, getter=_isEnteringForeground) _Bool _enteringForeground; // @synthesize _enteringForeground=_isEnteringForeground;
@property(readonly, nonatomic, getter=_cachedScriptProperties) SUViewControllerScriptProperties *_cachedScriptProperties; // @synthesize _cachedScriptProperties;
- (void)_reloadExitStoreButtonWithParentViewController:(id)arg1;
- (void)_invalidateForMemoryPurge;
- (void)_reloadLibraryButton;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_exitStoreButtonDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)_presentFooterAnimationDidStop;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (void)_exitStoreButtonAction:(id)arg1;
- (_Bool)clearsWeakScriptReferences;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (id)inputAccessoryView;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_rotationController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)viewControllerFactory;
- (id)tabBarItem;
- (void)storePageProtocolDidChange;
- (void)setTitle:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)resetRestoredContext;
- (id)navigationController;
@property(readonly, retain, nonatomic) SUNavigationItem *navigationItem; // @dynamic navigationItem;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (void)loadView;
- (long long)ITunesStoreUIBarStyle;
- (long long)interfaceOrientation;
- (id)_existingNavigationItem;
- (void)didReceiveMemoryWarning;
- (id)copyArchivableContext;
- (_Bool)_canReloadView;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(_Bool)arg2;
- (void)setTitle:(id)arg1 changeTabBarItem:(_Bool)arg2;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)reloadContentSizeForViewInPopover;
- (void)reload;
- (void)presentFooterViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)presentDialogForError:(id)arg1 pendUntilVisible:(_Bool)arg2;
- (_Bool)presentDialog:(id)arg1 pendUntilVisible:(_Bool)arg2;
- (id)newRotationController;
@property(readonly, nonatomic, getter=isVisibleAndFrontmost) _Bool visibleAndFrontmost;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)invalidateForMemoryPurge;
- (void)invalidate;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)handleApplicationURL:(id)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(_Bool)arg2;
- (void)dismissFooterViewControllerAnimated:(_Bool)arg1;
@property(readonly, nonatomic) NSString *defaultPNGName;
@property(readonly, nonatomic) double defaultPNGExpirationTime;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (void)cancelOperations;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (id)initWithSection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

