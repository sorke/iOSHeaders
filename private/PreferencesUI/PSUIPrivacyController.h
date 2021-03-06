//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "PSListControllerTestableSpecifiers.h"

@class ACAccountStore, NSString, PSSpecifier;

@interface PSUIPrivacyController : PSListController <PSListControllerTestableSpecifiers>
{
    PSSpecifier *_locationSpecifier;
    ACAccountStore *_accountStore;
}

+ (void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+ (id)booleanCapabilitiesToTest;
- (void).cxx_destruct;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)locationServicesEnabled:(id)arg1;
- (void)updateLocationServicesVisibility;
- (id)capabilityEnabled:(id)arg1;
- (void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)_accountStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

