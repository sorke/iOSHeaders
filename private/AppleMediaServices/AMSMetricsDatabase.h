//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSSQLiteConnectionDelegate.h"

@class AMSSQLiteConnection, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate>
{
    NSString *_containerId;
    AMSSQLiteConnection *_connection;
    id <AMSMetricsBagContract> _contract;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _keepAliveCount;
}

@property(nonatomic) long long keepAliveCount; // @synthesize keepAliveCount=_keepAliveCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) id <AMSMetricsBagContract> contract; // @synthesize contract=_contract;
@property(retain, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
- (void).cxx_destruct;
- (void)_performTransaction:(CDUnknownBlockType)arg1;
- (id)_lockedById;
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;
- (void)unlockAllEventsWithError:(id *)arg1;
- (void)lockAllEventsWithError:(id *)arg1;
- (void)insertEvents:(id)arg1 error:(id *)arg2;
- (void)enumerateReportURLsWithLockOnly:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateEventsForURL:(id)arg1 lockedOnly:(_Bool)arg2 objectBlock:(CDUnknownBlockType)arg3;
- (void)dropEvents:(id)arg1 error:(id *)arg2;
- (void)dropAllEventsWithLockOnly:(_Bool)arg1 error:(id *)arg2;
- (long long)countAllEventsWithLock:(_Bool)arg1 error:(id *)arg2;
- (void)close;
- (id)initWithContainerId:(id)arg1 contract:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

