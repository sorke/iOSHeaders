//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMFWiFiManager, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HMDSymptomManager : HMFObject <HMFLogging>
{
    _Bool _deviceProblemNotificationTokenValid;
    _Bool _supportsRegisteringAccessories;
    int _deviceProblemNotificationToken;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMDSharingDeviceDiscovery> _deviceDiscovery;
    id <HMDCompanionLinkClient> _companionLinkClient;
    HMFWiFiManager *_wifiManager;
    NSMutableDictionary *_symptomContainerByRegisteredIDSIdentifier;
    NSMapTable *_nearbySFDevices;
    NSMapTable *_networkReachableRPCompanionLinkDevices;
    unsigned long long _deviceDiscoveryFlags;
}

+ (id)logCategory;
+ (id)sharedManager;
@property(nonatomic) _Bool supportsRegisteringAccessories; // @synthesize supportsRegisteringAccessories=_supportsRegisteringAccessories;
@property(nonatomic, getter=isDeviceProblemNotificationTokenValid) _Bool deviceProblemNotificationTokenValid; // @synthesize deviceProblemNotificationTokenValid=_deviceProblemNotificationTokenValid;
@property(nonatomic) int deviceProblemNotificationToken; // @synthesize deviceProblemNotificationToken=_deviceProblemNotificationToken;
@property(nonatomic) unsigned long long deviceDiscoveryFlags; // @synthesize deviceDiscoveryFlags=_deviceDiscoveryFlags;
@property(readonly, nonatomic) NSMapTable *networkReachableRPCompanionLinkDevices; // @synthesize networkReachableRPCompanionLinkDevices=_networkReachableRPCompanionLinkDevices;
@property(readonly, nonatomic) NSMapTable *nearbySFDevices; // @synthesize nearbySFDevices=_nearbySFDevices;
@property(readonly, nonatomic) NSMutableDictionary *symptomContainerByRegisteredIDSIdentifier; // @synthesize symptomContainerByRegisteredIDSIdentifier=_symptomContainerByRegisteredIDSIdentifier;
@property(readonly, nonatomic) HMFWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(readonly, nonatomic) id <HMDCompanionLinkClient> companionLinkClient; // @synthesize companionLinkClient=_companionLinkClient;
@property(readonly, nonatomic) id <HMDSharingDeviceDiscovery> deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)handleCurrentNetworkDidChangeNotification:(id)arg1;
- (void)handleAccessoryRemovedNotification:(id)arg1;
- (void)_rpDeviceLostHandler:(id)arg1;
- (void)_rpDeviceChangedHandler:(id)arg1;
- (void)_rpDeviceFoundHandler:(id)arg1;
- (void)_sfDeviceLostHandler:(id)arg1;
- (void)_sfDeviceChangedHandler:(id)arg1;
- (void)_sfDeviceFoundHandler:(id)arg1;
- (void)_updateSymptomsForAllRegisteredAccessories;
- (void)_updateSymptomsForAccessoryWithIDSIdentifier:(id)arg1;
- (void)_initiateFixForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_symptomsForProblemFlags:(unsigned long long)arg1;
- (id)_localSymptomsForAccessoryWithIDSIdentifier:(id)arg1;
- (id)_currentDeviceSymptoms;
- (void)_stopCompanionLinkClient;
- (void)_stopDeviceDiscovery;
- (void)_stop;
- (void)_startCompanionLinkClient;
- (void)_startDeviceDiscovery;
- (void)_start;
- (void)initiateFixForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopDiscoveringSymptomsRequiringNearbyInfo;
- (void)startDiscoveringSymptomsRequiringNearbyInfo;
- (void)deregisterAccessory:(id)arg1;
- (void)registerAccessory:(id)arg1 delegate:(id)arg2;
- (void)currentDeviceSymptomsWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDeviceDiscovery:(id)arg1 companionLinkClient:(id)arg2 wifiManager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

