//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPSDomainAccessor, NSDictionary, NSString, TLAccessQueue;

@interface TLToneManager : NSObject
{
    TLAccessQueue *_accessQueue;
    NSDictionary *_tonesByIdentifier;
    NSDictionary *_toneIdentifiersBySyncIdentifier;
    NSDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    _Bool _cachedWatchPrefersSalientNotifications;
    _Bool _hasValidCachedWatchPrefersSalientNotifications;
    _Bool _shouldSkipNextWatchPrefersSalientNotificationsDidChangeNotification;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    _Bool _shouldUseServiceToAccessTonePreferences;
    NSDictionary *_cachedTonePreferences;
    _Bool _shouldIgnoreNextToneDidChangeNotification;
}

+ (_Bool)_checkForFileExistenceAtPath:(id)arg1 allowingTCCPreflight:(_Bool)arg2;
+ (_Bool)_migrateLegacyToneSettings;
+ (id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
+ (id)_systemWideTonePreferenceKeyForAlertType:(long long)arg1;
+ (id)sharedToneManager;
- (void).cxx_destruct;
- (void)_handleDeviceRingtonesChangedNotification;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (_Bool)_ensureDirectoryExistsAtPath:(id)arg1;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (void)_handleWatchPrefersSalientNotificationDidChange;
- (void)_setWatchPrefersSalientNotifications:(_Bool)arg1;
- (_Bool)_watchPrefersSalientNotifications;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(_Bool *)arg3;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1;
- (id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2;
- (void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
- (long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id *)arg1;
- (long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(_Bool)arg1 returningFilePathsForFoundOrphans:(id *)arg2 wasAffectedByAccidentalToneDeletion:(_Bool *)arg3;
- (id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2;
- (void)_removeAllSyncedData;
- (_Bool)_removeToneWithSyncIdentifier:(id)arg1;
- (_Bool)_importSyncedToneWithMetadata:(id)arg1 fileName:(id)arg2;
- (id)_toneForSyncIdentifier:(id)arg1;
- (id)_allSyncedTones;
- (_Bool)_wasAffectedByAccidentalToneDeletion;
- (_Bool)_transferPurchasedToITunes:(id)arg1;
- (id)_importPurchasedToneWithMetadata:(id)arg1 fileName:(id)arg2;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)toneWithIdentifierIsValid:(id)arg1;
- (_Bool)_toneWithIdentifierIsValid:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(_Bool *)arg2;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)nameForToneIdentifier:(id)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)filePathForToneIdentifier:(id)arg1;
- (id)_soundForToneIdentifier:(id)arg1;
- (id)_defaultRingtonePath;
- (id)_defaultRingtoneName;
- (id)defaultRingtoneIdentifier;
- (id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)defaultToneIdentifierForAlertType:(long long)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1 topic:(id)arg2;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1;
- (id)currentToneNameForAlertType:(long long)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (id)currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2;
- (id)currentToneIdentifierForAlertType:(long long)arg1;
- (_Bool)_setToneIdentifierUsingService:(id)arg1 keyedByTopic:(id)arg2 forPreferenceKey:(id)arg3;
- (id)_tonePreferencesFromService;
- (id)_newServiceConnection;
- (_Bool)_toneWithIdentifierIsAlarmWakeUp:(id)arg1;
- (_Bool)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (_Bool)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (_Bool)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (_Bool)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (id)_aliasForToneIdentifier:(id)arg1;
- (void)_loadToneIdentifierAliasMap;
- (void)_loadAlertToneInfo;
- (id)_systemWatchSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemSoundDirectory;
- (id)_systemEmbeddedModernSoundDirectory;
- (id)_systemEmbeddedSoundDirectory;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (id)_alarmWakeUpRingtoneDirectory;
- (_Bool)_removeAllTones;
- (int)_lockManifestAtPath:(id)arg1;
- (_Bool)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(_Bool)arg3 alreadyLockedManifest:(_Bool)arg4 removedEntries:(id *)arg5;
- (_Bool)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2;
- (id)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(_Bool)arg4;
- (id)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (unsigned long long)_installedTonesSize;
- (id)_installedTones;
- (id)_toneWithIdentifier:(id)arg1;
- (void)_reloadTones;
- (void)_reloadTonesAfterExternalChange;
- (id)_tonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
@property(readonly, nonatomic) NSString *_systemRingtoneDirectory;
@property(readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_rootDirectory;
- (void)dealloc;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)init;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (id)currentToneIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2;

@end

