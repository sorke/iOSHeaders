//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "ACUISetupViewControllerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate>
{
    NSString *_filteredDataclass;
}

- (void).cxx_destruct;
- (void)setupViewControllerDidDismiss:(id)arg1;
- (id)_specifiersForOtherCalendarAccounts;
- (id)_specifiersForOtherContactsAccounts;
- (id)_specifiersForOtherMailAccounts;
- (id)specifiers;
- (id)_viewProvidersManager;
- (void)setSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

