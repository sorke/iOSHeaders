//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDPDCircleDelegate.h"
#import "CDPDSecureBackupDelegate.h"

@class CDPContext, CDPDCircleController, CDPDPCSController, CDPDSecureBackupController;

@interface CDPDStateMachine : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate>
{
    CDPContext *_context;
    id <CDPStateUIProviderInternal> _uiProvider;
    CDPDPCSController *_pcsController;
    CDPDCircleController *_circleController;
    CDPDSecureBackupController *_secureBackupController;
    _Bool _attemptedCDPEnable;
}

@property(nonatomic) _Bool attemptedCDPEnable; // @synthesize attemptedCDPEnable=_attemptedCDPEnable;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(retain, nonatomic) CDPContext *context; // @synthesize context=_context;
@property(retain, nonatomic) CDPDPCSController *pcsController; // @synthesize pcsController=_pcsController;
@property(retain, nonatomic) CDPDCircleController *circleController; // @synthesize circleController=_circleController;
@property(retain, nonatomic) CDPDSecureBackupController *secureBackupController; // @synthesize secureBackupController=_secureBackupController;
- (void).cxx_destruct;
- (id)secureChannelContextForController:(id)arg1;
- (id)contextForController:(id)arg1;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg2;
- (void)promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)synchronizeCircleViewsForSecureBackupContext:(id)arg1;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (void)_disableCloudDataProtectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetAccountCDPStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableSecureBackupWithCircleJoinResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned long long)arg2 useCachedSecret:(_Bool)arg3 hasPeersForRemoteApproval:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned long long)arg2 useCachedSecret:(_Bool)arg3 hasPeersForRemoteApproval:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_recoverSecureBackupWithHasPeersForRemoteApproval:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_confirmCDPEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableKVSForAccount:(id)arg1 store:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_preflightAccountStateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAllowCDPEnrollment;
- (void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_refreshAndAuthenticateWithContext:(id)arg1;
- (void)_renewAndRepairWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performInteractivelyAuthenticatedRepair:(CDUnknownBlockType)arg1;
- (void)_repairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_predicateForRecordUpgradeCheck;
- (id)_predicateForRecordUpgradeCheckIgnoringBottled;
- (void)_authenticatedShouldPerformRepairWithCompletion:(CDUnknownBlockType)arg1;
- (void)shouldPerformRepairWithCompletion:(CDUnknownBlockType)arg1;
- (void)_recoverSecureBackupWithCircleJoinResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attemptCDPEnable:(CDUnknownBlockType)arg1;
- (void)_handlePreflightError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleJoinResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enrollOrDisableCDPAfterEnabledStateVerified:(CDUnknownBlockType)arg1;
- (void)_handleiCDPStatusCheckError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;

@end

