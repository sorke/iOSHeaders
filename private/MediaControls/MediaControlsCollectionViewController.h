//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>
#import <MediaControls/UIScrollViewDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, UIScrollView, UITapGestureRecognizer;
@protocol MediaControlsCollectionViewDataSource;

@interface MediaControlsCollectionViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIScrollView *_scrollView;
    NSMutableDictionary *_activeViewControllers;
    NSMutableSet *_inactiveViewControllers;
    NSMutableDictionary *_activeBackgroundViews;
    NSMutableSet *_inactiveBackgroundViews;
    _Bool _needsInitialSizeTransitionForRemote;
    _Bool _displayMultipleDestinations;
    id <MediaControlsCollectionViewDataSource> _dataSource;
    CDUnknownBlockType _dismissalBlock;
    long long _expandedDestinationIndex;
    long long _routeViewControllerIndex;
    UIViewController *_routingViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct UIEdgeInsets _scrollViewInsets;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(nonatomic) _Bool displayMultipleDestinations; // @synthesize displayMultipleDestinations=_displayMultipleDestinations;
@property(nonatomic) long long routeViewControllerIndex; // @synthesize routeViewControllerIndex=_routeViewControllerIndex;
@property(nonatomic) long long expandedDestinationIndex; // @synthesize expandedDestinationIndex=_expandedDestinationIndex;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(nonatomic) struct UIEdgeInsets scrollViewInsets; // @synthesize scrollViewInsets=_scrollViewInsets;
@property(nonatomic) __weak id <MediaControlsCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_handleScrollViewTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_attemptDismissal;
- (long long)_indexAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_rectForViewAtIndex:(long long)arg1 multi:(_Bool)arg2 size:(struct CGSize)arg3;
- (struct CGRect)_rectForViewAtIndex:(long long)arg1;
- (double)_totalHeight;
- (double)_backgroundCornerRadius;
- (double)_verticalSpacing;
- (double)_heightForExpanded;
- (double)_heightForCompact;
- (long long)numberOfDestinations;
- (void)_assignRouteViewToExpandedView;
- (void)_updateFramesForActiveViewControllersWithCoordinator:(id)arg1 assumingSize:(struct CGSize)arg2;
- (void)_setFrame:(struct CGRect)arg1 forVisibleViewAtIndex:(long long)arg2;
- (void)_tileViews;
- (void)_reapViews;
- (void)_populateViewsInFrame:(struct CGRect)arg1;
- (void)_removeActiveViewControllerAtIndex:(long long)arg1;
- (void)_moveViewForViewController:(id)arg1 withBackgroundView:(id)arg2;
- (id)_addViewControllerForIndex:(long long)arg1;
- (id)_createOrReuseViewController;
- (id)_createOrReuseBackgroundView;
- (void)_reflectMode;
- (void)_adjustForEnvironmentChangeWithSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)reloadData;
- (void)_willAppearInRemoteViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
