//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class CEMSecuritySingleSignOnDeclaration_Kerberos, NSString;

@interface CEMSecuritySingleSignOnDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadName;
    CEMSecuritySingleSignOnDeclaration_Kerberos *_payloadKerberos;
}

+ (id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withKerberos:(id)arg3;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) CEMSecuritySingleSignOnDeclaration_Kerberos *payloadKerberos; // @synthesize payloadKerberos=_payloadKerberos;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
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

