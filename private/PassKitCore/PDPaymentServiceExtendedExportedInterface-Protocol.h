//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDPaymentServiceExportedInterface.h"

@class NSData, NSDate, NSString, PKExpressTransactionState, PKPaymentApplication, PKPaymentPass, PKPaymentTransaction, PKTransitAppletHistory, PKValueAddedServiceTransaction, PKVerificationChannel;

@protocol PDPaymentServiceExtendedExportedInterface <PDPaymentServiceExportedInterface>
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (void)passbookUIServiceDidLaunch:(void (^)(void))arg1;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
- (void)scheduleSetupReminders:(void (^)(void))arg1;
- (void)consistencyCheckWithHandler:(void (^)(void))arg1;
- (void)simulatePaymentPushWithHandler:(void (^)(void))arg1;
- (void)outstandingExpressTransactionState:(void (^)(PKExpressTransactionState *))arg1;
- (void)transitStateWithPassUniqueIdentifier:(NSString *)arg1 paymentApplication:(PKPaymentApplication *)arg2 handler:(void (^)(PKTransitAppletState *))arg3;
- (void)simulateDefaultExpressTransitPassIdentifier:(NSString *)arg1 forExpressMode:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(NSString *)arg1 withCredential:(NSData *)arg2 completion:(void (^)(_Bool, NSString *))arg3;
- (void)processTransitTransactionEventWithHistory:(PKTransitAppletHistory *)arg1 transactionDate:(NSDate *)arg2 forPaymentApplication:(PKPaymentApplication *)arg3 withPassUniqueIdentifier:(NSString *)arg4 expressTransactionState:(PKExpressTransactionState *)arg5;
- (void)setDefaultExpressTransitPassIdentifier:(NSString *)arg1 withCredential:(NSData *)arg2 completion:(void (^)(_Bool, NSString *))arg3;
- (void)sanitizeExpressPasses;
- (void)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(PKPaymentApplication *))arg2;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassUniqueIdentifier:(NSString *)arg2 handler:(void (^)(PKPass *))arg3;
- (void)archiveMessageWithIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)deleteAllMessagesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)deletePaymentTransactionWithIdentifier:(NSString *)arg1 forPassWithUniqueIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)insertOrUpdateValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg1 forPassUniqueIdentifier:(NSString *)arg2 paymentTransaction:(PKPaymentTransaction *)arg3 handler:(void (^)(void))arg4;
- (void)valueAddedServiceTransactionWithIdentifier:(NSString *)arg1 handler:(void (^)(PKValueAddedServiceTransaction *))arg2;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(PKPaymentTransaction *)arg1 handler:(void (^)(NSSet *))arg2;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(NSString *)arg1 limit:(long long)arg2 handler:(void (^)(NSSet *))arg3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSSet *))arg2;
- (void)messagesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSSet *))arg2;
- (void)submitVerificationCode:(NSString *)arg1 verificationData:(NSData *)arg2 forDPANIdentifier:(NSString *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
- (void)messagesAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSString *))arg2;
- (void)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSString *))arg2;
- (void)paymentDeviceFieldPropertiesWithHandler:(void (^)(PKFieldProperties *))arg1;
@end

