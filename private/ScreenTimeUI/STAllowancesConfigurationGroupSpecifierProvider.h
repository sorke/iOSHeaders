//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

#import "STAlwaysAllowListControllerDelegate.h"
#import "STDeviceBedtimeListControllerDelegate.h"

@class NSString, PSSpecifier;

@interface STAllowancesConfigurationGroupSpecifierProvider : STRootGroupSpecifierProvider <STDeviceBedtimeListControllerDelegate, STAlwaysAllowListControllerDelegate>
{
    PSSpecifier *_deviceBedtimeSpecifier;
    PSSpecifier *_appLimitsSpecifier;
    PSSpecifier *_alwaysAllowedSpecifier;
    PSSpecifier *_contentPrivacySpecifier;
}

@property(retain, nonatomic) PSSpecifier *contentPrivacySpecifier; // @synthesize contentPrivacySpecifier=_contentPrivacySpecifier;
@property(retain, nonatomic) PSSpecifier *alwaysAllowedSpecifier; // @synthesize alwaysAllowedSpecifier=_alwaysAllowedSpecifier;
@property(retain, nonatomic) PSSpecifier *appLimitsSpecifier; // @synthesize appLimitsSpecifier=_appLimitsSpecifier;
@property(retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // @synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier;
- (void).cxx_destruct;
- (void)showContentPrivacyViewController:(id)arg1;
- (id)contentPrivacyDetailText;
- (void)alwaysAllowListController:(id)arg1 didFinishEditingAlwaysAllowList:(id)arg2;
- (id)bundleIDsForType:(unsigned long long)arg1 excludingBundleIDs:(id)arg2;
- (void)showAlwaysAllowedViewController:(id)arg1;
- (id)alwaysAllowedDetailText;
- (void)showAppLimitsViewController:(id)arg1;
- (id)appLimitsDetailText;
- (void)bedtimeListController:(id)arg1 didFinishEditingBedtime:(id)arg2;
- (void)showDeviceBedtimeViewController:(id)arg1;
- (id)deviceDowntimeDetailText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

