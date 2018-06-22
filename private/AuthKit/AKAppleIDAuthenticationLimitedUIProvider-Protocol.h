//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
- (void)presentSecondFactorAlertWithError:(NSError *)arg1 title:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(NSNumber *, NSError *))arg4;
- (void)dismissSecondFactorUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentSecondFactorUIWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)presentLoginAlertWithError:(NSError *)arg1 title:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg4;
- (void)dismissBasicLoginUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentBasicLoginUIWithCompletion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg1;

@optional
- (void)registerSurrogateWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

