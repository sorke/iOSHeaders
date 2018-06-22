//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSData, NSDictionary, NSString;

@protocol CTXPCServiceSubscriberInterface
- (void)setActiveUserDataSelection:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setDefaultVoice:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setLabel:(CTXPCServiceSubscriptionContext *)arg1 label:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)generateUICCAuthenticationInfo:(CTXPCServiceSubscriptionContext *)arg1 authParams:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)copyLabel:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)getRemainingPUKAttemptCount:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)getRemainingPINAttemptCount:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)changePIN:(CTXPCServiceSubscriptionContext *)arg1 oldPin:(NSString *)arg2 newPin:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)promptForSIMUnlock:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unlockPUK:(CTXPCServiceSubscriptionContext *)arg1 puk:(NSString *)arg2 newPin:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)unlockPIN:(CTXPCServiceSubscriptionContext *)arg1 pin:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)saveSIMLockValue:(CTXPCServiceSubscriptionContext *)arg1 enabled:(_Bool)arg2 pin:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchSIMLockValue:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)copyGid2:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyGid1:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyMobileSubscriberNetworkCode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyLastKnownMobileSubscriberCountryCode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)getMobileSubscriberHomeCountryList:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)isEsimFor:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)copyMobileSubscriberCountryCode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)evaluateMobileSubscriberIdentity:(CTXPCServiceSubscriptionContext *)arg1 identity:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)createEncryptedIdentity:(CTXPCServiceSubscriptionContext *)arg1 identity:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 isProtectedIdentitySupported:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)copyMobileSubscriberIdentity:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copySIMIdentity:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyFirmwareUpdateInfo:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)copyMobileEquipmentInfo:(void (^)(CTMobileEquipmentInfoList *, NSError *))arg1;
- (void)getSIMTrayStatus:(void (^)(NSString *, NSError *))arg1;
- (void)getSIMStatus:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

