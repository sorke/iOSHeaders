//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedTVsItem : CEMPayloadBase
{
    NSString *_payloadTVDeviceID;
}

+ (id)buildWithTVDeviceID:(id)arg1;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadTVDeviceID; // @synthesize payloadTVDeviceID=_payloadTVDeviceID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

