//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PQLConnection.h"

@class br_pacer;

__attribute__((visibility("hidden")))
@interface BRCPQLConnection : PQLConnection
{
    br_pacer *_batchingPacer;
    int _changeCount;
    double _flushInterval;
    _Bool _flushImmediately;
    _Bool _autovacuumInProgress;
    long long _changesOverride;
    unsigned long long _vmStepsExecuted;
}

@property(readonly, nonatomic) unsigned long long vmStepsExecuted; // @synthesize vmStepsExecuted=_vmStepsExecuted;
- (void).cxx_destruct;
- (void)autovacuumIfNeeded;
- (_Bool)needsAutovacuum;
- (long long)sizeInBytes;
- (void)brc_close;
- (void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3;
- (_Bool)_shouldFlushWithChangeCount:(int)arg1;
- (void)disableProfilingForQueriesInBlock:(CDUnknownBlockType)arg1;
- (_Bool)executeWithErrorHandler:(CDUnknownBlockType)arg1 sql:(id)arg2;
- (_Bool)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (_Bool)executeWithExpectedIndex:(id)arg1 sql:(id)arg2;
- (id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3;
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (void)setProfilingHook:(CDUnknownBlockType)arg1;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (_Bool)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id *)arg3;
@property(nonatomic) _Bool profilingEnabled;
- (long long)changes;
- (_Bool)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id *)arg3;
- (void)_setLockedHandler;
- (void)_setErrorHandlerWithDBCorruptionHandler:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType lockedHandler; // @dynamic lockedHandler;

@end

