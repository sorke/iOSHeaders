//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, NSTimeZone;

@interface _HKBehavior : NSObject
{
    NSNumber *_overridenSupportsSwimmingWorkoutSessions;
    NSNumber *_overridenEnableManateeForHSA2Accounts;
    _Bool _isDeviceSupported;
    _Bool _isAppleInternalInstall;
    _Bool _isAppleWatch;
    _Bool _isCompanionCapable;
    _Bool _hasTelephonyCapability;
    _Bool _isRunningStoreDemoMode;
    _Bool _runningInStoreDemoModeF201;
    _Bool _deviceSupportsHeartRateMotionContexts;
    _Bool _collectsCalorimetry;
    _Bool _collectsData;
    _Bool _performsWorkoutCondensation;
    _Bool _supportsAWDMetricSubmission;
    _Bool _supportsActivitySharing;
    _Bool _supportsAppSubscriptions;
    _Bool _supportsCloudSync;
    _Bool _supportsFeatureAvailabilityAssets;
    _Bool _supportsHeartRateDataCollection;
    _Bool _supportsNanoSync;
    _Bool _supportsRemoteAuthorization;
    _Bool _supportsSampleExpiration;
    _Bool _supportsWorkouts;
    _Bool _futureMigrationsEnabled;
    _Bool _isTestingDevice;
    NSString *_hostWriteAuthorizationUsageDescription;
    NSString *_hostReadAuthorizationUsageDescription;
    NSString *_hostClinicalReadAuthorizationUsageDescription;
}

+ (_Bool)_performsWorkoutCondensation;
+ (_Bool)_futureMigrationsEnabled;
+ (id)_simulatorDefaultName;
+ (id)_simulatorSettings;
+ (_Bool)_hasCompletedBuddy;
+ (_Bool)_shouldShowBuddy;
+ (_Bool)_isForceBuddyEnabled;
+ (_Bool)_runningInStoreDemoModeF201;
+ (_Bool)_deviceSupportsHeartRateMotionContexts;
+ (long long)_runningInStoreDemoModeFProgramNumber;
+ (_Bool)_isRunningStoreDemoMode;
+ (_Bool)_hasTelephonyCapability;
+ (_Bool)_isAppleInternalInstall;
+ (_Bool)_isDeviceSupported;
+ (_Bool)_readEnableManateeForHSA2AccountsFromHealthdDefaults;
+ (CDStruct_f6aba300)currentOSVersionStruct;
+ (id)currentOSVersion;
+ (id)currentOSBuild;
+ (id)currentDeviceProductType;
+ (id)currentDeviceClass;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceDisplayName;
+ (_Bool)shouldShowBuddy;
+ (_Bool)hasCompletedBuddy;
+ (void)disableForceBuddy;
+ (_Bool)showSensitiveLogItems;
+ (_Bool)isTestingDevice;
+ (_Bool)runningInStoreDemoModeF201;
+ (_Bool)isRunningStoreDemoMode;
+ (_Bool)isDeviceSupported;
+ (_Bool)isAppleInternalInstall;
+ (_Bool)hasTelephonyCapability;
+ (_Bool)isManateeEnabledByDefault;
+ (_Bool)allPairedWatchesSupportHeartRateMotionContexts;
+ (_Bool)activePairedWatchSupportsHeartRateMotionContexts;
+ (_Bool)activePairedWatchHasSmartFitnessCoaching;
+ (_Bool)anyPairedWatchHasFlightsClimbedCapability;
+ (_Bool)anyPairedWatchHasSOSModeCapability;
+ (id)activePairedWatchWithoutSOSMedicalIDContactsSupport;
+ (_Bool)hasPairedWatch;
+ (int)syncProtocolVersionForSystemBuildVersion:(id)arg1;
+ (int)syncProtocolVersionForNRDevice:(id)arg1;
+ (_Bool)currentlyPairedWatchMeetsMinimumVersion:(int)arg1;
+ (_Bool)allPairedWatchesMeetMinimumVersion:(int)arg1;
+ (void)resetSharedBehavior;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
+ (id)behaviorQueue;
@property(copy, nonatomic) NSString *hostClinicalReadAuthorizationUsageDescription; // @synthesize hostClinicalReadAuthorizationUsageDescription=_hostClinicalReadAuthorizationUsageDescription;
@property(copy, nonatomic) NSString *hostReadAuthorizationUsageDescription; // @synthesize hostReadAuthorizationUsageDescription=_hostReadAuthorizationUsageDescription;
@property(copy, nonatomic) NSString *hostWriteAuthorizationUsageDescription; // @synthesize hostWriteAuthorizationUsageDescription=_hostWriteAuthorizationUsageDescription;
@property(nonatomic) _Bool isTestingDevice; // @synthesize isTestingDevice=_isTestingDevice;
@property(nonatomic) _Bool futureMigrationsEnabled; // @synthesize futureMigrationsEnabled=_futureMigrationsEnabled;
@property(nonatomic) _Bool supportsWorkouts; // @synthesize supportsWorkouts=_supportsWorkouts;
@property(nonatomic) _Bool supportsSampleExpiration; // @synthesize supportsSampleExpiration=_supportsSampleExpiration;
@property(nonatomic) _Bool supportsRemoteAuthorization; // @synthesize supportsRemoteAuthorization=_supportsRemoteAuthorization;
@property(nonatomic) _Bool supportsNanoSync; // @synthesize supportsNanoSync=_supportsNanoSync;
@property(nonatomic) _Bool supportsHeartRateDataCollection; // @synthesize supportsHeartRateDataCollection=_supportsHeartRateDataCollection;
@property(readonly, nonatomic) _Bool supportsFeatureAvailabilityAssets; // @synthesize supportsFeatureAvailabilityAssets=_supportsFeatureAvailabilityAssets;
@property(nonatomic) _Bool supportsCloudSync; // @synthesize supportsCloudSync=_supportsCloudSync;
@property(nonatomic) _Bool supportsAppSubscriptions; // @synthesize supportsAppSubscriptions=_supportsAppSubscriptions;
@property(nonatomic) _Bool supportsActivitySharing; // @synthesize supportsActivitySharing=_supportsActivitySharing;
@property(nonatomic) _Bool supportsAWDMetricSubmission; // @synthesize supportsAWDMetricSubmission=_supportsAWDMetricSubmission;
@property(nonatomic) _Bool performsWorkoutCondensation; // @synthesize performsWorkoutCondensation=_performsWorkoutCondensation;
@property(nonatomic) _Bool collectsData; // @synthesize collectsData=_collectsData;
@property(nonatomic) _Bool collectsCalorimetry; // @synthesize collectsCalorimetry=_collectsCalorimetry;
@property(nonatomic) _Bool deviceSupportsHeartRateMotionContexts; // @synthesize deviceSupportsHeartRateMotionContexts=_deviceSupportsHeartRateMotionContexts;
@property(readonly, nonatomic) _Bool runningInStoreDemoModeF201; // @synthesize runningInStoreDemoModeF201=_runningInStoreDemoModeF201;
@property(readonly, nonatomic) _Bool isRunningStoreDemoMode; // @synthesize isRunningStoreDemoMode=_isRunningStoreDemoMode;
@property(nonatomic) _Bool hasTelephonyCapability; // @synthesize hasTelephonyCapability=_hasTelephonyCapability;
@property(nonatomic) _Bool isCompanionCapable; // @synthesize isCompanionCapable=_isCompanionCapable;
@property(nonatomic) _Bool isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property(nonatomic) _Bool isAppleInternalInstall; // @synthesize isAppleInternalInstall=_isAppleInternalInstall;
@property(nonatomic) _Bool isDeviceSupported; // @synthesize isDeviceSupported=_isDeviceSupported;
- (void).cxx_destruct;
- (void)setManateeEnabledForHSA2AccountsOverride:(_Bool)arg1;
@property(readonly, nonatomic, getter=isManateeEnabledForHSA2Accounts) _Bool manateeEnabledForHSA2Accounts;
@property(nonatomic) _Bool supportsSwimmingWorkoutSessions;
@property(readonly, nonatomic) unsigned long long currentDiskSpaceAvailable;
@property(readonly, nonatomic) unsigned long long totalDiskCapacity;
@property(readonly, nonatomic) NSDictionary *currentDiskUsage;
@property(readonly, copy, nonatomic) NSTimeZone *localTimeZone;
@property(readonly, nonatomic) CDStruct_f6aba300 currentOSVersionStruct;
@property(readonly, copy, nonatomic) NSString *currentOSVersion;
@property(readonly, copy, nonatomic) NSString *currentOSName;
@property(readonly, copy, nonatomic) NSString *currentOSBuild;
@property(readonly, copy, nonatomic) NSString *currentDeviceClass;
@property(readonly, nonatomic) _Bool isCurrentDeviceN2XA;
@property(readonly, copy, nonatomic) NSString *currentDeviceProductType;
@property(readonly, copy, nonatomic) NSString *currentInternalDeviceModel;
@property(readonly, copy, nonatomic) NSString *currentDeviceManufacturer;
@property(readonly, copy, nonatomic) NSString *currentDeviceName;
@property(readonly, copy, nonatomic) NSString *currentDeviceDisplayName;
- (id)init;

@end

