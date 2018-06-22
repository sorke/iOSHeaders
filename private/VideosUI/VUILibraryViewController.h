//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideosUI/VUILibraryStackViewController.h>

#import "UICollectionViewDataSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "VUILibraryPopoverDataSource.h"
#import "VUILibraryPopoverDelegate.h"
#import "VUILibraryShelfCollectionViewControllerDelegate.h"
#import "VUIMediaEntitiesFetchControllerDelegate.h"
#import "VUIMediaItemEntityTypesFetchControllerDelegate.h"
#import "VUIMediaLibraryFetchControllerQueueDelegate.h"

@class NSArray, NSDictionary, NSString, UIBarButtonItem, VUILibraryBannerCollectionViewCell, VUILibraryDownloadViewController, VUILibraryListPopoverViewCell, VUILibraryMediaEntityShelvesViewModel, VUILibraryMenuItemViewCell, VUILibraryPopoverViewController, VUIMediaLibrary, _VUILibrarySeeAllController;

__attribute__((visibility("hidden")))
@interface VUILibraryViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUILibraryShelfCollectionViewControllerDelegate, VUIMediaItemEntityTypesFetchControllerDelegate, VUIMediaEntitiesFetchControllerDelegate, VUIMediaLibraryFetchControllerQueueDelegate, VUILibraryPopoverDataSource, VUILibraryPopoverDelegate, UIGestureRecognizerDelegate>
{
    id _isNetworkTypeChangedToken;
    id _networkReachabilityChangedToken;
    _Bool _lastNetworkReachableStatus;
    VUILibraryDownloadViewController *_presentedDownloadViewController;
    _Bool _ppt_isLoaded;
    _Bool _appliedNavigationItem;
    _Bool _hasMenuItemFetchCompleted;
    _Bool _areLocalMediaItemsAvailable;
    _Bool _hasMediaEntitiesFetchCompleted;
    _Bool _doesDeviceSupportHDR;
    _Bool _isIpad;
    UIBarButtonItem *_libraryBarButton;
    NSArray *_menuMediaItemEntityTypes;
    NSArray *_menuCells;
    VUILibraryMenuItemViewCell *_menuItemSizingCell;
    VUILibraryPopoverViewController *_popoverViewController;
    NSArray *_popoverDropdownCells;
    VUILibraryListPopoverViewCell *_sizingPopoverCell;
    long long _currentlySelectedPopoverCell;
    NSArray *_homeShares;
    VUIMediaLibrary *_currentHomeShareMediaLibrary;
    VUILibraryBannerCollectionViewCell *_bannerViewSizingCell;
    VUILibraryMediaEntityShelvesViewModel *_shelvesViewModel;
    NSDictionary *_shelfTypeByFetchRequestIdentifier;
    _VUILibrarySeeAllController *_currentSeeAllController;
}

+ (id)_localizedTitleForShelfType:(long long)arg1;
+ (CDUnknownBlockType)shelfTypesSortComparator;
@property(nonatomic) _Bool isIpad; // @synthesize isIpad=_isIpad;
@property(nonatomic) _Bool doesDeviceSupportHDR; // @synthesize doesDeviceSupportHDR=_doesDeviceSupportHDR;
@property(retain, nonatomic) _VUILibrarySeeAllController *currentSeeAllController; // @synthesize currentSeeAllController=_currentSeeAllController;
@property(retain, nonatomic) NSDictionary *shelfTypeByFetchRequestIdentifier; // @synthesize shelfTypeByFetchRequestIdentifier=_shelfTypeByFetchRequestIdentifier;
@property(nonatomic) _Bool hasMediaEntitiesFetchCompleted; // @synthesize hasMediaEntitiesFetchCompleted=_hasMediaEntitiesFetchCompleted;
@property(retain, nonatomic) VUILibraryMediaEntityShelvesViewModel *shelvesViewModel; // @synthesize shelvesViewModel=_shelvesViewModel;
@property(retain, nonatomic) VUILibraryBannerCollectionViewCell *bannerViewSizingCell; // @synthesize bannerViewSizingCell=_bannerViewSizingCell;
@property(retain, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary; // @synthesize currentHomeShareMediaLibrary=_currentHomeShareMediaLibrary;
@property(retain, nonatomic) NSArray *homeShares; // @synthesize homeShares=_homeShares;
@property(nonatomic) long long currentlySelectedPopoverCell; // @synthesize currentlySelectedPopoverCell=_currentlySelectedPopoverCell;
@property(retain, nonatomic) VUILibraryListPopoverViewCell *sizingPopoverCell; // @synthesize sizingPopoverCell=_sizingPopoverCell;
@property(retain, nonatomic) NSArray *popoverDropdownCells; // @synthesize popoverDropdownCells=_popoverDropdownCells;
@property(retain, nonatomic) VUILibraryPopoverViewController *popoverViewController; // @synthesize popoverViewController=_popoverViewController;
@property(retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell; // @synthesize menuItemSizingCell=_menuItemSizingCell;
@property(retain, nonatomic) NSArray *menuCells; // @synthesize menuCells=_menuCells;
@property(retain, nonatomic) NSArray *menuMediaItemEntityTypes; // @synthesize menuMediaItemEntityTypes=_menuMediaItemEntityTypes;
@property(nonatomic) _Bool areLocalMediaItemsAvailable; // @synthesize areLocalMediaItemsAvailable=_areLocalMediaItemsAvailable;
@property(nonatomic) _Bool hasMenuItemFetchCompleted; // @synthesize hasMenuItemFetchCompleted=_hasMenuItemFetchCompleted;
@property(retain, nonatomic) UIBarButtonItem *libraryBarButton; // @synthesize libraryBarButton=_libraryBarButton;
@property(nonatomic) _Bool appliedNavigationItem; // @synthesize appliedNavigationItem=_appliedNavigationItem;
- (void).cxx_destruct;
- (_Bool)ppt_isLoading;
- (id)_localizedTitleForCellType:(long long)arg1;
- (void)_configureShelfViewController:(id)arg1 withShelfType:(long long)arg2;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_addMediaLibraryNotificationObservers;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (_Bool)_isDeviceMediaLibraryInitialUpdateInProgress;
- (id)_deviceMediaLibrary;
- (_Bool)_isNetworkReachable;
- (void)_networkStatusChanged;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_reloadPopoverViewController;
- (void)_updatePopoverSelectedItem;
- (void)_updatePopoverStateWithCellType:(long long)arg1;
- (id)_popoverTitleForIndexPath:(id)arg1;
- (void)_libraryPopoverPressed;
- (id)_viewControllerWithCellType:(long long)arg1 forPopover:(_Bool)arg2;
- (void)_selectLibraryCellType:(long long)arg1 fromPopover:(_Bool)arg2;
- (id)_leftNavigationButtonWithTitle:(id)arg1;
- (void)_reparentNavigationItem:(id)arg1;
- (void)_updateNavigationTitle;
- (void)_showHomeVideosIfNoRecentlyAddedContent;
- (_Bool)_shouldAutomaticallySelectHomeVideos;
- (void)_showContentOrNoContentView;
- (_Bool)_shouldShowContentView;
- (void)_constructLibraryDataSourceAndUpdateActiveView;
- (id)_menuItemsAndPopoverMenuItems:(id *)arg1;
- (void)_updateViewIfFetchComplete;
- (_Bool)_haveAllInitialFetchesCompleted;
- (void)_startFetchControllers;
- (id)_fetchRequestsWithMediaLibrary:(id)arg1 shelfTypeMap:(id *)arg2;
- (void)fetchDidCompleteForMediaLibraryFetchControllerQueue:(id)arg1;
- (void)popoverView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)popoverView:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)popoverView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)popoverView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInPopoverView:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchDidFailWithError:(id)arg2;
- (void)controller:(id)arg1 fetchDidCompleteWithResult:(id)arg2;
- (void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4;
- (void)seeAllButtonPressed:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)start;
- (void)configureWithCollectionView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

