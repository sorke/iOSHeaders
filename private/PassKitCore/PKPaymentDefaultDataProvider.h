//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentDataProvider.h"
#import "PKPaymentServiceDelegate.h"

@class NSHashTable, NSLock, NSObject<OS_dispatch_queue>, NSString, PKPaymentService, PKSecureElement;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider>
{
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    NSHashTable *_delegates;
    NSLock *_delegateLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id <PKPaymentDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaymentDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (_Bool)supportsInAppPaymentsForPass:(id)arg1;
- (_Bool)supportsNotificationsForPass:(id)arg1;
- (_Bool)supportsMessagesForPass:(id)arg1;
- (_Bool)supportsTransactionsForPass:(id)arg1;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (void)transactionCountByYearForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
- (void)setPaymentHandoffDisabled:(_Bool)arg1;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) _Bool isPaymentHandoffDisabled;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool secureElementIsProductionSigned;
@property(readonly, nonatomic) NSString *secureElementIdentifier;
- (id)expressPassesInformationWithCardType:(long long)arg1;
- (id)expressPassesInformation;
@property(readonly, nonatomic) _Bool isDeviceInRestrictedMode;
- (void)_accessDelegatesWithHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

