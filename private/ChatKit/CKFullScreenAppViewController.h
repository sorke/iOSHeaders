//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKAppGrabberViewDelegate.h"
#import "CKBrowserViewControllerProtocol.h"
#import "CKFullScreenAppNavbarManagerDelegate.h"
#import "CKFullScreenAppViewControllerProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class CKAppGrabberView, CKBrowserDragManager, CKConversation, CKDismissView, CKFullScreenAppNavbarManager, CKImmediatePanGestureRecognizer, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject<CKBrowserViewControllerSendDelegate>, NSString, UILongPressGestureRecognizer, UIView, UIViewController<CKBrowserViewControllerProtocol>, UIViewPropertyAnimator;

@interface CKFullScreenAppViewController : UIViewController <CKBrowserViewControllerProtocol, CKFullScreenAppNavbarManagerDelegate, CKAppGrabberViewDelegate, UIGestureRecognizerDelegate, CKFullScreenAppViewControllerProtocol>
{
    CKAppGrabberView *_grabberView;
    CKImmediatePanGestureRecognizer *_collapseGestureTracker;
    UIViewPropertyAnimator *_collapsePropertyAnimator;
    _Bool _shouldDoCollapseInteraction;
    _Bool _collapseInteractionDidMove;
    struct CGPoint _collapseGestureStartingLocation;
    UILongPressGestureRecognizer *_touchTracker;
    _Bool _inTransition;
    _Bool _inDragAndDrop;
    UIViewController<CKBrowserViewControllerProtocol> *_contentViewController;
    id <CKFullScreenAppViewControllerDelegate> _delegate;
    UIView *_contentView;
    CKDismissView *_dismissView;
    CKConversation *_conversation;
    CKFullScreenAppNavbarManager *_navbarManager;
    unsigned long long _transitionDirection;
    long long _lastKnownDeviceOrientation;
    struct CGRect _initialBrowserFrame;
    struct CGRect _targetBrowserFrame;
}

@property(nonatomic) long long lastKnownDeviceOrientation; // @synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation;
@property(nonatomic) _Bool inDragAndDrop; // @synthesize inDragAndDrop=_inDragAndDrop;
@property(nonatomic) struct CGRect targetBrowserFrame; // @synthesize targetBrowserFrame=_targetBrowserFrame;
@property(nonatomic) struct CGRect initialBrowserFrame; // @synthesize initialBrowserFrame=_initialBrowserFrame;
@property(nonatomic) unsigned long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
@property(retain, nonatomic) CKFullScreenAppNavbarManager *navbarManager; // @synthesize navbarManager=_navbarManager;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) _Bool inTransition; // @synthesize inTransition=_inTransition;
@property(retain, nonatomic) CKDismissView *dismissView; // @synthesize dismissView=_dismissView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <CKFullScreenAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (_Bool)_currentPluginIsJellyfish;
- (_Bool)_currentPluginIsAppManager;
- (_Bool)_currentPluginIsAppStore;
- (void)collapse;
- (void)_dismiss:(id)arg1;
- (_Bool)_shouldShowDimmingView;
- (void)_updateDimmingViewAlpha;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)inputAccessoryView;
- (void)_dragEnded:(id)arg1;
- (void)_dragBegan:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)collapse:(id)arg1;
- (void)navbarManagerDidReceiveMessage:(id)arg1;
- (void)navbarManagerDidDismissAllMessages:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchTrackerRecognized:(id)arg1;
- (void)collapseGestureTouchMoved:(id)arg1;
- (void)reverseAndCleanupCollapseAnimator;
- (void)setupPausedCollapseAnimatorIfNeeded;
- (double)collapseTargetOriginY;
- (void)appGrabberViewCloseButtonTapped:(id)arg1;
- (void)hideDimmingView;
- (void)animateBrowserViewToTargetRect:(struct CGRect)arg1 grabberView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateBrowserViewFromSourceRect:(struct CGRect)arg1 interactive:(_Bool)arg2 grabberView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)finalContentViewFrame;
- (double)topAreaHeight;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
@property(readonly, nonatomic) _Bool inFullScreenModalPresentation;
@property(readonly, nonatomic) _Bool inExpandedPresentation;
- (_Bool)isLoaded;
- (void)dismiss;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) long long browserPresentationStyle;
@property(nonatomic) NSString *conversationID;
@property(nonatomic) _Bool isiMessage;
@property(readonly, nonatomic) _Bool shouldShowChatChrome;
@property(retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property(readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property(nonatomic) __weak NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property(retain, nonatomic) UIViewController *presentationViewController;
@property(readonly, nonatomic) _Bool shouldSuppressEntryView;
@property(readonly, nonatomic) _Bool mayBeKeptInViewHierarchy;
@property(readonly, nonatomic) _Bool supportsQuickView;
@property(readonly, nonatomic) _Bool wantsOpaqueUI;
@property(readonly, nonatomic) _Bool wantsDarkUI;

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID;
@property(readonly, nonatomic) unsigned long long badgeValue;
@property(readonly, nonatomic) CKBrowserDragManager *browserDragManager;
@property(readonly, nonatomic) _Bool canReplaceDataSource;
@property(retain, nonatomic) NSData *conversationEngramID;
@property(nonatomic) long long currentBrowserConsumer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGRect horizontalSwipeExclusionRect;
@property(readonly, nonatomic) long long parentModalPresentationStyle;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property(retain, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) UIViewController *remoteViewController;
@property(retain, nonatomic) NSString *sender;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wasExpandedPresentation;

@end

