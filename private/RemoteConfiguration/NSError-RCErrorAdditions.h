//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (RCErrorAdditions)
+ (id)rc_missingConfigErrorWithUnderlyingError:(id)arg1;
+ (id)rc_offlineErrorWithReason:(long long)arg1;
+ (id)rc_notAvailableError;
+ (id)rc_notCachedError;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
@end

