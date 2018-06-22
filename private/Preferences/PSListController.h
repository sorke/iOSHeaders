//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSViewController.h>

#import "PSSpecifierObserver.h"
#import "PSViewControllerOffsetProtocol.h"
#import "UIAlertViewDelegate.h"
#import "UIAppearance.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDataSourcePrefetching.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIKeyboard, UITableView, UIView;

@interface PSListController : PSViewController <UIAppearance, UITableViewDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UIAlertViewDelegate, UIPopoverPresentationControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol>
{
    NSMutableArray *_prequeuedReusablePSTableCells;
    NSMutableDictionary *_cells;
    _Bool _cachesCells;
    _Bool _reusesCells;
    _Bool _forceSynchronousIconLoadForCreatedCells;
    UITableView *_table;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    NSMutableArray *_groups;
    NSString *_specifierID;
    NSMutableArray *_bundleControllers;
    _Bool _bundlesLoaded;
    _Bool _showingSetupController;
    _Bool _keyboardWasVisible;
    UIKeyboard *_keyboard;
    _Bool _popupIsModal;
    _Bool _popupIsDismissing;
    _Bool _hasAppeared;
    float _verticalContentOffset;
    NSString *_offsetItemName;
    struct CGPoint _contentOffsetWithKeyboard;
    NSString *_highlightItemName;
    _Bool _isVisible;
    id <PSSpecifierDataSource> _dataSource;
    _Bool _requestingSpecifiersFromDataSource;
    _Bool _sectionContentInsetInitialized;
    UIView *_containerView;
    NSIndexPath *_savedSelectedIndexPath;
    _Bool _edgeToEdgeCells;
    _Bool _prefetchingEnabled;
    _Bool _usesDarkTheme;
    NSDictionary *_pendingURLResourceDictionary;
    NSString *_specifierIDPendingPush;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_separatorColor;
    UIColor *_cellHighlightColor;
    UIColor *_cellAccessoryColor;
    UIColor *_cellAccessoryHighlightColor;
    UIColor *_textColor;
    UIColor *_altTextColor;
    UIColor *_buttonTextColor;
    UIColor *_editableTextColor;
    UIColor *_editablePlaceholderTextColor;
    UIColor *_editableInsertionPointColor;
    UIColor *_editableSelectionBarColor;
    UIColor *_editableSelectionHighlightColor;
    UIColor *_footerHyperlinkColor;
    UIColor *_segmentedSliderTrackColor;
}

+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2;
+ (id)appearanceForTraitCollection:(id)arg1;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)arg1;
+ (id)appearance;
+ (id)aggregateReportingDomainOverride;
+ (void)setAggregateReportingDomainOverride:(id)arg1;
+ (_Bool)displaysButtonBar;
@property(retain, nonatomic) UIColor *segmentedSliderTrackColor; // @synthesize segmentedSliderTrackColor=_segmentedSliderTrackColor;
@property(retain, nonatomic) UIColor *footerHyperlinkColor; // @synthesize footerHyperlinkColor=_footerHyperlinkColor;
@property(retain, nonatomic) UIColor *editableSelectionHighlightColor; // @synthesize editableSelectionHighlightColor=_editableSelectionHighlightColor;
@property(retain, nonatomic) UIColor *editableSelectionBarColor; // @synthesize editableSelectionBarColor=_editableSelectionBarColor;
@property(retain, nonatomic) UIColor *editableInsertionPointColor; // @synthesize editableInsertionPointColor=_editableInsertionPointColor;
@property(retain, nonatomic) UIColor *editablePlaceholderTextColor; // @synthesize editablePlaceholderTextColor=_editablePlaceholderTextColor;
@property(retain, nonatomic) UIColor *editableTextColor; // @synthesize editableTextColor=_editableTextColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *altTextColor; // @synthesize altTextColor=_altTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *cellAccessoryHighlightColor; // @synthesize cellAccessoryHighlightColor=_cellAccessoryHighlightColor;
@property(retain, nonatomic) UIColor *cellAccessoryColor; // @synthesize cellAccessoryColor=_cellAccessoryColor;
@property(retain, nonatomic) UIColor *cellHighlightColor; // @synthesize cellHighlightColor=_cellHighlightColor;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic, getter=isPrefetchingEnabled) _Bool prefetchingEnabled; // @synthesize prefetchingEnabled=_prefetchingEnabled;
@property(copy, nonatomic) NSString *specifierIDPendingPush; // @synthesize specifierIDPendingPush=_specifierIDPendingPush;
@property(retain, nonatomic) NSDictionary *pendingURLResourceDictionary; // @synthesize pendingURLResourceDictionary=_pendingURLResourceDictionary;
@property(nonatomic) _Bool edgeToEdgeCells; // @synthesize edgeToEdgeCells=_edgeToEdgeCells;
@property(nonatomic) _Bool forceSynchronousIconLoadForCreatedCells; // @synthesize forceSynchronousIconLoadForCreatedCells=_forceSynchronousIconLoadForCreatedCells;
- (void).cxx_destruct;
- (void)prefetchResourcesFor:(id)arg1;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (void)performSpecifierUpdates:(id)arg1;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
@property(readonly, nonatomic) long long observerType;
@property(retain, nonatomic) id <PSSpecifierDataSource> specifierDataSource;
- (void)_moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_setNotShowingSetupController;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)_performHighlightForSpecifierWithID:(id)arg1 tryAgainIfFailed:(_Bool)arg2;
- (void)_performHighlightForSpecifierWithID:(id)arg1;
- (void)highlightSpecifierWithID:(id)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (float)verticalContentOffset;
- (void)selectRowForSpecifier:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_setContentInset:(double)arg1;
- (double)_getKeyboardIntersectionHeightFromUserInfo:(id)arg1;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (void)handleURL:(id)arg1;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1;
- (_Bool)handlePendingURL;
- (void)clearPendingURL;
- (_Bool)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(_Bool *)arg3;
- (void)showController:(id)arg1;
- (void)pushController:(id)arg1 animate:(_Bool)arg2;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)dismissPopover;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (id)specifiersForIDs:(id)arg1;
- (id)specifierForID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)controllerForSpecifier:(id)arg1;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (void)lazyLoadBundle:(id)arg1;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (void)dismissConfirmationViewAnimated:(_Bool)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(_Bool)arg2 swapAlertButtons:(_Bool)arg3;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(_Bool)arg2;
- (_Bool)performConfirmationCancelActionForSpecifier:(id)arg1;
- (_Bool)performConfirmationActionForSpecifier:(id)arg1;
- (_Bool)performButtonActionForSpecifier:(id)arg1;
- (_Bool)performLoadActionForSpecifier:(id)arg1;
- (_Bool)performActionForSpecifier:(id)arg1;
- (void)_returnKeyPressed:(id)arg1;
- (void)returnPressedAtEnd;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareSpecifiersMetadata;
- (void)viewDidLoad;
- (id)findFirstVisibleResponder;
- (_Bool)shouldSelectResponderOnAppearance;
- (void)_scrollToSpecifierNamed:(id)arg1;
- (_Bool)_isEmptyGroup:(unsigned long long)arg1;
- (void)_scrollToSpecifierWithID:(id)arg1 animated:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_tableView:(id)arg1 viewForCustomInSection:(long long)arg2 isHeader:(_Bool)arg3;
- (double)_tableView:(id)arg1 heightForCustomInSection:(long long)arg2 isHeader:(_Bool)arg3;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(_Bool)arg3;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)createPrequeuedPSTableCells:(unsigned long long)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)cachedCellForSpecifier:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)specifierID;
- (void)setSpecifierID:(id)arg1;
- (void)reloadSpecifiers;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (void)reload;
- (void)loseFocus;
- (void)createGroupIndices;
- (id)_createGroupIndices:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLayoutSubviews;
- (void)_updateSectionContentInsetWithAnimation:(_Bool)arg1;
- (void)loadView;
- (_Bool)_isRegularWidth;
- (long long)tableViewStyle;
- (Class)tableViewClass;
- (id)initForContentSize:(struct CGSize)arg1;
- (void)contentSizeChangedNotificationPosted:(id)arg1;
- (void)contentSizeDidChange:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_unloadBundleControllers;
- (void)_loadBundleControllers;
- (void)updateSpecifiersInRange:(struct _NSRange)arg1 withSpecifiers:(id)arg2;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (long long)_nextGroupInSpecifiersAfterIndex:(long long)arg1 inArray:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(_Bool)arg3;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(_Bool)arg2;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(_Bool)arg2;
- (void)removeLastSpecifierAnimated:(_Bool)arg1;
- (void)removeLastSpecifier;
- (void)removeSpecifierAtIndex:(long long)arg1;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifierAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)removeSpecifierID:(id)arg1 animated:(_Bool)arg2;
- (void)removeSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)addSpecifiersFromArray:(id)arg1 animated:(_Bool)arg2;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)addSpecifier:(id)arg1;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2 animated:(_Bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(_Bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(_Bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(long long)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2 animated:(_Bool)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(_Bool)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(_Bool)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (struct _NSRange)rangeOfSpecifiersInGroupID:(id)arg1;
- (id)specifiersInGroup:(long long)arg1;
- (long long)rowsForGroup:(long long)arg1;
- (long long)indexForRow:(long long)arg1 inGroup:(long long)arg2;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierAtIndex:(long long)arg3;
- (_Bool)_getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifier:(id)arg3;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierID:(id)arg3;
- (id)getGroupSpecifierForSpecifierID:(id)arg1;
- (id)getGroupSpecifierForSpecifier:(id)arg1;
- (id)specifierAtIndex:(long long)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (long long)numberOfGroups;
- (long long)indexOfGroup:(long long)arg1;
- (_Bool)containsSpecifier:(id)arg1;
- (long long)indexOfSpecifier:(id)arg1;
- (long long)indexOfSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSpecifierAtIndex:(long long)arg1;
- (void)reloadSpecifierAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (long long)indexForIndexPath:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)indexPathForIndex:(long long)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_addIdentifierForSpecifier:(id)arg1;
- (id)specifiers;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)specifier;
- (id)bundle;
- (id)table;
@property(readonly, copy) NSString *description;
- (void)setCachesCells:(_Bool)arg1;
- (void)setReusesCells:(_Bool)arg1;
- (void)clearCache;
- (id)popupStylePopoverController;
- (void)showPINSheet:(id)arg1;
- (void)showPINSheet:(id)arg1 allowOptionsButton:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

