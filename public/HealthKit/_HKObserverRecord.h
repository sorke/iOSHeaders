//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface _HKObserverRecord : NSObject
{
    id _observer;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 clientQueue:(id)arg2;

@end

