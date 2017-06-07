//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CommunicationsFilterBlockListCache, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CommunicationsFilterBlockList : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;
- (_Bool)_connect;
- (_Bool)_disconnect;
- (void)_disconnected;
- (void)_sendXPCRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_sendSynchronousXPCRequest:(id)arg1;
- (_Bool)isItemInList:(id)arg1;
- (id)copyAllItems;
- (void)removeItemForAllServices:(id)arg1;
- (void)addItemForAllServices:(id)arg1;
- (void)dealloc;
- (id)init;

@end
