//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListViewController.h>

#import "NCNotificationListSectionHeaderViewDelegate.h"
#import "NCNotificationSectionListDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NCAnimationCoordinator, NCNotificationListSectionHeaderView, NCNotificationListSectionRevealHintView, NCNotificationListStalenessEventTracker, NCNotificationPriorityList, NSMutableSet, NSString, _UILegibilitySettings, _UIStatesFeedbackGenerator;

@interface NCNotificationCombinedListViewController : NCNotificationListViewController <NCNotificationSectionListDelegate, NCNotificationListSectionHeaderViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _showingNotificationsHistory;
    _Bool _didPlayRevealHaptic;
    _Bool _shouldLimitTargetContentOffsetForNotificationListReveal;
    _Bool _collectionViewRectExpanded;
    _Bool _notificationHistoryRevealedStateLocked;
    _Bool _notificationHistorySectionNeedsReload;
    _Bool _performingBatchedSectionListOperations;
    _Bool _shouldPerformReloadForBatchedOperations;
    _Bool _shouldAllowNotificationsHistoryReveal;
    int _revealListTriggerState;
    NCNotificationPriorityList *_notificationPriorityList;
    id <NCNotificationSectionList> _notificationSectionList;
    NCAnimationCoordinator *_requestOperationAnimationCoordinator;
    id <UIViewControllerTransitionCoordinator> _lastDismissalTransitionCoordinator;
    NCNotificationListSectionHeaderView *_headerViewInClearState;
    NCNotificationListSectionHeaderView *_headerViewInForceTouchState;
    NCNotificationListSectionRevealHintView *_revealHintView;
    double _prioritySectionLowestPosition;
    _UIStatesFeedbackGenerator *_revealFeedbackGenerator;
    NCNotificationListStalenessEventTracker *_notificationListStalenessEventTracker;
    NSMutableSet *_notificationRequestsRemovedFromNotificationCenterDestination;
    _UILegibilitySettings *_legibilitySettings;
    double _revealPercentage;
}

@property(nonatomic) double revealPercentage; // @synthesize revealPercentage=_revealPercentage;
@property(nonatomic) _Bool shouldAllowNotificationsHistoryReveal; // @synthesize shouldAllowNotificationsHistoryReveal=_shouldAllowNotificationsHistoryReveal;
@property(nonatomic) _Bool shouldPerformReloadForBatchedOperations; // @synthesize shouldPerformReloadForBatchedOperations=_shouldPerformReloadForBatchedOperations;
@property(nonatomic, getter=isPerformingBatchedSectionListOperations) _Bool performingBatchedSectionListOperations; // @synthesize performingBatchedSectionListOperations=_performingBatchedSectionListOperations;
@property(nonatomic) _Bool notificationHistorySectionNeedsReload; // @synthesize notificationHistorySectionNeedsReload=_notificationHistorySectionNeedsReload;
@property(nonatomic, getter=isNotificationHistoryRevealedStateLocked) _Bool notificationHistoryRevealedStateLocked; // @synthesize notificationHistoryRevealedStateLocked=_notificationHistoryRevealedStateLocked;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic, getter=isCollectionViewRectExpanded) _Bool collectionViewRectExpanded; // @synthesize collectionViewRectExpanded=_collectionViewRectExpanded;
@property(nonatomic) _Bool shouldLimitTargetContentOffsetForNotificationListReveal; // @synthesize shouldLimitTargetContentOffsetForNotificationListReveal=_shouldLimitTargetContentOffsetForNotificationListReveal;
@property(retain, nonatomic) NSMutableSet *notificationRequestsRemovedFromNotificationCenterDestination; // @synthesize notificationRequestsRemovedFromNotificationCenterDestination=_notificationRequestsRemovedFromNotificationCenterDestination;
@property(retain, nonatomic) NCNotificationListStalenessEventTracker *notificationListStalenessEventTracker; // @synthesize notificationListStalenessEventTracker=_notificationListStalenessEventTracker;
@property(nonatomic) _Bool didPlayRevealHaptic; // @synthesize didPlayRevealHaptic=_didPlayRevealHaptic;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *revealFeedbackGenerator; // @synthesize revealFeedbackGenerator=_revealFeedbackGenerator;
@property(nonatomic) double prioritySectionLowestPosition; // @synthesize prioritySectionLowestPosition=_prioritySectionLowestPosition;
@property(nonatomic) int revealListTriggerState; // @synthesize revealListTriggerState=_revealListTriggerState;
@property(retain, nonatomic) NCNotificationListSectionRevealHintView *revealHintView; // @synthesize revealHintView=_revealHintView;
@property(nonatomic, getter=isShowingNotificationsHistory) _Bool showingNotificationsHistory; // @synthesize showingNotificationsHistory=_showingNotificationsHistory;
@property(nonatomic) __weak NCNotificationListSectionHeaderView *headerViewInForceTouchState; // @synthesize headerViewInForceTouchState=_headerViewInForceTouchState;
@property(nonatomic) __weak NCNotificationListSectionHeaderView *headerViewInClearState; // @synthesize headerViewInClearState=_headerViewInClearState;
@property(retain, nonatomic) id <UIViewControllerTransitionCoordinator> lastDismissalTransitionCoordinator; // @synthesize lastDismissalTransitionCoordinator=_lastDismissalTransitionCoordinator;
@property(retain, nonatomic) NCAnimationCoordinator *requestOperationAnimationCoordinator; // @synthesize requestOperationAnimationCoordinator=_requestOperationAnimationCoordinator;
@property(retain, nonatomic) id <NCNotificationSectionList> notificationSectionList; // @synthesize notificationSectionList=_notificationSectionList;
@property(retain, nonatomic) NCNotificationPriorityList *notificationPriorityList; // @synthesize notificationPriorityList=_notificationPriorityList;
- (void).cxx_destruct;
- (void)_performNotificationIncomingSectionOperation:(CDUnknownBlockType)arg1 delayAnimation:(_Bool)arg2;
- (void)_performNotificationHistorySectionOperation:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 delayAnimation:(_Bool)arg3;
- (void)_updateShouldAllowNotificationsHistoryReveal;
- (id)_adjustedSectionIndexPathForListOperation:(id)arg1;
- (id)_adjustedSectionIndexPathForCollectionViewOperation:(id)arg1;
- (unsigned long long)_adjustedSectionIndexForListOperation:(unsigned long long)arg1;
- (unsigned long long)_adjustedSectionIndexForCollectionViewOperation:(unsigned long long)arg1;
- (_Bool)_isNotificationRequestForLockScreenNotificationDestination:(id)arg1;
- (_Bool)_isNotificationRequestForNotificationCenterDestination:(id)arg1;
- (id)_requestSectionsForNotificationRequests:(id)arg1;
- (void)_updateRaiseToListenRequest;
- (void)_actuateFeedbackForRevealInvalidationIfNecessary;
- (void)_actuateFeedbackForRevealIfNecessary;
- (void)_configureRevealFeedbackIfNecessary;
- (void)_resetNotificationsHistory;
- (unsigned long long)_numberOfElementsInPreviousSectionsFromSection:(unsigned long long)arg1;
- (id)_filteredIndexPathsForAnimationFromIndexPaths:(id)arg1;
- (double)_settlingYPositionForRevealForScrollView:(id)arg1;
- (_Bool)_shouldShowRevealHintView;
- (void)_updateNotificationHistoryRevealStateIfEmpty;
- (void)_updateRevealHintViewRevealPercentageForScrollView:(id)arg1;
- (double)_revealPercentageForScrollView:(id)arg1;
- (double)_revealDistanceForScrollView:(id)arg1;
- (_Bool)_isPrioritySectionSizeLessThanFrameForScrollView:(id)arg1;
- (void)_updateScrollViewForcedContentSizeHeight;
- (double)_forcedContentSizeHeight;
- (void)_updatePrioritySectionLowestPosition;
- (void)_updateRevealHintViewIfNotificationsHistoryEmpty;
- (void)_updateRevealHintViewTitleDate;
- (void)_updateRevealHintViewTitlePersistence;
- (void)_updateRevealHintViewForListOperation;
- (_Bool)_isNotificationHistoryTopSectionHeaderVisible;
- (id)_notificationHistorySectionTopSectionHeader;
- (double)_revealHintViewPosition;
- (_Bool)_isRevealHintViewVisible;
- (void)_resetCollectionViewVisibleRectEdgeInsets;
- (void)_expandCollectionViewVisibleRect;
- (double)_revealHintingCurvePercentageForIndexPath:(id)arg1 revealPercentage:(double)arg2;
- (double)_yOffsetForRevealPercentage:(double)arg1;
- (void)_updateSupplementaryView:(id)arg1 layoutAttributes:(id)arg2 forRevealPercentage:(double)arg3 atIndexPath:(id)arg4;
- (void)_updateSectionHeadersRevealHintingForRevealPercentage:(double)arg1;
- (void)_updateCellForRevealPercentage:(double)arg1 atIndexPath:(id)arg2;
- (void)_updateNotificationCellsRevealHintingForRevealPercentage:(double)arg1;
- (void)_updateRevealHintingForPercentage:(double)arg1 scrollView:(id)arg2;
- (double)_adjustedFrictionForRevealAnimation;
- (double)_adjustedTensionForRevealAnimation;
- (void)_performHideAnimationForSectionHeadersWithRevealPercentage:(double)arg1;
- (void)_performHideAnimationForNotificationCellsWithRevealPercentage:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_hideNotificationsHistory;
- (double)_revealAnimationDelayForObjectAtIndexPath:(id)arg1;
- (void)_performRevealAnimationForSectionHeaders;
- (void)_performRevealAnimationForNotificationCellsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_revealNotificationsHistory;
- (void)_resetContentOffset;
- (void)_moveNotificationRequestsToHistorySectionPassingTest:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 movedAll:(_Bool)arg3;
- (void)_clearAllSectionListNotificationRequests;
- (void)_clearAllPriorityListNotificationRequests;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (_Bool)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)sectionHeaderViewDidDismissForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(id)arg1;
- (void)sectionHeaderView:(id)arg1 didReceiveClearActionForSectionIdentifier:(id)arg2;
- (void)sectionHeaderViewDidTransitionToClearState:(id)arg1;
- (void)_performBatchedSectionListOperations:(CDUnknownBlockType)arg1;
- (void)notificationSectionListNeedsReload:(id)arg1;
- (void)notificationSectionList:(id)arg1 didRemoveSectionsAtIndices:(id)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id)arg1 requestsReloadAtIndices:(id)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didReplaceNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didInsertNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (long long)notificationViewControllerDateFormatStyle:(id)arg1;
- (void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isNotificationRequestInRecentsSection:(id)arg1;
- (void)removeNotificationRequestFromRecentsSection:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)insertNotificationRequestIntoRecentsSection:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)allNotificationRequests;
- (_Bool)hasVisibleContent;
- (_Bool)hasContent;
- (_Bool)dismissModalFullScreenAnimated:(_Bool)arg1;
- (void)clearAllNonPersistent;
- (void)clearAll;
- (void)reloadRequestsWithSuppressedContent;
- (void)moveNotificationRequestsToRecentsSectionPassingTest:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)hideNotificationsFromIncomingSectionListForSectionIdentifier:(id)arg1 subSectionIdentifer:(id)arg2;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)showRequestsForNotificationSectionSettings:(id)arg1;
- (void)hideRequestsForNotificationSectionSettings:(id)arg1;
- (id)indexPathForNotificationRequest:(id)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_performRequestOperationAlongsideAnimations;
- (void)_createRequestOperationAnimationCoordinatorForInitialContentPresentation:(_Bool)arg1;
- (void)removeNotificationRequestsInIncomingSection:(id)arg1;
- (void)insertNotificationRequestsInIncomingSection:(id)arg1;
- (void)removeNotificationRequestsInNotificationHistorySection:(id)arg1;
- (void)insertNotificationRequestsInNotificationHistorySection:(id)arg1;
- (void)_reloadNotificationHistorySectionIfNecessary;
- (void)reloadNotificationRequestsInNotificationHistorySection:(id)arg1;
- (void)reloadNotificationRequestsInIncomingSection:(id)arg1;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)listViewControllerPresentedByUserAction;
- (void)forceNotificationHistoryRevealed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowingNotificationsHistory:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)_setShowingNotificationsHistory:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

