//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSXPCConnection, REUpNextScheduler;

@interface REPredictedActionServer : NSObject
{
    NSXPCConnection *_connection;
    REUpNextScheduler *_scheduler;
    NSArray *_predictions;
    NSArray *_counts;
    NSDate *_firstPerformedDate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _fetchingData;
    NSMutableArray *_fetchCompletionBlocks;
    id <REPredictedActionServerObserver> _observer;
}

@property(nonatomic) __weak id <REPredictedActionServerObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_queue_setupConnection;
- (void)_finishProcessingData;
- (void)_notifyObserver;
- (void)_queue_fetchPredicitions;
- (void)_requestPredictions;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_accessOrEnqueueDataRequest:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;
- (void)fetchPredictedActions:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

