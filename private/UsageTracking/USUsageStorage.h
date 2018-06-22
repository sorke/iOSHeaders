//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface USUsageStorage : NSObject
{
    NSOperationQueue *_contextQueue;
    NSOperationQueue *_completionQueue;
    id <_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting><_DKKnowledgeQuerying><_DKKnowledgeSaving> _eventStorage;
    id <_CDLocalContext> _context;
}

+ (id)sharedStorage;
@property(readonly) id <_CDLocalContext> context; // @synthesize context=_context;
@property(readonly) id <_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting><_DKKnowledgeQuerying><_DKKnowledgeSaving> eventStorage; // @synthesize eventStorage=_eventStorage;
@property(readonly) NSOperationQueue *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly) NSOperationQueue *contextQueue; // @synthesize contextQueue=_contextQueue;
- (void).cxx_destruct;
- (void)_setContextStartDates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deleteDataDictionariesMatchingWebpageURL:(id)arg1 webDomain:(id)arg2 webApplication:(id)arg3 interval:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_removeWebpageFromContext:(id)arg1 webApplication:(id)arg2 inUseStartDate:(id)arg3 inFocusStartDate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_addWebpageToContext:(id)arg1 domain:(id)arg2 webApplication:(id)arg3 inUseStartDate:(id)arg4 inFocusStartDate:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_deleteEventsWithEventStreams:(id)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_deleteWebEventsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_chompEventsUpToStartDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEventsWithInUseStartDate:(id)arg1 inFocusStartDate:(id)arg2 endDate:(id)arg3 webApplication:(id)arg4 url:(id)arg5 domain:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)deleteWebDomainFromStorage:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteWebApplicationFromStorage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteStorageDataDuringInterval:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteWebpageURLFromStorage:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateStorageWithInUseStartDate:(id)arg1 inFocusStartDate:(id)arg2 endDate:(id)arg3 webApplication:(id)arg4 url:(id)arg5 domain:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)deleteAllHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_usUsageStorageCommonInit;
- (id)initWithEventStorageDirectory:(id)arg1 context:(id)arg2;
- (id)init;

@end

