//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIContentModuleContextDelegate-Protocol.h>
#import <ControlCenterUI/CCUIModuleCollectionViewControllerDelegate-Protocol.h>
#import <ControlCenterUI/CCUIModuleInstanceManagerObserver-Protocol.h>

@class CCUIModuleCollectionViewController, CCUIModuleInstanceManager, CCUIStatusLabelViewController, NSString;
@protocol CCUIModularControlCenterViewControllerDelegate;

@interface CCUIModularControlCenterViewController : UIViewController <CCUIModuleCollectionViewControllerDelegate, CCUIContentModuleContextDelegate, CCUIModuleInstanceManagerObserver>
{
    CCUIModuleInstanceManager *_moduleManager;
    _Bool _active;
    _Bool _hostedInTestApp;
    id <CCUIModularControlCenterViewControllerDelegate> _delegate;
    CCUIModuleInstanceManager *_moduleInstanceManager;
    CCUIStatusLabelViewController *_statusLabelViewController;
}

+ (id)_sharedCollectionViewController;
@property(nonatomic, getter=isHostedInTestApp) _Bool hostedInTestApp; // @synthesize hostedInTestApp=_hostedInTestApp;
@property(readonly, nonatomic) CCUIStatusLabelViewController *statusLabelViewController; // @synthesize statusLabelViewController=_statusLabelViewController;
@property(readonly, nonatomic) CCUIModuleInstanceManager *moduleInstanceManager; // @synthesize moduleInstanceManager=_moduleInstanceManager;
@property(nonatomic) __weak id <CCUIModularControlCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reparentCollectionViewController;
- (id)_safeModuleCollectionViewContainerView;
- (id)_moduleCollectionViewContainerView;
- (id)_safeStatusLabelViewContainerView;
- (id)_statusLabelViewContainerView;
- (long long)_interfaceOrientation;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)dismissExpandedViewForContentModuleContext:(id)arg1;
- (void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (long long)interfaceOrientationForModuleCollectionViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)_resignActive;
- (void)_reparentAndBecomeActive;
- (void)dismissPresentedContent;
- (_Bool)canDismissPresentedContent;
@property(readonly, nonatomic) CCUIModuleCollectionViewController *moduleCollectionViewController; // @dynamic moduleCollectionViewController;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @dynamic edgeInsets;
- (id)initWithSystemAgent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
