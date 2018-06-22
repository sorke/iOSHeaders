//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMApplicationControlDeclaration_InstallSchedule : CEMPayloadBase
{
    NSString *_payloadMode;
    NSNumber *_payloadDuration;
    NSString *_payloadStartTime;
    NSString *_payloadEndTime;
}

+ (id)buildWithMode:(id)arg1 withDuration:(id)arg2 withStartTime:(id)arg3 withEndTime:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadEndTime; // @synthesize payloadEndTime=_payloadEndTime;
@property(copy, nonatomic) NSString *payloadStartTime; // @synthesize payloadStartTime=_payloadStartTime;
@property(copy, nonatomic) NSNumber *payloadDuration; // @synthesize payloadDuration=_payloadDuration;
@property(copy, nonatomic) NSString *payloadMode; // @synthesize payloadMode=_payloadMode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

