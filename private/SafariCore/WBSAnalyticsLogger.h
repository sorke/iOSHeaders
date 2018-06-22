//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWDServerConnection, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WBSAnalyticsLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_analyticsSynchronizationQueue;
    NSMutableDictionary *_pageLoadStartTimes;
    AWDServerConnection *_awdServer;
}

+ (id)sharedLogger;
@property(readonly, nonatomic) AWDServerConnection *awdServer; // @synthesize awdServer=_awdServer;
- (void).cxx_destruct;
- (void)userDidReceiveSharedPasswordWithOutcome:(int)arg1;
- (void)userDidSharePasswordWithOutcome:(int)arg1;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(_Bool)arg1 error:(id)arg2;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(_Bool)arg1;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(_Bool)arg1 localState:(long long)arg2 remoteState:(long long)arg3;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1;
- (void)submitAutomaticReaderActivation:(int)arg1;
- (void)didToggleDomainSpecificAutomaticReader:(_Bool)arg1;
- (void)didToggleGloballyUseAutomaticReader:(_Bool)arg1;
- (void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(unsigned long long)arg3 itemsPerRow:(unsigned long long)arg4 isNewTabPage:(_Bool)arg5;
- (void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2 isNewTabPage:(_Bool)arg3;
- (void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(unsigned long long)arg2 itemsPerRow:(unsigned long long)arg3 isNewTabPage:(_Bool)arg4;
- (void)userInteractedWithGeneratedPasswordWithInteractionType:(int)arg1;
- (void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg1;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(_Bool)arg2;
- (void)didShowContactAutoFillSetsWithMeCardSets:(_Bool)arg1 showingPreviouslyCustomizedSet:(_Bool)arg2;
- (void)didAutoFillCustomContactSetShowingMeCard:(_Bool)arg1;
- (void)safeBrowsingUserActionAfterSeeingWarning:(int)arg1;
- (void)safeBrowsingWarningPageShown:(int)arg1;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (void)pageLoadStarted:(unsigned long long)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1;
- (void)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1;

@end

