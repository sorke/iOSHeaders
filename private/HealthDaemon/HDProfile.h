//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDHealthDaemonReadyObserver.h"

@class HDAWDSubmissionManager, HDActivityCacheManager, HDAppSubscriptionManager, HDAssertionManager, HDAuthorizationManager, HDCloudSyncManager, HDCurrentActivitySummaryHelper, HDDaemon, HDDaemonSyncEngine, HDDataCollectionManager, HDDataManager, HDDataProvenanceManager, HDDatabase, HDDatabasePruningManager, HDDeviceManager, HDFitnessMachineManager, HDHealthServiceManager, HDMedicalIDDataManager, HDMetadataManager, HDMigrationManager, HDNanoSyncManager, HDNotificationManager, HDServiceConnectionManager, HDSourceManager, HDSourceOrderManager, HDUnitPreferencesManager, HDUserCharacteristicsManager, HDWorkoutCondenser, HDWorkoutManager, NSDictionary, NSString, NSURL;

@interface HDProfile : NSObject <HDHealthDaemonReadyObserver>
{
    HDDatabase *_database;
    HDSourceManager *_sourceManager;
    HDDeviceManager *_deviceManager;
    HDAuthorizationManager *_authorizationManager;
    NSString *_directoryPath;
    HDDaemonSyncEngine *_syncEngine;
    NSDictionary *_profileExtensionsByIdentifier;
    struct os_unfair_lock_s _profileLock;
    HDDaemon *_daemon;
    HDDataManager *_dataManager;
    HDDataProvenanceManager *_dataProvenanceManager;
    HDMetadataManager *_metadataManager;
    HDAssertionManager *_sessionAssertionManager;
    HDSourceOrderManager *_sourceOrderManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HDWorkoutCondenser *_workoutCondenser;
    long long _profileType;
    NSString *_medicalIDDirectoryPath;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDDatabasePruningManager *_databasePruningManager;
    HDMedicalIDDataManager *_medicalIDDataManager;
    HDMigrationManager *_migrationManager;
    HDUnitPreferencesManager *_unitPreferencesManager;
}

@property(readonly, nonatomic) HDUnitPreferencesManager *unitPreferencesManager; // @synthesize unitPreferencesManager=_unitPreferencesManager;
@property(readonly, nonatomic) HDMigrationManager *migrationManager; // @synthesize migrationManager=_migrationManager;
@property(readonly, nonatomic) HDMedicalIDDataManager *medicalIDDataManager; // @synthesize medicalIDDataManager=_medicalIDDataManager;
@property(readonly, nonatomic) HDDatabasePruningManager *databasePruningManager; // @synthesize databasePruningManager=_databasePruningManager;
@property(readonly, nonatomic) HDAWDSubmissionManager *awdSubmissionManager; // @synthesize awdSubmissionManager=_awdSubmissionManager;
@property(readonly, copy, nonatomic) NSString *medicalIDDirectoryPath; // @synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath;
@property(readonly, nonatomic) long long profileType; // @synthesize profileType=_profileType;
@property(readonly, nonatomic) HDWorkoutCondenser *workoutCondenser; // @synthesize workoutCondenser=_workoutCondenser;
@property(readonly, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager; // @synthesize userCharacteristicsManager=_userCharacteristicsManager;
@property(readonly, nonatomic) HDSourceOrderManager *sourceOrderManager; // @synthesize sourceOrderManager=_sourceOrderManager;
@property(readonly, nonatomic) HDSourceManager *sourceManager; // @synthesize sourceManager=_sourceManager;
@property(readonly, nonatomic) HDAssertionManager *sessionAssertionManager; // @synthesize sessionAssertionManager=_sessionAssertionManager;
@property(readonly, nonatomic) HDMetadataManager *metadataManager; // @synthesize metadataManager=_metadataManager;
@property(readonly, nonatomic) HDDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(readonly, nonatomic) HDDataProvenanceManager *dataProvenanceManager; // @synthesize dataProvenanceManager=_dataProvenanceManager;
@property(readonly, nonatomic) HDDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (id)_newUserCharacteristicsManager;
- (id)_newAWDSubmissionManager;
- (id)profileExtensionsConformingToProtocol:(id)arg1;
- (id)profileExtensionWithIdentifier:(id)arg1;
- (_Bool)setDisplayName:(id)arg1 error:(id *)arg2;
- (id)displayNameWithError:(id *)arg1;
@property(readonly, copy) NSString *description;
- (void)terminationCleanup;
- (void)obliterateWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateAndWait;
- (void)_createExtensionsIfNeeded;
- (void)daemonReady:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *directoryURL;
@property(readonly, copy, nonatomic) NSString *directoryPath;
@property(readonly, nonatomic) HDFitnessMachineManager *fitnessMachineManager;
@property(readonly, nonatomic) HDWorkoutManager *workoutManager;
@property(readonly, nonatomic) HDHealthServiceManager *serviceManager;
@property(readonly, nonatomic) HDServiceConnectionManager *serviceConnectionManager;
@property(readonly, nonatomic) HDNotificationManager *notificationManager;
@property(readonly, nonatomic) HDNanoSyncManager *nanoSyncManager;
@property(readonly, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property(readonly, nonatomic) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property(readonly, nonatomic) HDCloudSyncManager *cloudSyncManager;
@property(readonly, nonatomic) HDAppSubscriptionManager *appSubscriptionManager;
@property(readonly, nonatomic) HDActivityCacheManager *activityCacheManager;
@property(readonly, nonatomic) id <HDSyncEngine> syncEngine;
@property(readonly, nonatomic) HDAuthorizationManager *authorizationManager;
- (id)healthDeviceManager;
- (id)healthSourceManager;
@property(readonly, nonatomic) HDDatabase *database;
@property(readonly, nonatomic) __weak id <HDHealthDaemon> healthDaemon;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 profileType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

