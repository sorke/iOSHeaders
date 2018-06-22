//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface MSVXPCTransactionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMapTable *_openTransactions;
    _Bool _inTransaction;
    NSObject<OS_dispatch_source> *_signalUSR2DispatchSource;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_saveActiveTransactionsToFile;
- (void)_tearDownSignalHandler;
- (void)_setupSignalHandler;
- (void)_onQueueCleanupEndedTransactions;
- (void)_onQueueUpdateInternalTransactionState;
- (id)activeTransactions;
- (_Bool)isTransactionActive:(id)arg1;
- (void)removeActiveTransaction:(id)arg1;
- (void)addActiveTransaction:(id)arg1;
@property(readonly, nonatomic, getter=isInTransaction) _Bool inTransaction;
- (void)dealloc;
- (id)init;

@end

