//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSSpecifier.h"

@class CTXPCServiceSubscriptionContext, PSListController, PSListItemsController;

@interface PSUICellularRATSpecifier : PSSpecifier
{
    PSListController *_hostController;
    PSSpecifier *_mobileDataGroup;
    int _RATSwitchKind;
    _Bool _3GOverrideTo4G;
    _Bool _LTEOverrideTo4G;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListItemsController *_RATModeDrilldownController;
}

@property(nonatomic) __weak PSListItemsController *RATModeDrilldownController; // @synthesize RATModeDrilldownController=_RATModeDrilldownController;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
- (void).cxx_destruct;
- (_Bool)shouldShowLTEOptions;
- (_Bool)shouldShowLegacyRATOptions;
- (id)getLTEService:(id)arg1;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (_Bool)supportsVoLTE;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (void)reloadRATStatus:(id)arg1;
- (void)updateRATSpecifiers;
- (_Bool)_updateMobileDataGroupContentShowingRAT:(_Bool)arg1;
- (void)updateRATState;
- (id)getRATSwitchIsOn:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (void)_setRATModeConfirmed:(int)arg1;
- (void)_setRATModeStateIsOn:(_Bool)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (_Bool)updateState;
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5;

@end

