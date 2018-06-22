//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCTargetSelector.h>

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector
{
    struct __CFRunLoopTimer *_timer;
    id _key;
    _Bool _isCanceled;
    _Bool _isPending;
    id _object;
    NSLock *_lock;
    _Bool _createdTimer;
    CDUnknownBlockType _block;
}

+ (void)_assignThreadPriority;
+ (void)_runThread;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_runTimerBlock:(CDUnknownBlockType)arg1;
- (void)_dispatchSCRCThread;
- (void)_dispatchMainThread;
- (void)_dispatch;
- (void)_dispatchThreadHelper:(CDUnknownBlockType)arg1;
- (id)threadKey;
- (_Bool)isPending;
- (_Bool)isCancelled;
- (_Bool)isCanceled;
- (void)cancel;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (void)dispatchAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dispatchAfterDelay:(double)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 thread:(id)arg3;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (id)_initWithTarget:(id)arg1 selector:(SEL)arg2 threadKeyOrThread:(id)arg3;
- (_Bool)_createdTimer;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

