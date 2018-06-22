//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegListController.h>

#import "AKAppleIDAuthenticationDelegate.h"
#import "CNFRegFirstRunDelegate.h"
#import "CNFRegViewAccountControllerDelegate.h"
#import "CNFRegWizardControllerDelegate.h"

@class NSArray, NSMutableArray, NSNumber, NSString, PSSpecifier;

@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate, AKAppleIDAuthenticationDelegate>
{
    PSSpecifier *_faceTimeEnabledGroupSpecifier;
    PSSpecifier *_faceTimeEnabledSpecifier;
    NSArray *_accountGroupSpecifiers;
    NSArray *_aliasGroupSpecifiers;
    NSArray *_callerIdGroupSpecifiers;
    NSArray *_replyWithMessageGroupSpecifiers;
    NSArray *_blacklistGroupSpecifiers;
    NSArray *_receiveRelayCallsGroupSpecifiers;
    NSArray *_faceTimePhotosGroupSpecifiers;
    NSMutableArray *_addresses;
    NSNumber *_delayedRefreshAnimatedFlag;
    struct {
        unsigned int listeningForFinishedEditingEvents:1;
        unsigned int appeared:1;
        unsigned int ignoringTextFieldChanges:1;
        unsigned int showEnableSwitch:1;
        unsigned int refreshingCallerIdValues:1;
    } _settingsFlags;
    _Bool _showReceiveRelayCalls;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(readonly, nonatomic) _Bool showReceiveRelayCalls; // @synthesize showReceiveRelayCalls=_showReceiveRelayCalls;
- (void).cxx_destruct;
- (void)_handleAccountRegistrarChanged;
- (void)_handleOutgoingRelayCallerIDChanged;
- (void)_handleThumperCapabilitiesChanged;
- (void)_handleRelayCapabilitiesChanged;
- (void)_handleFaceTimeEntitlementStatusChanged;
- (void)_handleFaceTimeCTRegistrationStatusChanged;
- (void)handleCallStatusChanged;
- (void)_setupAccountHandlersForNormalOperation;
- (void)_setupAccountHandlersForDisabledOperation;
- (void)_setupAccountHandlersForDisabling;
- (_Bool)_allAccountsAreDeactivated;
- (void)_handleSuccessfulAccountReactivation:(id)arg1;
- (void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2;
- (void)_setupAccountHandlers;
- (_Bool)_shouldUseDisabledHandlers;
- (_Bool)popToFirstRunControllerAnimated:(_Bool)arg1;
- (_Bool)_popFromSettingsAnimated:(_Bool)arg1;
- (void)_updateControllerStateAnimated:(_Bool)arg1;
- (void)_showAuthKitSignInIfNecessary;
- (void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(_Bool)arg3;
- (long long)groupIdForSpecifierId:(id)arg1;
- (long long)groupIdForSpecifier:(id)arg1;
- (long long)indexOfLastSpecifierInGroup:(id)arg1;
- (void)refreshBlacklistSettingsAnimated:(_Bool)arg1;
- (void)showBlacklistSettings:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldShowBlacklistSettings;
- (void)showReplyWithMessage:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldShowReplyWithMessage;
- (id)createSpecifierForCallerIdAlias:(id)arg1;
- (void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2;
- (void)refreshAllCallerIdAliasSpecifiers;
- (void)refreshCallerIdSpecifier:(id)arg1;
- (void)setCallerId:(id)arg1;
- (void)refreshCallerIdAliasesAnimated:(_Bool)arg1;
- (id)callerIdAliasSpecifiers;
- (id)possibleCallerIdAliases;
- (_Bool)showCallerId:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFaceTimePhotosEnabled:(id)arg1 specifier:(id)arg2;
- (id)getFaceTimePhotosEnabledForSpecifier:(id)arg1;
- (_Bool)shouldShowFaceTimePhotosSpecifiers;
- (void)refreshFaceTimePhotosSettingsAnimated:(_Bool)arg1;
- (void)showFaceTimePhotosSettings:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showAliasValidationError:(id)arg1;
- (void)setAliasSelected:(id)arg1;
- (id)createSpecifierForAlias:(id)arg1;
- (_Bool)_canDeselectAlias:(id)arg1;
- (id)aliasWithIdentifier:(id)arg1;
- (id)statusForAlias:(id)arg1;
- (id)statusForSpecifier:(id)arg1;
- (id)aliasForSpecifier:(id)arg1;
- (_Bool)additionalAliasesAvailable;
- (_Bool)showAliases:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateSpecifier:(id)arg1 withAlias:(id)arg2;
- (void)refreshAllAliasSpecifiers;
- (void)refreshAliasSpecifier:(id)arg1;
- (void)refreshAliasesAnimated:(_Bool)arg1;
- (_Bool)_shouldShowAliasInfo;
- (id)aliasSpecifiers;
- (void)clearAccountCache;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2;
- (void)_showLocaleChooserWithAccount:(id)arg1;
- (id)_localeChooserForAccount:(id)arg1;
- (void)_hideLocaleChooser;
- (void)_showViewAccountControllerForAccount:(id)arg1;
- (void)_showSignInController;
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(_Bool)arg2;
- (_Bool)showAccounts:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshAccountsAnimated:(_Bool)arg1;
- (void)updateSpecifier:(id)arg1 withAccount:(id)arg2;
- (id)createSpecifierForAccount:(id)arg1;
- (id)_specifierIdentifierForAccount:(id)arg1;
- (void)_reloadSpecifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)accountSpecifiers;
- (void)accountTappedWithSpecifier:(id)arg1;
- (void)_showAccountAlertForAccount:(id)arg1;
- (id)getAccountNameForSpecifier:(id)arg1;
- (void)showAllSettings:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshReceiveRelayCallsSettingsAnimated:(_Bool)arg1;
- (void)showReceiveRelayCallsSettings:(_Bool)arg1 animated:(_Bool)arg2;
- (id)callerIDFooterText;
- (void)refreshiMessageCallerIDExtraText:(_Bool)arg1;
- (_Bool)shouldShowExtraTextForiMessageCallerID;
- (_Bool)isiMessageCallerIDNonDefault;
- (_Bool)shouldShowReceiveThumperCalls;
- (_Bool)shouldShowReceiveRelayCalls;
- (_Bool)shouldShowICSSettingsBundleSpecifiers;
- (_Bool)shouldShowCallDirectorySettingsBundleSpecifiers;
@property(nonatomic) _Bool showEnableSwitch;
- (void)refreshEnabledStateAnimated:(_Bool)arg1;
- (void)refreshFaceTimeSettingsAnimated:(_Bool)arg1;
- (void)refreshFaceTimeSettingsWithDelayAnimated:(_Bool)arg1;
- (void)_refreshFaceTimeSettingsDelayed:(id)arg1;
- (id)getReceiveRelayedCallsEnabledForSpecifier:(id)arg1;
- (void)setReceiveRelayedCallsEnabled:(id)arg1 specifier:(id)arg2;
- (id)getFaceTimeEnabledForSpecifier:(id)arg1;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(_Bool)arg3;
- (void)_updateSwitchDelayed;
- (void)_updateSwitch;
- (id)_switchFooterText;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2;
- (void)_tearDownAllListeners;
- (void)_setupAllListeners;
- (id)customTitle;
- (id)logName;
- (void)_handleDeactivation:(id)arg1;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (id)_operationalAccountsForService:(long long)arg1;
- (id)_operationalAccounts;
- (id)_appleIDAccounts;
- (id)_useableAccounts;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifierList;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (id)bundle;
- (_Bool)_shouldDisableAccountConfigurationUI;
- (_Bool)_hasActiveFaceTimeCall;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

