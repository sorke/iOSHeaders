//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

#import "REMLModelManagerObserver.h"
#import "REPredictorObserver.h"
#import "RERelevanceProviderEnvironmentDelegate.h"
#import "RESectionDelegate.h"

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, REDataSourceManager, REFeatureTransmuter, REKeyMultiValueMap, REPredictorManager, RERelevanceProviderEnvironment, REUpNextScheduler;

@interface REElementRelevanceEngine : RERelevanceEngineSubsystem <RESectionDelegate, RERelevanceProviderEnvironmentDelegate, REMLModelManagerObserver, REPredictorObserver>
{
    NSMutableSet *_elementsNeedingRelevanceUpdate;
    NSMutableDictionary *_sections;
    NSMutableDictionary *_predictedElements;
    NSMapTable *_relevanceProviderElementMap;
    REKeyMultiValueMap *_identifierElementIdentifierMap;
    REPredictorManager *_predictorManager;
    RERelevanceProviderEnvironment *_providerEnvironment;
    REDataSourceManager *_dataSourceManager;
    REFeatureTransmuter *_featureTransmuter;
    REUpNextScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _deviceIsLocked;
    id <REElementRelevanceEngineDelegate> _delegate;
}

@property(nonatomic) __weak id <REElementRelevanceEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)predictionForElement:(id)arg1;
- (id)featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)_queue_featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)_queue_featureMapForElementWithId:(id)arg1 trainingContext:(id)arg2;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (void)sectionDidUpdateContentOrder:(id)arg1;
- (void)_onqueue_async:(CDUnknownBlockType)arg1;
- (id)_allCurrentElements;
- (void)_performUpdatesToDelegate:(CDUnknownBlockType)arg1;
- (void)_queue_updateElementRelevance;
- (void)_queue_scheduleRelevanceUpdateForElement:(id)arg1;
- (void)relevanceEnvironment:(id)arg1 didUpdateRelevanceProvider:(id)arg2;
- (void)predictorDidUpdate:(id)arg1;
- (void)_checkPreferences;
- (void)pause;
- (void)resume;
- (id)sectionForElement:(id)arg1;
- (id)pathForElement:(id)arg1;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1 section:(id)arg2;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)_enumerateAndGenerateSectionComparators:(CDUnknownBlockType)arg1;
- (id)elementAtPath:(id)arg1;
- (unsigned long long)numberOfElementsInSection:(id)arg1;
@property(readonly, nonatomic) NSArray *sections;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)_elementIdentifierForIdentifier:(id)arg1;
- (id)_identifierForElementIdentifier:(id)arg1;
- (id)relevanceProviderEnvironment;
- (void)refreshContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

