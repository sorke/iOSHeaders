//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PKPaymentProvisioningController, PKPeerPaymentAccount, PKPeerPaymentCredential;

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>
- (void)cloudStoreStatusWithCompletion:(void (^)(CKAccountInfo *, _Bool, NSError *))arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void (^)(_Bool))arg1;
- (void)provisionPeerPaymentPassWithProvisioningController:(PKPaymentProvisioningController *)arg1 credential:(PKPeerPaymentCredential *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)setUserHasDisabledPeerPayment:(_Bool)arg1;
- (_Bool)userHasDisabledPeerPayment;
- (NSString *)bridgedClientInfo;
- (void)updateAccountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (PKPeerPaymentAccount *)account;
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(_Bool))arg1;
@end

