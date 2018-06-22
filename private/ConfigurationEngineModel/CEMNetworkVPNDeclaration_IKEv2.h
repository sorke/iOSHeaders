//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMNetworkVPNDeclaration_SecurityAssociationParameters, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_IKEv2 : CEMPayloadBase
{
    NSString *_payloadRemoteAddress;
    NSString *_payloadLocalIdentifier;
    NSString *_payloadRemoteIdentifier;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadPayloadCertificateUUID;
    NSString *_payloadSharedSecret;
    NSNumber *_payloadExtendedAuthEnabled;
    NSString *_payloadAuthName;
    NSNumber *_payloadDisableRedirect;
    NSNumber *_payloadDisableMOBIKE;
    NSNumber *_payloadUseConfigurationAttributeInternalIPSubnet;
    NSNumber *_payloadEnablePFS;
    NSNumber *_payloadEnableCertificateRevocationCheck;
    NSString *_payloadAuthPassword;
    NSString *_payloadDeadPeerDetectionRate;
    NSString *_payloadCertificateType;
    NSString *_payloadServerCertificateIssuerCommonName;
    NSString *_payloadServerCertificateCommonName;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters *_payloadIKESecurityAssociationParameters;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters *_payloadChildSecurityAssociationParameters;
}

+ (id)buildWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 withPayloadCertificateUUID:(id)arg5 withSharedSecret:(id)arg6 withExtendedAuthEnabled:(id)arg7 withAuthName:(id)arg8 withDisableRedirect:(id)arg9 withDisableMOBIKE:(id)arg10 withUseConfigurationAttributeInternalIPSubnet:(id)arg11 withEnablePFS:(id)arg12 withEnableCertificateRevocationCheck:(id)arg13 withAuthPassword:(id)arg14 withDeadPeerDetectionRate:(id)arg15 withCertificateType:(id)arg16 withServerCertificateIssuerCommonName:(id)arg17 withServerCertificateCommonName:(id)arg18 withIKESecurityAssociationParameters:(id)arg19 withChildSecurityAssociationParameters:(id)arg20;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters; // @synthesize payloadChildSecurityAssociationParameters=_payloadChildSecurityAssociationParameters;
@property(copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters; // @synthesize payloadIKESecurityAssociationParameters=_payloadIKESecurityAssociationParameters;
@property(copy, nonatomic) NSString *payloadServerCertificateCommonName; // @synthesize payloadServerCertificateCommonName=_payloadServerCertificateCommonName;
@property(copy, nonatomic) NSString *payloadServerCertificateIssuerCommonName; // @synthesize payloadServerCertificateIssuerCommonName=_payloadServerCertificateIssuerCommonName;
@property(copy, nonatomic) NSString *payloadCertificateType; // @synthesize payloadCertificateType=_payloadCertificateType;
@property(copy, nonatomic) NSString *payloadDeadPeerDetectionRate; // @synthesize payloadDeadPeerDetectionRate=_payloadDeadPeerDetectionRate;
@property(copy, nonatomic) NSString *payloadAuthPassword; // @synthesize payloadAuthPassword=_payloadAuthPassword;
@property(copy, nonatomic) NSNumber *payloadEnableCertificateRevocationCheck; // @synthesize payloadEnableCertificateRevocationCheck=_payloadEnableCertificateRevocationCheck;
@property(copy, nonatomic) NSNumber *payloadEnablePFS; // @synthesize payloadEnablePFS=_payloadEnablePFS;
@property(copy, nonatomic) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet; // @synthesize payloadUseConfigurationAttributeInternalIPSubnet=_payloadUseConfigurationAttributeInternalIPSubnet;
@property(copy, nonatomic) NSNumber *payloadDisableMOBIKE; // @synthesize payloadDisableMOBIKE=_payloadDisableMOBIKE;
@property(copy, nonatomic) NSNumber *payloadDisableRedirect; // @synthesize payloadDisableRedirect=_payloadDisableRedirect;
@property(copy, nonatomic) NSString *payloadAuthName; // @synthesize payloadAuthName=_payloadAuthName;
@property(copy, nonatomic) NSNumber *payloadExtendedAuthEnabled; // @synthesize payloadExtendedAuthEnabled=_payloadExtendedAuthEnabled;
@property(copy, nonatomic) NSString *payloadSharedSecret; // @synthesize payloadSharedSecret=_payloadSharedSecret;
@property(copy, nonatomic) NSString *payloadPayloadCertificateUUID; // @synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID;
@property(copy, nonatomic) NSString *payloadAuthenticationMethod; // @synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod;
@property(copy, nonatomic) NSString *payloadRemoteIdentifier; // @synthesize payloadRemoteIdentifier=_payloadRemoteIdentifier;
@property(copy, nonatomic) NSString *payloadLocalIdentifier; // @synthesize payloadLocalIdentifier=_payloadLocalIdentifier;
@property(copy, nonatomic) NSString *payloadRemoteAddress; // @synthesize payloadRemoteAddress=_payloadRemoteAddress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

