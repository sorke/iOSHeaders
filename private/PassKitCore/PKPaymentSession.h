//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PKPaymentSession : NSObject
{
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
}

+ (id)startReaderSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startReaderSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startContactlessInterfaceSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startContactlessInterfaceSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startInAppSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startInAppSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long lifecycleState;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateSession;

@end
