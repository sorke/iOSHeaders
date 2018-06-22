//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueue.h>

#import "PFDispatchQueueMethods.h"

@class NSObject<OS_dispatch_queue>;

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (id)extensionMatching:(CDUnknownBlockType)arg1;
- (id)_extensionManager;
- (id)_extensionsForTargetingQueue;
- (id)dispatchCancellableGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellable:(CDUnknownBlockType)arg1;
- (void)dispatchAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)assertNotOnQueue;
- (_Bool)assertQueueBarrier;
- (_Bool)assertOnQueue;
- (void)setTargetQueue:(id)arg1;
- (id)_dispatchQueueForSetTargetQueue;
- (unsigned int)qualityOfService;
- (void *)getSpecific:(void *)arg1;
- (void)setSpecific:(void *)arg1 forKey:(void *)arg2;
- (void)resume;
- (void)suspend;
- (const char *)label;
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;

@end

