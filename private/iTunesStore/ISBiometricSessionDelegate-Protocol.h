//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol ISBiometricSessionDelegate <NSObject>

@optional
- (void)sender:(id)arg1 willSendChallenge:(NSString *)arg2 andSignature:(NSString *)arg3 isPayment:(_Bool)arg4 additionalHeaders:(NSDictionary *)arg5;
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(_Bool)arg2;
- (void)sender:(id)arg1 didFallbackToPassword:(_Bool)arg2;
@end

