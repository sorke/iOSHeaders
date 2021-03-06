//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAGrandSlamSigner, AAUIAccountManager, NSOperationQueue;

@interface FAFamilyEligibilityRequester : NSObject
{
    AAGrandSlamSigner *_grandSlamSigner;
    AAUIAccountManager *_accountManager;
    NSOperationQueue *_networkActivityQueue;
}

- (void).cxx_destruct;
- (id)_appleAccount;
- (id)_accountStore;
- (id)_grandSlamSigner;
- (void)requestFamilyEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountManager:(id)arg1;
- (id)init;

@end

