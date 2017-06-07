//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSArray, SUSegmentedControl, UIView;

@interface MSPurchasesViewController : SUViewController
{
    long long _activeViewControllerIndex;
    UIView *_containerView;
    SUSegmentedControl *_segmentedControl;
    NSArray *_viewControllers;
}

- (void)_showActiveViewController;
- (void)_setActiveViewControllerIndex:(long long)arg1;
- (void)_reloadViewControllersWithSection:(id)arg1;
- (void)_reloadSegmentedControlPlacement;
- (id)_newViewControllerForPageSection:(id)arg1;
- (id)_newSegmentedControlWithPageSectionGroup:(id)arg1;
- (id)_activeViewController;
- (void)_tabConfigurationChangedNotification:(id)arg1;
- (void)_segmentedControlAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)loadView;
- (void)invalidateForMemoryPurge;
- (id)copyArchivableContext;
- (void)dealloc;
- (id)initWithSection:(id)arg1;

@end
