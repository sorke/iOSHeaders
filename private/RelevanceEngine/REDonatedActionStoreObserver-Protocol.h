//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, REDonatedAction;

@protocol REDonatedActionStoreObserver <NSObject>
- (void)donationActionsStoreRemovedDonation:(NSDictionary *)arg1;
- (void)donationActionsStoreReceivedDonation:(REDonatedAction *)arg1 isNewDonation:(_Bool)arg2;
@end

