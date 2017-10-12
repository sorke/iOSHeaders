//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKXPCService;

@interface PKPeerPaymentService : NSObject
{
    PKXPCService *_remoteService;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_queue> *_accountQueue;
    long long _accountChangedNotificationSuspensionCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (void)_accountChanged:(id)arg1;
- (void)_sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1;
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMemo:(id)arg1 forTransactionWithIdentifier:(id)arg2;
- (void)noteAccountDeleted;
- (void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeAccountChangedNotifications;
- (void)suspendAccountChangedNotifications;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PKPeerPaymentAccount *account;
- (void)sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;
- (void)dealloc;
- (id)init;

@end

