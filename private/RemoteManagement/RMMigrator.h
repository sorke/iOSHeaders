//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersistentHistoryToken, NSPersistentStore, NSPersistentStoreCoordinator;

@interface RMMigrator : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStore *_localStore;
    NSPersistentStore *_cloudStore;
    NSPersistentHistoryToken *_migratedToken;
}

+ (id)mirroredEntityNames;
+ (id)cloudToLocalMapping;
+ (id)localToCloudMapping;
- (void).cxx_destruct;
- (_Bool)addHistoryToken:(id)arg1 forAuthor:(id)arg2 toMetadataForStore:(id)arg3 error:(id *)arg4;
- (id)historyTokenForAuthor:(id)arg1 fromStore:(id)arg2;
- (_Bool)_checkPreconditionsError:(id *)arg1;
- (void)_dumpLocalApps:(id)arg1;
- (void)_dumpLocalPersonalActivations:(id)arg1;
- (void)_dumpCloudApps:(id)arg1;
- (void)_dumpCloudPersonalActivations:(id)arg1;
- (void)resolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2;
- (_Bool)migrateWithError:(id *)arg1;
- (_Bool)areLocalChangesInterestingWithError:(id *)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1;

@end

