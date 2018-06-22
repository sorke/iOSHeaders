//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFHomeAppInstallStateArbiterObserver.h"
#import "HFLocationSensingCoordinatorDelegate.h"
#import "HFMediaObjectObserver.h"
#import "HFMediaSessionObserver.h"
#import "HFStateRestorationSettingsObserver.h"
#import "HMAccessoryDelegatePrivate.h"
#import "HMAccessorySettingsDelegate.h"
#import "HMCameraSnapshotControlDelegate.h"
#import "HMCameraStreamControlDelegate.h"
#import "HMHomeDelegatePrivate.h"
#import "HMHomeManagerDelegatePrivate.h"
#import "HMMediaProfileDelegate.h"
#import "HMResidentDeviceDelegate.h"
#import "HMSoftwareUpdateControllerDelegate.h"
#import "HMSoftwareUpdateDelegate.h"
#import "HMSymptomsHandlerDelegate.h"
#import "HMUserDelegatePrivate.h"
#import "_HFSettingsObserverTupleOwning.h"

@class HFLocationSensingCoordinator, HMHome, HMHomeManager, NAFuture, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface HFHomeKitDispatcher : NSObject <HFLocationSensingCoordinatorDelegate, HFHomeAppInstallStateArbiterObserver, _HFSettingsObserverTupleOwning, HFStateRestorationSettingsObserver, HMResidentDeviceDelegate, HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate, HMMediaProfileDelegate, HMSoftwareUpdateControllerDelegate, HMAccessorySettingsDelegate, HMSoftwareUpdateDelegate, HMSymptomsHandlerDelegate, HMUserDelegatePrivate, HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, HFMediaObjectObserver, HFMediaSessionObserver>
{
    _Bool _hasLoadedHomes;
    int _homeKitPreferencesChangedNotifyToken;
    HMHomeManager *_homeManager;
    HMHome *_home;
    HMHome *_overrideHome;
    HMHome *_selectedHome;
    HFLocationSensingCoordinator *_locationCoordinator;
    NSTimer *_homeSensingIdleTimer;
    NSMutableDictionary *_remoteAccessStateByHomeID;
    NSHashTable *_homeObservers;
    NSHashTable *_homeManagerObservers;
    NSHashTable *_accessoryObservers;
    NSHashTable *_residentDeviceObservers;
    NSHashTable *_cameraObservers;
    NSHashTable *_mediaObjectObservers;
    NSHashTable *_mediaSessionObservers;
    NSHashTable *_softwareUpdateControllerObservers;
    NSHashTable *_softwareUpdateObservers;
    NSHashTable *_userObservers;
    NSHashTable *_symptomsHandlerObservers;
    NSMutableArray *_settingsObservers;
    NSMutableArray *_requestedSoftwareUpdates;
    NSMutableArray *_homePromises;
    NSMutableArray *_firstHomeAddedPromises;
    NSMutableArray *_allHomesPromises;
    NAFuture *_locationCoordinatorSetupFuture;
}

+ (id)sharedDispatcher;
+ (unsigned long long)_homeManagerCreationPolicy;
@property(retain, nonatomic) NAFuture *locationCoordinatorSetupFuture; // @synthesize locationCoordinatorSetupFuture=_locationCoordinatorSetupFuture;
@property(retain, nonatomic) NSMutableArray *allHomesPromises; // @synthesize allHomesPromises=_allHomesPromises;
@property(retain, nonatomic) NSMutableArray *firstHomeAddedPromises; // @synthesize firstHomeAddedPromises=_firstHomeAddedPromises;
@property(retain, nonatomic) NSMutableArray *homePromises; // @synthesize homePromises=_homePromises;
@property(readonly, nonatomic) NSMutableArray *requestedSoftwareUpdates; // @synthesize requestedSoftwareUpdates=_requestedSoftwareUpdates;
@property(retain, nonatomic) NSMutableArray *settingsObservers; // @synthesize settingsObservers=_settingsObservers;
@property(retain, nonatomic) NSHashTable *symptomsHandlerObservers; // @synthesize symptomsHandlerObservers=_symptomsHandlerObservers;
@property(retain, nonatomic) NSHashTable *userObservers; // @synthesize userObservers=_userObservers;
@property(retain, nonatomic) NSHashTable *softwareUpdateObservers; // @synthesize softwareUpdateObservers=_softwareUpdateObservers;
@property(retain, nonatomic) NSHashTable *softwareUpdateControllerObservers; // @synthesize softwareUpdateControllerObservers=_softwareUpdateControllerObservers;
@property(retain, nonatomic) NSHashTable *mediaSessionObservers; // @synthesize mediaSessionObservers=_mediaSessionObservers;
@property(retain, nonatomic) NSHashTable *mediaObjectObservers; // @synthesize mediaObjectObservers=_mediaObjectObservers;
@property(retain, nonatomic) NSHashTable *cameraObservers; // @synthesize cameraObservers=_cameraObservers;
@property(retain, nonatomic) NSHashTable *residentDeviceObservers; // @synthesize residentDeviceObservers=_residentDeviceObservers;
@property(retain, nonatomic) NSHashTable *accessoryObservers; // @synthesize accessoryObservers=_accessoryObservers;
@property(retain, nonatomic) NSHashTable *homeManagerObservers; // @synthesize homeManagerObservers=_homeManagerObservers;
@property(retain, nonatomic) NSHashTable *homeObservers; // @synthesize homeObservers=_homeObservers;
@property(retain, nonatomic) NSMutableDictionary *remoteAccessStateByHomeID; // @synthesize remoteAccessStateByHomeID=_remoteAccessStateByHomeID;
@property(nonatomic) int homeKitPreferencesChangedNotifyToken; // @synthesize homeKitPreferencesChangedNotifyToken=_homeKitPreferencesChangedNotifyToken;
@property(retain, nonatomic) NSTimer *homeSensingIdleTimer; // @synthesize homeSensingIdleTimer=_homeSensingIdleTimer;
@property(retain, nonatomic) HFLocationSensingCoordinator *locationCoordinator; // @synthesize locationCoordinator=_locationCoordinator;
@property(retain, nonatomic) HMHome *selectedHome; // @synthesize selectedHome=_selectedHome;
@property(retain, nonatomic) HMHome *overrideHome; // @synthesize overrideHome=_overrideHome;
@property(nonatomic) _Bool hasLoadedHomes; // @synthesize hasLoadedHomes=_hasLoadedHomes;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void).cxx_destruct;
- (void)stateRestorationSettings:(id)arg1 selectedHomeIdentifierDidUpdateExternally:(id)arg2;
- (void)installStateArbiter:(id)arg1 installStateDidChange:(_Bool)arg2;
- (void)settingsObserverTupleWasInvalidated:(id)arg1;
- (_Bool)_shouldPersistSelectedHomeToDefaults;
- (void)startHomeSensingIdleTimer;
- (void)updateStopHomeSensingIdleTimerState;
- (id)homeSensingActiveFuture;
- (void)_setDelegate:(id)arg1 forMediaProfileContainer:(id)arg2 session:(id)arg3;
- (void)_setDelegate:(id)arg1 forAccessoryHierarchy:(id)arg2;
- (void)_setDelegateForObjectsInCurrentHome:(id)arg1;
- (id)_primaryHome;
- (void)_finishFirstHomeAddedPromises:(id)arg1;
- (void)_finishAllHomesPromises:(id)arg1;
- (void)_finishHomePromises:(id)arg1;
- (void)_updateRemoteAccessStateForHome:(id)arg1 notifyingObservers:(_Bool)arg2;
- (void)home:(id)arg1 didUpdateReprovisionStateForAccessory:(id)arg2;
- (void)symptomsHandler:(id)arg1 didUpdateFixState:(long long)arg2;
- (void)symptomsHandler:(id)arg1 didUpdateCanInitiateFix:(_Bool)arg2;
- (void)symptomsHandler:(id)arg1 didUpdateSymptoms:(id)arg2;
- (void)coordinator:(id)arg1 homeSensingStatusDidChange:(_Bool)arg2;
- (void)coordinator:(id)arg1 locationSensingAvailabilityDidChange:(_Bool)arg2;
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;
- (void)softwareUpdate:(id)arg1 didUpdateDocumentationAvailable:(_Bool)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateDocumentation:(id)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2;
- (void)softwareUpdateController:(id)arg1 didUpdateAvailableUpdate:(id)arg2;
- (void)settingsDidUpdate:(id)arg1;
- (void)settingsWillUpdate:(id)arg1;
- (void)mediaSession:(id)arg1 failedToUpdatePlaybackStateWithError:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(id)arg1 willUpdatePlaybackState:(long long)arg2;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)residentDevice:(id)arg1 didUpdateCapabilities:(unsigned long long)arg2;
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)residentDevice:(id)arg1 didUpdateEnabled:(_Bool)arg2;
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;
- (void)accessoryDidRemoveSymptomsHandler:(id)arg1;
- (void)accessory:(id)arg1 didAddSymptomsHandler:(id)arg2;
- (void)accessory:(id)arg1 didUpdateConfigurationStateForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateServiceSubtypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateDefaultNameForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateConfiguredNameForService:(id)arg2;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessory:(id)arg1 didUpdateLoggedInAccount:(id)arg2;
- (void)accessory:(id)arg1 didUpdateSoftwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didRemoveProfile:(id)arg2;
- (void)accessory:(id)arg1 didAddProfile:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(_Bool)arg2;
- (void)accessory:(id)arg1 didUpdateStoreID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateBundleID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateConfiguredName:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateName:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(_Bool)arg2;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)home:(id)arg1 didUpdateLocation:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeManagerDidEndBatchNotifications:(id)arg1;
- (void)homeManagerWillStartBatchNotifications:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(_Bool)arg2;
- (void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(_Bool)arg2;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateApplicationData:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)updateSelectedHome;
- (_Bool)hasRequestedUpdate:(id)arg1;
- (void)markUpdate:(id)arg1 asRequested:(_Bool)arg2;
- (id)_setupLocationSensingCoordinator;
@property(nonatomic) _Bool selectedHomeFollowsLocation;
@property(readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
@property(readonly, nonatomic) NAFuture *allHomesFuture;
@property(readonly, nonatomic) NAFuture *firstHomeAddedFuture;
@property(readonly, nonatomic) NAFuture *homeFuture;
- (void)_requestSelectedHome:(id)arg1 notifyAndSaveIfNecessary:(_Bool)arg2;
- (_Bool)setSelectedHomeWithName:(id)arg1;
- (void)updateHome;
- (void)warmup;
- (void)dispatchUserObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchSymptomsHandlerMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchSoftwareUpdateMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchSoftwareUpdateControllerMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchAccessorySettingMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchMediaObjectObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchMediaSessionObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchCameraObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchAccessoryObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchHomeObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchHomeManagerObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)removeSymptomsHandlerObserver:(id)arg1;
- (void)addSymptomsHandlerObserver:(id)arg1;
- (void)removeUserObserver:(id)arg1;
- (void)addUserObserver:(id)arg1;
- (void)removeSoftwareUpdateObserver:(id)arg1;
- (void)addSoftwareUpdateObserver:(id)arg1;
- (void)removeSoftwareUpdateControllerObserver:(id)arg1;
- (void)addSoftwareUpdateControllerObserver:(id)arg1;
- (void)removeMediaSessionObserver:(id)arg1;
- (void)addMediaSessionObserver:(id)arg1;
- (void)removeMediaProfileObserver:(id)arg1;
- (void)addMediaProfileObserver:(id)arg1;
- (void)removeMediaObjectObserver:(id)arg1;
- (void)addMediaObjectObserver:(id)arg1;
- (void)removeSettingObserver:(id)arg1 forSettings:(id)arg2 setting:(id)arg3;
- (void)removeSettingObserver:(id)arg1 forSettings:(id)arg2;
- (void)removeSettingObserver:(id)arg1;
- (void)addSettingObserver:(id)arg1 forSettings:(id)arg2 setting:(id)arg3;
- (void)addSettingObserver:(id)arg1 forSettings:(id)arg2;
- (void)addSettingObserver:(id)arg1;
- (void)removeCameraObserver:(id)arg1;
- (void)addCameraObserver:(id)arg1;
- (void)removeResidentDeviceObserver:(id)arg1;
- (void)addResidentDeviceObserver:(id)arg1;
- (void)removeAccessoryObserver:(id)arg1;
- (void)addAccessoryObserver:(id)arg1;
- (void)removeHomeObserver:(id)arg1;
- (void)addHomeObserver:(id)arg1;
- (void)removeHomeManagerObserver:(id)arg1;
- (void)addHomeManagerObserver:(id)arg1;
- (void)_createHomeManagerIfNecessary;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

