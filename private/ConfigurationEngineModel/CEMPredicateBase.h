//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMPredicateBase : CEMPayloadBase
{
    NSString *_payloadType;
}

+ (id)predicateForPayload:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)evaluateWithOptions:(id)arg1 error:(id *)arg2;

@end

