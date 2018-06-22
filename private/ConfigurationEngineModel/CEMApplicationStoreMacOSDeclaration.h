//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMApplicationStoreMacOSDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadRestrictStoreRequireAdminToInstall;
    NSNumber *_payloadRestrictStoreSoftwareupdateOnly;
    NSNumber *_payloadRestrictStoreDisableAppAdoption;
    NSNumber *_payloadDisableSoftwareUpdateNotifications;
    NSNumber *_payloadRestrictStoreMdmInstallSoftwareupdateOnly;
}

+ (id)buildWithIdentifier:(id)arg1 withRestrictStoreRequireAdminToInstall:(id)arg2 withRestrictStoreSoftwareupdateOnly:(id)arg3 withRestrictStoreDisableAppAdoption:(id)arg4 withDisableSoftwareUpdateNotifications:(id)arg5 withRestrictStoreMdmInstallSoftwareupdateOnly:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreMdmInstallSoftwareupdateOnly; // @synthesize payloadRestrictStoreMdmInstallSoftwareupdateOnly=_payloadRestrictStoreMdmInstallSoftwareupdateOnly;
@property(copy, nonatomic) NSNumber *payloadDisableSoftwareUpdateNotifications; // @synthesize payloadDisableSoftwareUpdateNotifications=_payloadDisableSoftwareUpdateNotifications;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreDisableAppAdoption; // @synthesize payloadRestrictStoreDisableAppAdoption=_payloadRestrictStoreDisableAppAdoption;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreSoftwareupdateOnly; // @synthesize payloadRestrictStoreSoftwareupdateOnly=_payloadRestrictStoreSoftwareupdateOnly;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreRequireAdminToInstall; // @synthesize payloadRestrictStoreRequireAdminToInstall=_payloadRestrictStoreRequireAdminToInstall;
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

