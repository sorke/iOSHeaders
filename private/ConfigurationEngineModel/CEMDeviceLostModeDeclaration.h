//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMDeviceLostModeDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadEnable;
    NSString *_payloadMessage;
    NSString *_payloadPhoneNumber;
    NSString *_payloadFootnote;
}

+ (id)buildWithIdentifier:(id)arg1 withEnable:(id)arg2 withMessage:(id)arg3 withPhoneNumber:(id)arg4 withFootnote:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadFootnote; // @synthesize payloadFootnote=_payloadFootnote;
@property(copy, nonatomic) NSString *payloadPhoneNumber; // @synthesize payloadPhoneNumber=_payloadPhoneNumber;
@property(copy, nonatomic) NSString *payloadMessage; // @synthesize payloadMessage=_payloadMessage;
@property(copy, nonatomic) NSNumber *payloadEnable; // @synthesize payloadEnable=_payloadEnable;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

