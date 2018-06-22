//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKBrowserDragControllerTranscriptDelegate.h"
#import "CKBrowserSwitcherFooterViewDelegate.h"
#import "CKBrowserSwitcherViewControllerDelegate.h"
#import "CKBrowserTransitionCoordinatorDelegate.h"
#import "CKBrowserViewControllerSendDelegate.h"

@class CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, CKBrowserSwitcherViewController, IMBalloonPlugin, NSString;

@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate, CKBrowserViewControllerSendDelegate, CKBrowserSwitcherViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, CKBrowserTransitionCoordinatorDelegate>
{
    CKBrowserSwitcherFooterView *_appStrip;
    CKBrowserSwitcherFooterViewDataSource *_appStripDataSource;
    IMBalloonPlugin *_currentBalloonPlugin;
    id <IMADockViewControllerDelegate> _delegate;
    CKBrowserSwitcherViewController *_switcherViewController;
}

@property(retain, nonatomic) CKBrowserSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
@property(nonatomic) __weak id <IMADockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (id)transitionsPresentationViewController;
- (_Bool)shouldAlwaysShowAppTitle;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)commitSticker:(id)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(id)arg1;
- (void)commitPayload:(id)arg1;
- (void)positionSwitcherOffscreen:(_Bool)arg1;
- (_Bool)addSwitcherForPlugin:(id)arg1;
- (double)switcherHeight;
- (id)appViewControllerPresenter;
- (void)switcherView:(id)arg1 didMagnify:(_Bool)arg2;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (void)updateAppStripFrame;
- (id)imageViewForSticker:(id)arg1;
- (void)cleanupRunningApps;
- (void)_hideBrowserAnimated:(_Bool)arg1 clearCurrentPlugin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideBrowserAnimated:(_Bool)arg1;
- (void)hideAppViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIViewController *currentAppViewController;
@property(readonly, nonatomic) double minimizedDockHeight;
- (void)notifyDelegateOfSelectedPlugin:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

