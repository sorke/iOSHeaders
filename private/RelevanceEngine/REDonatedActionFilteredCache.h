//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REDonatedActionStoreObserver.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface REDonatedActionFilteredCache : NSObject <REDonatedActionStoreObserver>
{
    NSMapTable *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    id <REDonatedActionFilteredCacheDelegate> _delegate;
}

@property(nonatomic) __weak id <REDonatedActionFilteredCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_refreshAllDonations;
- (void)_queue_removeDonation:(id)arg1;
- (void)_queue_storeDonation:(id)arg1;
- (id)_keyForAction:(id)arg1;
- (void)donationActionStoreRemoveAllDonations;
- (void)donationActionStoreRemovedDonation:(id)arg1;
- (void)donationActionStoreReceivedDonation:(id)arg1 isNewDonation:(_Bool)arg2;
- (void)reset;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCountForAction:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)fetchAllUniqueActions:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

