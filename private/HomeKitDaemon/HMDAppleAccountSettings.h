//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class NSString;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging>
{
}

+ (id)logCategory;
+ (_Bool)supportsCloudSettings;
+ (id)sharedSettings;
- (void)__updateHomeEnabled:(_Bool)arg1 userInitiated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateHomeEnabled:(_Bool)arg1 userInitiated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)__synchronize;
- (void)synchronize;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(_Bool)arg1;
@property(getter=isKeychainSyncEnabled) _Bool keychainSyncEnabled;
- (void)_notifyClientsOfUpdatedHomeState:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (void)enableHome:(_Bool)arg1 userInitiated:(_Bool)arg2;
@property(readonly, getter=isHomeEnabled) _Bool homeEnabled;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

