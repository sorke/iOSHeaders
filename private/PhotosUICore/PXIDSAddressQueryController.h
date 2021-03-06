//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSBatchIDQueryControllerDelegate.h"

@class IDSBatchIDQueryController, NSMutableArray, NSMutableDictionary, NSString;

@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate>
{
    NSMutableDictionary *_queryStateForAddress;
    NSMutableArray *_queries;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)performBatchQueryForAddresses:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

