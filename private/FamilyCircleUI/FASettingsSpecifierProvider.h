//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AAUISpecifierProvider.h"
#import "FAFamilySettingsViewControllerDelegate.h"
#import "FASetupDelegate.h"
#import "RemoteUIControllerDelegate.h"

@class AAFamilyDetailsResponse, AAFamilyEligibilityResponse, AAGrandSlamSigner, AAUIAccountManager, FACircleContext, FAFamilyMemberDetailsPageSurrogate, FAFamilyNotificationObserver, FARequestConfigurator, NSArray, NSMutableArray, NSOperationQueue, NSString, PSListController, PSSpecifier;

@interface FASettingsSpecifierProvider : NSObject <FASetupDelegate, FAFamilySettingsViewControllerDelegate, RemoteUIControllerDelegate, AAUISpecifierProvider>
{
    FAFamilyMemberDetailsPageSurrogate *_profileSurrogate;
    FAFamilyNotificationObserver *_familyNotificationObserver;
    PSListController *_presenter;
    PSSpecifier *_familyCellSpecifier;
    PSSpecifier *_invitationsCellSpecifier;
    _Bool _isLoadingFamilyDetails;
    _Bool _didFailToGetFamilyDetails;
    NSMutableArray *_pendingFamilyDetailsCompletionBlocks;
    AAFamilyDetailsResponse *_familyDetailsResponse;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    NSMutableArray *_pendingInvites;
    NSString *_familyStatusSummary;
    NSString *_invitationSummary;
    long long _familyEligibilityStatus;
    _Bool _isHandlingURLForInvite;
    NSOperationQueue *_networkActivityQueue;
    AAUIAccountManager *_accountManager;
    AAGrandSlamSigner *_grandSlamSigner;
    FARequestConfigurator *_requestConfigurator;
    FACircleContext *_context;
    _Bool _delayedEnterInitiateFlow;
    id <AAUISpecifierProviderDelegate> _delegate;
    NSArray *_specifiers;
}

@property(nonatomic) __weak id <AAUISpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)_handleStartFamilySetupActionURL:(id)arg1;
- (void)_handleShowInviteActionURL:(id)arg1 isChildTransfer:(_Bool)arg2;
- (void)_handleShowFamilyInviteActionURL:(id)arg1;
- (void)_handleShowChildTransferActionURL:(id)arg1;
- (id)_acuPresenter;
- (void)_handleShowFamilySettingsURL:(id)arg1;
- (void)_handleShowInvitesActionURL:(id)arg1;
- (_Bool)handleURL:(id)arg1;
- (void)_clearFamilyState;
- (void)familySettingsViewControllerDidUpdateFamily:(id)arg1;
- (void)familySettingsViewControllerDidDeleteFamily:(id)arg1;
- (void)_reloadFamilySpecifiersAnimated:(_Bool)arg1;
- (void)_reloadFamilySpecifiers;
- (void)reloadSpecifiers;
- (void)_handleFamilyEligibilityResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadFamilyEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_viewFamilySpecifierWasTapped:(id)arg1;
- (id)_valueForFamilySpecifier:(id)arg1;
- (void)_presentPendingInvitesRemoteUI;
- (void)_pendingInvitationsSpecifierWasTapped:(id)arg1;
- (id)_valueForInvitiationsSpecifier:(id)arg1;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)_showUnderageAlertWithEligibilityResponse:(id)arg1;
- (id)_configureContextWithType:(id)arg1 resourceDictionary:(id)arg2;
- (void)_initiateFamilyWithResources:(id)arg1;
- (void)_initiateFamily;
- (void)_reloadFamily;
- (void)_setUpFamilySpecifierWasTapped:(id)arg1;
- (void)_handleFamilyDetailsResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadFamilyDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_familySpecifier;
- (id)_invitationsCellSpecifier;
- (unsigned long long)_familyState;
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (id)_requestConfigurator;
- (id)_grandSlamSigner;
- (_Bool)isAccountInGrayMode;
- (id)_appleAccount;
- (id)_accountStore;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (id)initWithAccountManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

