//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, PBRequest;

@protocol GEOServiceRequestConfiguring <NSObject>
- (unsigned char)requestCounterInfoTypeForRequest:(PBRequest *)arg1;
- (int)experimentDispatcherRequestTypeForRequest:(PBRequest *)arg1;
- (long long)experimentType;
- (NSString *)throttleKey;
- (_Bool)shouldThrottleRequests;
- (NSNumber *)serviceTypeNumber;
- (NSString *)debugRequestName;
- (int)dataRequestKindForRequest:(PBRequest *)arg1;
- (NSDictionary *)additionalHTTPHeaders;
- (NSArray *)additionalURLQueryItems;
- (unsigned long long)urlType;

@optional
- (double)timeout;
@end

