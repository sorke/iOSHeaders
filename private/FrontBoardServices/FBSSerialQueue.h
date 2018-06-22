//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface FBSSerialQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocks;
    unsigned long long _enqueueID;
    unsigned long long _dequeueID;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSArray *_mainRunLoopModes;
    struct __CFRunLoopSource *_runLoopSource;
    _Bool _runLoopSourceHandlingBlock;
    NSObject<OS_dispatch_semaphore> *_synchronizingEnqueueSemaphore;
    unsigned long long _lastSynchronizingWorkspaceName;
}

+ (id)queueWithMainRunLoopModes:(id)arg1;
+ (id)queueWithDispatchQueue:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_performNextFromRunLoopSource;
- (void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(unsigned long long)arg2;
- (_Bool)_performNext;
- (_Bool)_hasNext;
- (void)_queue_performAsync:(CDUnknownBlockType)arg1;
- (void)performAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)assertOnQueue;
- (void)dealloc;
- (id)init;
- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;

@end

