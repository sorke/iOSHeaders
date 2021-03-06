//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface CKBlockingAsyncQueue : NSObject
{
    unsigned int _qosClass;
    unsigned long long _width;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_queueSema;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *queueSema; // @synthesize queueSema=_queueSema;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned int qosClass; // @synthesize qosClass=_qosClass;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)performBarrierBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithWidth:(unsigned long long)arg1;
- (id)initWithWidth:(unsigned long long)arg1 qosClass:(unsigned int)arg2;

@end

