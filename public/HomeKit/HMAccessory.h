//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMAccessorySettingsContainer.h"
#import "HMControllable.h"
#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMMutableApplicationData.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMAccessoryCategory, HMAccessorySettings, HMApplicationData, HMDelegateCaller, HMDevice, HMFMessageDispatcher, HMFPairingIdentity, HMFSoftwareVersion, HMFWiFiNetworkInfo, HMHome, HMRemoteLoginHandler, HMRoom, HMSoftwareUpdateController, HMSymptomsHandler, HMThreadSafeMutableArrayCollection, NSArray, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMAccessory : NSObject <HMFLogging, NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData, HMAccessorySettingsContainer, HMControllable>
{
    _Bool _currentAccessory;
    HMDevice *_device;
    HMSoftwareUpdateController *_softwareUpdateController;
    _Bool _supportsIdentify;
    _Bool _firmwareUpdateAvailable;
    _Bool _reachable;
    _Bool _bridgedAccessory;
    _Bool _blocked;
    _Bool _controllable;
    _Bool _supportsMediaAccessControl;
    _Bool _supportsTargetControl;
    _Bool _supportsTargetController;
    _Bool _paired;
    _Bool _needsReprovisioning;
    NSUUID *_uniqueIdentifier;
    id <HMAccessoryDelegate> _delegate;
    NSString *_name;
    NSString *_configuredName;
    NSString *_deviceIdentifier;
    HMHome *_home;
    HMRoom *_room;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_firmwareVersion;
    NSString *_serialNumber;
    HMFSoftwareVersion *_softwareVersion;
    NSString *_bundleID;
    NSString *_storeID;
    NSArray *_uniqueIdentifiersForBridgedAccessories;
    HMAccessoryCategory *_category;
    HMApplicationData *_applicationData;
    unsigned long long _transportTypes;
    unsigned long long _additionalSetupStatus;
    NSNumber *_accessoryFlags;
    long long _certificationStatus;
    long long _associationOptions;
    NSUUID *_accountIdentifier;
    HMAccessorySettings *_settings;
    HMFPairingIdentity *_pairingIdentity;
    HMFWiFiNetworkInfo *_wifiNetworkInfo;
    NSArray *_controlTargetUUIDs;
    HMFMessageDispatcher *_msgDispatcher;
    long long _reachableTransports;
    HMThreadSafeMutableArrayCollection *_currentServices;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSUUID *_uuid;
    unsigned long long _accessoryReprovisionState;
    HMRemoteLoginHandler *_remoteLoginHandler;
    HMSymptomsHandler *_symptomsHandler;
    HMDelegateCaller *_delegateCaller;
    HMThreadSafeMutableArrayCollection *_accessoryProfiles;
}

+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
+ (id)_cameraProfilesForAccessoryProfiles:(id)arg1;
+ (id)_mediaProfilesForAccessoryProfiles:(id)arg1;
@property(retain, nonatomic) HMThreadSafeMutableArrayCollection *accessoryProfiles; // @synthesize accessoryProfiles=_accessoryProfiles;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(copy) HMSymptomsHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property(retain) HMRemoteLoginHandler *remoteLoginHandler; // @synthesize remoteLoginHandler=_remoteLoginHandler;
@property(nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(nonatomic) _Bool needsReprovisioning; // @synthesize needsReprovisioning=_needsReprovisioning;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(copy, nonatomic) HMThreadSafeMutableArrayCollection *currentServices; // @synthesize currentServices=_currentServices;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(nonatomic) long long reachableTransports; // @synthesize reachableTransports=_reachableTransports;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) long long associationOptions; // @synthesize associationOptions=_associationOptions;
@property(retain, nonatomic) NSNumber *accessoryFlags; // @synthesize accessoryFlags=_accessoryFlags;
@property(nonatomic) unsigned long long additionalSetupStatus; // @synthesize additionalSetupStatus=_additionalSetupStatus;
@property(nonatomic) unsigned long long transportTypes; // @synthesize transportTypes=_transportTypes;
@property(nonatomic) _Bool firmwareUpdateAvailable; // @synthesize firmwareUpdateAvailable=_firmwareUpdateAvailable;
- (void).cxx_destruct;
- (void)_handleTargetControlSupportUpdatedMessage:(id)arg1;
- (void)_handleControlTargetsUpdatedMessage:(id)arg1;
- (void)resetControlTargetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeControlTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addControlTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyDelegateOfRemovedControlTarget:(id)arg1;
- (void)_notifyDelegateOfAddedControlTarget:(id)arg1;
- (void)_notifyClientsOfTargetControlSupportUpdate;
- (id)_privateDelegate;
- (void)_notifyDelegatesOfUpdatedControllable;
- (void)_notifyDelegatesOfAdditionalSetupRequiredChange;
- (void)_handleAccessoryControllableChanged:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)_updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_configureProfilesWithContext:(id)arg1;
@property(readonly, copy) NSArray *profiles;
- (void)_handleAccessoryCategoryChanged:(id)arg1;
- (void)_handleServiceConfigurationState:(id)arg1;
- (void)_handleServiceSubtype:(id)arg1;
- (void)_handleServiceTypeAssociated:(id)arg1;
- (void)_handleServiceDefaultNameUpdate:(id)arg1;
- (void)_handleServiceConfiguredNameUpdate:(id)arg1;
- (void)_handleServiceRenamed:(id)arg1;
- (void)_listPairingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_updateFromAccessory:(id)arg1;
- (void)_identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) _Bool supportsIdentify; // @synthesize supportsIdentify=_supportsIdentify;
- (void)setSupportsIdentify:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (void)updateAccessoryInfo:(id)arg1;
- (void)_handleAccessoryFlagsChanged:(id)arg1;
- (void)_handleServicesUpdated:(id)arg1;
- (void)_handleAccessoryNotificationsUpdated:(id)arg1;
- (void)_handleCharacteristicsUpdated:(id)arg1;
- (void)_handleConnectivityChanged:(id)arg1;
- (void)handleConnectivityChanged:(id)arg1;
- (void)__handleConnectivityChanged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleConfiguredNameChanged:(id)arg1;
- (void)_handleRenamed:(id)arg1;
- (void)_handleCharacteristicValueUpdated:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)_mergeProfileObjects:(id)arg1 currentOperations:(id)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)_mergeControlTargets:(id)arg1 operations:(id)arg2;
- (_Bool)_mergeServices:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(_Bool)arg2;
- (void)_updateName:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)_findService:(id)arg1;
- (void)_copyFrom:(id)arg1;
- (void)_setNotifyValue:(_Bool)arg1 forCharacteristic:(id)arg2;
- (void)_updateRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_readValueForCharacteristic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccessoryName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerNotificationHandlers;
- (void)_configureMessageDispatcher:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (void)_unconfigure;
- (void)_configureClientQueue:(id)arg1;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 configCompletionQueue:(id)arg5 configCompletion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
@property(readonly, copy, nonatomic) NSArray *services;
- (void)queryAdvertisementInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setControllable:(_Bool)arg1;
@property(readonly, getter=isControllable) _Bool controllable; // @synthesize controllable=_controllable;
- (_Bool)isAdditionalSetupRequired;
- (_Bool)isFirmwareUpdateAvailable;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSString *storeID; // @synthesize storeID=_storeID;
- (id)_valueForCharacteristic:(id)arg1 ofService:(id)arg2;
- (id)_accessoryInformationService;
- (id)context;
@property(readonly) __weak HMHome *containerHome;
- (void)setSoftwareUpdateController:(id)arg1;
- (id)softwareUpdateController;
@property(copy) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
- (void)setDevice:(id)arg1;
- (id)device;
@property(copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)_notifyDelegateOfUpdatedSettings:(id)arg1;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)setSettings:(id)arg1;
@property(readonly) HMAccessorySettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo; // @synthesize wifiNetworkInfo=_wifiNetworkInfo;
- (id)targetControllers;
- (id)controlTargets;
- (void)resetControlTargetUUIDs;
- (void)removeControlTargetUUIDs:(id)arg1;
- (void)addControlTargetUUIDs:(id)arg1;
@property(copy, nonatomic) NSArray *controlTargetUUIDs; // @synthesize controlTargetUUIDs=_controlTargetUUIDs;
@property(nonatomic) _Bool supportsTargetController; // @synthesize supportsTargetController=_supportsTargetController;
@property(nonatomic) _Bool supportsTargetControl; // @synthesize supportsTargetControl=_supportsTargetControl;
@property(nonatomic) _Bool supportsMediaAccessControl; // @synthesize supportsMediaAccessControl=_supportsMediaAccessControl;
@property(copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMRoom *room; // @synthesize room=_room;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSArray *identifiersForBridgedAccessories;
@property(copy, nonatomic) NSArray *uniqueIdentifiersForBridgedAccessories; // @synthesize uniqueIdentifiersForBridgedAccessories=_uniqueIdentifiersForBridgedAccessories;
@property(nonatomic) _Bool bridgedAccessory; // @synthesize bridgedAccessory=_bridgedAccessory;
@property(readonly, nonatomic, getter=isBridged) _Bool bridged;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
- (void)setCurrentAccessory:(_Bool)arg1;
- (_Bool)isCurrentAccessory;
@property(nonatomic) __weak id <HMAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSArray *cameraProfiles;
- (id)mediaProfile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

