//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class MediaControlsCollectionViewCountData, NSArray, NSIndexSet, NSMutableDictionary, NSMutableSet, NSString, UIScrollView, UIViewController<MediaControlsCollectionItemViewController>, _MediaControlsTapHoldGestureRecognizer;

@interface MediaControlsCollectionViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableDictionary *_activeViewControllers;
    UIViewController<MediaControlsCollectionItemViewController> *_inactiveSelectedViewController;
    NSMutableSet *_inactiveViewControllers;
    CDUnknownBlockType _pendingUpdates;
    struct UIEdgeInsets _controlCenterEdgeInsets;
    struct CGSize _lastKnownEnvironmentSize;
    long long _animatedSelectionCount;
    long long _appearanceTransitionCount;
    _Bool _shouldDisableAutoReaping;
    _Bool _shouldIgnoreScrollNotifications;
    _Bool _isAnimatingSelection;
    _Bool _isPerformingBatchUpdates;
    _Bool _needsReloadData;
    MediaControlsCollectionViewCountData *_countData;
    id <MediaControlsCollectionViewDataSource> _dataSource;
    id <MediaControlsCollectionViewDelegate> _delegate;
    CDUnknownBlockType _dismissalBlock;
    long long _selectedItemIndex;
    _MediaControlsTapHoldGestureRecognizer *_tapGestureRecognizer;
    UIScrollView *_scrollView;
    long long _displayMode;
    struct UIEdgeInsets _scrollViewInsets;
}

+ (id)alphaAnimatorWithAnimations:(CDUnknownBlockType)arg1;
+ (id)frameAnimator;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) _MediaControlsTapHoldGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(nonatomic) struct UIEdgeInsets scrollViewInsets; // @synthesize scrollViewInsets=_scrollViewInsets;
@property(nonatomic) __weak id <MediaControlsCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MediaControlsCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)_backgroundCornerRadius;
- (_Bool)_isScrollViewAnimatingScroll;
- (id)_visibleBottomViewControllers;
- (id)_visibleTopViewControllers;
- (void)_enumerateActiveViewControllers:(CDUnknownBlockType)arg1;
- (_Bool)_wantsTapGestureRecognizer;
- (void)_setSelectedItemIndex:(long long)arg1 animated:(_Bool)arg2 shouldScroll:(_Bool)arg3 shouldNotifyDelegate:(_Bool)arg4;
- (void)_handleScrollViewTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_setHighlighted:(_Bool)arg1 forViewControllerAtIndex:(long long)arg2;
- (void)_removeViewController:(id)arg1;
- (void)_removeInactiveViewControllersFromHierarchy;
- (void)_reapActiveViews;
- (void)_reapViewAtIndex:(long long)arg1;
- (id)_insertViewControllerForIndex:(long long)arg1;
- (void)_transitionTopAndBottomViewControllersToVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transitionToVisible:(_Bool)arg1;
- (void)_transitionToDisplayMode:(long long)arg1 usingTransitionCoordinator:(id)arg2 assumingSize:(struct CGSize)arg3;
- (void)_adjustForEnvironmentChangeWithSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_adjustForEnvironmentChangeIfNeededWithSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (double)_verticalSpacing;
- (void)_updateFrameForViewController:(id)arg1 atIndex:(long long)arg2 withCoordinator:(id)arg3 assumingSize:(struct CGSize)arg4;
- (void)_updateFramesForActiveViewControllersWithCoordinator:(id)arg1 assumingSize:(struct CGSize)arg2;
- (void)_updateContentSize;
- (void)_updateContentInsets;
- (double)_totalHeight;
- (void)_tileViews;
- (void)_setFrame:(struct CGRect)arg1 forVisibleViewAtIndex:(long long)arg2;
- (void)_scrollToSelectedItemAnimated:(_Bool)arg1;
- (void)_reloadDataIfNeeded;
- (void)_populateViewsInFrame:(struct CGRect)arg1;
- (struct CGRect)_frameForViewAtIndex:(long long)arg1 displayMode:(long long)arg2 size:(struct CGSize)arg3;
- (struct CGRect)_frameForViewAtIndex:(long long)arg1 size:(struct CGSize)arg2;
- (struct CGRect)_frameForViewAtIndex:(long long)arg1;
- (struct _NSRange)_rangeOfItemsInRect:(struct CGRect)arg1;
- (id)_indexesOfItemsInRect:(struct CGRect)arg1;
- (double)_selectedItemHeightInSize:(struct CGSize)arg1 shouldIgnoreInsets:(_Bool)arg2;
- (double)_selectedItemHeightInSize:(struct CGSize)arg1;
- (double)_preferredSelectedItemHeight;
- (double)_regularItemHeight;
- (long long)_closestItemAtPoint:(struct CGPoint)arg1;
- (void)_dequeueAndPerformBatchUpdatesIfNeeded;
- (void)scrollToSelectedItemAnimated:(_Bool)arg1;
@property(readonly, nonatomic) NSIndexSet *visibleIndexes;
- (long long)itemAtPoint:(struct CGPoint)arg1;
- (void)reloadData;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deleteItemsAtIndexes:(id)arg1;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (void)insertItemAtIndex:(long long)arg1;
- (void)setSelectedItemIndex:(long long)arg1 animated:(_Bool)arg2 shouldScroll:(_Bool)arg3;
@property(readonly, nonatomic) NSArray *visibleBottomViewControllers;
@property(readonly, nonatomic) NSArray *visibleTopViewControllers;
@property(readonly, nonatomic) NSArray *visibleViewControllers;
- (id)viewControllerForSelectedItem;
- (id)viewControllerForItemAtIndex:(long long)arg1;
- (id)viewControllerForItemAtPoint:(struct CGPoint)arg1;
- (id)dequeueReusableViewControllerForItemAtIndex:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

