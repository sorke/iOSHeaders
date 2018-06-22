//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface VVCarrierParameters : NSObject
{
    NSDictionary *_parameterValues;
}

+ (_Bool)supportsPasswordChanges;
+ (_Bool)supportsGreetingChanges;
+ (id)messageNotificationFallbackTimeout;
+ (id)retryIntervals;
+ (_Bool)supportsDetachedStorage;
+ (_Bool)ignoresRoamingSwitch;
+ (id)carrierServiceName;
@property(readonly, nonatomic) NSDictionary *parameterValues; // @synthesize parameterValues=_parameterValues;
- (void).cxx_destruct;
- (id)parameterValueForKey:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 service:(id)arg2;

@end

