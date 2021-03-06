//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNCache, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNContactViewCache : NSObject
{
    CNCache *_cachedContainers;
    CNCache *_cachedPolicies;
    CNCache *_cachedAccounts;
    CNContactStore *_contactStore;
}

@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNCache *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(retain, nonatomic) CNCache *cachedPolicies; // @synthesize cachedPolicies=_cachedPolicies;
@property(retain, nonatomic) CNCache *cachedContainers; // @synthesize cachedContainers=_cachedContainers;
- (void).cxx_destruct;
- (id)_accountForContact:(id)arg1;
- (id)_policyForContact:(id)arg1;
- (id)_containerForContact:(id)arg1;
- (void)resetCache;
- (id)accountForContact:(id)arg1;
- (id)policyForDefaultContainer;
- (id)policyForContact:(id)arg1;

@end

