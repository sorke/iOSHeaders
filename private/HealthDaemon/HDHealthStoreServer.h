//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDeepBreathingSessionServerDelegate.h"
#import "HDDiagnosticObject.h"
#import "HDHealthStoreServerInterface.h"
#import "HDSampleSaving.h"
#import "HDTaskServerDelegate.h"
#import "HDUnitPreferencesManagerObserver.h"

@class HDAuthorizationServer, HDCloudSyncServer, HDDaemon, HDDataCollectionManager, HDHealthServicesServer, HDMedicalIDServer, HDNanoSyncServer, HDNotificationServer, HDProfile, HDProfileServer, HDQueryControlServer, HDStaticSyncServer, HDUtilityServer, HDWorkoutServer, HDXPCClient, HKServerConfiguration, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HDHealthStoreServer : NSObject <HDDiagnosticObject, HDUnitPreferencesManagerObserver, HDDeepBreathingSessionServerDelegate, HDSampleSaving, HDTaskServerDelegate, HDHealthStoreServerInterface>
{
    NSMutableDictionary *_deepBreathingSessionServersByUUID;
    NSObject<OS_dispatch_source> *_clientTransactionTimer;
    NSString *_clientSourceVersion;
    NSMutableDictionary *_taskServerEndpointsByUUID;
    NSMutableDictionary *_taskServerObserversByUUID;
    HDDaemon *_daemon;
    HDProfile *_profile;
    HKServerConfiguration *_configuration;
    HDXPCClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    HDAuthorizationServer *_authorizationServer;
    HDDataCollectionManager *_dataCollectMgr;
    NSString *_serverID;
    NSString *_clientDebuggingIdentifier;
    NSMutableSet *_subservers;
    HDCloudSyncServer *_cloudSyncServer;
    HDHealthServicesServer *_healthServicesServer;
    HDMedicalIDServer *_medicalIDServer;
    HDNanoSyncServer *_nanoSyncServer;
    HDNotificationServer *_notificationServer;
    HDProfileServer *_profileServer;
    HDQueryControlServer *_queryControlServer;
    HDStaticSyncServer *_staticSyncServer;
    HDUtilityServer *_utilityServer;
    HDWorkoutServer *_workoutServer;
}

@property(retain, nonatomic) HDWorkoutServer *workoutServer; // @synthesize workoutServer=_workoutServer;
@property(retain, nonatomic) HDUtilityServer *utilityServer; // @synthesize utilityServer=_utilityServer;
@property(retain, nonatomic) HDStaticSyncServer *staticSyncServer; // @synthesize staticSyncServer=_staticSyncServer;
@property(retain, nonatomic) HDQueryControlServer *queryControlServer; // @synthesize queryControlServer=_queryControlServer;
@property(retain, nonatomic) HDProfileServer *profileServer; // @synthesize profileServer=_profileServer;
@property(retain, nonatomic) HDNotificationServer *notificationServer; // @synthesize notificationServer=_notificationServer;
@property(retain, nonatomic) HDNanoSyncServer *nanoSyncServer; // @synthesize nanoSyncServer=_nanoSyncServer;
@property(retain, nonatomic) HDMedicalIDServer *medicalIDServer; // @synthesize medicalIDServer=_medicalIDServer;
@property(retain, nonatomic) HDHealthServicesServer *healthServicesServer; // @synthesize healthServicesServer=_healthServicesServer;
@property(retain, nonatomic) HDCloudSyncServer *cloudSyncServer; // @synthesize cloudSyncServer=_cloudSyncServer;
@property(retain, nonatomic) NSMutableSet *subservers; // @synthesize subservers=_subservers;
@property(retain, nonatomic) NSString *clientDebuggingIdentifier; // @synthesize clientDebuggingIdentifier=_clientDebuggingIdentifier;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property(retain, nonatomic) HDDataCollectionManager *dataCollectMgr; // @synthesize dataCollectMgr=_dataCollectMgr;
@property(retain, nonatomic) HDAuthorizationServer *authorizationServer; // @synthesize authorizationServer=_authorizationServer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) HKServerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (void)remote_containerAppExtensionEntitlementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)remote_weeklySummaryInfoForDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1;
- (void)remote_fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_cancelActiveClientTransaction;
- (void)_cancelActiveClientTransaction;
- (void)_queue_holdActiveClientTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_holdActiveClientTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_serverActivityChanged;
- (void)_serverActivityChanged;
- (_Bool)_queue_isServerActive;
- (void)remote_clientResumedWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_clientWillSuspendWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_submitMetricsIgnoringAnchor:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (id)diagnosticDescription;
- (void)remote_getHealthLiteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_removeDefaultForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)remote_setDefaultValue:(id)arg1 forKey:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)remote_getDefaultForKey:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_orderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_hasSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_hasSampleWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)deepBreathingServerDidDeactivate:(id)arg1;
- (void)_queue_deactivateDeepBreathingSessionServerWithUUID:(id)arg1;
- (void)_remote_attachDeepBreathingSessionServerWithClient:(id)arg1 sessionConfiguration:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_permissionBlockForRestrictedSourceEntities:(id)arg1;
- (_Bool)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2;
- (id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(_Bool)arg4 error:(id *)arg5;
- (void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_objectsToInsertWithObjects:(id)arg1 error:(id *)arg2;
- (void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_saveDataObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)objectAuthorizationPromptHandler;
- (CDUnknownBlockType)_authorizationPromptHandler;
- (void)_openAppForAuthorizationForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)_clientRemoteObjectProxy;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_resetObjectAuthorizationStatusForObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)remote_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)remote_allObjectAuthorizationRecordsForSampleWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_retrieveAllAuthorizationRecordsForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_allSourcesRequestingTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allAuthorizationRecordsForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_handleAuthorizationForExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_authorizationStatusForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchDisplayNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveSamples:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performIfAuthorizedToDeleteObjectTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)performIfAuthorizedToSaveObjectTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)removeTaskServerObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (id)sampleSavingDelegate;
- (id)taskServerWithUUID:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (void)remote_createTaskServerForIdentifier:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_proxyForQueryControlServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForProfileServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForWorkoutServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForUtilityServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForStaticSyncServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForCloudSyncServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForNotificationServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForNanoSyncServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForMedicalIDServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_proxyForHealthServicesServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchSubserverWithRequiredEntitlement:(id)arg1 subserverHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)clientSourceWithError:(id *)arg1;
- (void)_requirePrivateHealthKitEntitlementUsingBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_requireEntitlement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)_clientSourceVersion;
- (_Bool)_clientHasPrivateHealthKitEntitlementWithError:(id *)arg1;
- (_Bool)_clientHasUtilityEntitlementWithError:(id *)arg1;
- (void)dealloc;
- (void)invalidate;
- (void)start;
- (id)initWithClient:(id)arg1 profile:(id)arg2 queue:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

