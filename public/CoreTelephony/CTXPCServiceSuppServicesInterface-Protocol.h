//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CTCallForwardingValue, CTXPCServiceSubscriptionContext, NSString;

@protocol CTXPCServiceSuppServicesInterface
- (void)saveCallingLineIdRestrictionValue:(CTXPCServiceSubscriptionContext *)arg1 restrictionValue:(int)arg2 completion:(void (^)(NSError *))arg3;
- (void)saveCallBarringValue:(CTXPCServiceSubscriptionContext *)arg1 facility:(int)arg2 callClass:(int)arg3 enabled:(_Bool)arg4 password:(NSString *)arg5 completion:(void (^)(NSError *))arg6;
- (void)saveCallForwardingValue:(CTXPCServiceSubscriptionContext *)arg1 value:(CTCallForwardingValue *)arg2 completion:(void (^)(NSError *))arg3;
- (void)saveCallWaitingValue:(CTXPCServiceSubscriptionContext *)arg1 callClass:(int)arg2 enabled:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchCallingLineIdRestrictionValue:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchConnectedLineIdRestrictionValue:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchCallingLinePresentationValue:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchConnectedLinePresentationValue:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchCallBarringValue:(CTXPCServiceSubscriptionContext *)arg1 facility:(int)arg2 callClass:(int)arg3 password:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)fetchCallForwardingValue:(CTXPCServiceSubscriptionContext *)arg1 reason:(int)arg2 callClass:(int)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchCallWaitingValue:(CTXPCServiceSubscriptionContext *)arg1 callClass:(int)arg2 completion:(void (^)(NSError *))arg3;
@end

