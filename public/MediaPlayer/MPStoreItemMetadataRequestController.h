//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreItemMetadataRequestController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _lastExpiredMetadataPurgeMachTime;
    NSMutableDictionary *_itemCaches;
}

+ (unsigned long long)optimalBatchSize;
+ (id)sharedStoreItemMetadataRequestController;
- (void).cxx_destruct;
- (void)_removeExpiredItemsPeriodically;
- (void)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemMetadata:(id)arg1;
- (id)init;

@end
