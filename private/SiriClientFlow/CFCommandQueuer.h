//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CFCommandQueuer : NSObject
{
    NSObject<OS_dispatch_group> *_commandGroup;
    NSObject<OS_dispatch_queue> *_commandQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain) NSObject<OS_dispatch_group> *commandGroup; // @synthesize commandGroup=_commandGroup;
- (void).cxx_destruct;
- (id)initWithCommandIdentifier:(id)arg1;
- (void)initQueuesWithIdentifier:(id)arg1;
- (void)dispatchCommand:(id)arg1 isOneWay:(_Bool)arg2 withServiceHelper:(id)arg3 replyWithMetrics:(CDUnknownBlockType)arg4;
- (void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 replyWithMetrics:(CDUnknownBlockType)arg3;
- (void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2 replyWithMetrics:(CDUnknownBlockType)arg3;
- (void)dispatchBlock:(CDUnknownBlockType)arg1;

@end
