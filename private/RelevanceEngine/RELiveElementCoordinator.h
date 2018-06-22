//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REElementCoordinator.h>

#import "REDataSourceManagerObserver.h"
#import "REElementDataSourceControllerDelegate.h"
#import "REElementRelevanceEngineDelegate.h"

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, REElementRelevanceEngine, REUpNextScheduler;

@interface RELiveElementCoordinator : REElementCoordinator <REElementDataSourceControllerDelegate, REElementRelevanceEngineDelegate, REDataSourceManagerObserver>
{
    REElementRelevanceEngine *_relevanceEngine;
    NSMutableDictionary *_elementIdElementMap;
    NSMutableArray *_updateList;
    REUpNextScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_controllerQueue;
    _Bool _reloadImmediately;
    NSCountedSet *_remainingInsertOperations;
    NSCountedSet *_remainingRemoveOperations;
    unsigned long long _currentReloadTryCount;
}

- (void).cxx_destruct;
- (void)_onqueue_async:(CDUnknownBlockType)arg1;
- (void)relevanceEngine:(id)arg1 elementWasRemoved:(id)arg2;
- (void)relevanceEngine:(id)arg1 elementWasAdded:(id)arg2;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)_main_queue_performViewUpdates:(id)arg1 toCoordinator:(id)arg2;
- (void)_queue_scheduleElementUpdate:(id)arg1;
- (void)_queue_reload;
- (void)_queue_removeElement:(id)arg1;
- (void)_queue_refreshElement:(id)arg1;
- (void)_queue_reloadElement:(id)arg1;
- (id)_interactionForElement:(id)arg1;
- (void)_queue_addElement:(id)arg1 toSection:(id)arg2;
- (_Bool)elementDataSourceController:(id)arg1 isElementVisible:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didRefreshElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didRemoveElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didReloadElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didAddElement:(id)arg2 toSection:(id)arg3;
- (void)elementDataSourceController:(id)arg1 performBatchUpdates:(CDUnknownBlockType)arg2;
- (id)predictionForElementAtPath:(id)arg1;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1 toSection:(id)arg2;
- (void)dataSourceManager:(id)arg1 willUnloadDataSourceController:(id)arg2;
- (void)dataSourceManager:(id)arg1 didLoadDataSourceController:(id)arg2;
- (void)_enumerateSectionsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)elementForElementId:(id)arg1;
- (id)featureMapForElementId:(id)arg1 trainingContext:(id)arg2;
- (id)elementRelevanceEngine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

