//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, PLCloudBatchUploader, PLCloudPhotoLibraryUploadTracker;

@interface PLCloudPersistentHistoryMigrator : NSObject
{
    PLCloudBatchUploader *_uploader;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    NSManagedObjectContext *_managedObjectContext;
    id <PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4;
- (void).cxx_destruct;
- (void)updateSavedTokenFromPersistentHistoryResult:(id)arg1;
- (void)uploadEventResults:(id)arg1;
- (id)fetchAllPersistentHistoryTransactions;
- (id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)arg1;
- (_Bool)readLastKnownChangeHubIndex:(unsigned long long *)arg1;
- (_Bool)checkForExistingMigrationMarker;
- (long long)migrate;
- (void)migrateToPersistentHistoryIfNecessary;
- (id)initWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4;

@end

