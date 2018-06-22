//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPersistentContainer.h"

@class NSArray, NSCloudKitMirroringDelegateOptions, NSDate, NSPersistentHistoryToken, NSPersistentStore, NSString, RCDatabaseMetadata;

__attribute__((visibility("hidden")))
@interface RCPersistentContainer : NSPersistentContainer
{
    NSPersistentStore *_localStore;
    NSPersistentStore *_cloudStore;
    NSArray *_cloudStores;
    NSString *_cloudStoreIdentifier;
    NSString *_transactionAuthor;
    RCDatabaseMetadata *_metadata;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSPersistentHistoryToken *_currentHistoryToken;
    NSPersistentHistoryToken *_latestHistoryToken;
    NSArray *_contextsToNotify;
    id _changeNotificationObserver;
    NSDate *_changeNotificationDate;
}

+ (id)newObjectModel;
+ (id)mirroringContainer;
+ (id)sharedContainer;
+ (void)initialize;
@property(readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions; // @synthesize mirroringOptions=_mirroringOptions;
@property(readonly, nonatomic) RCDatabaseMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSPersistentStore *cloudStore; // @synthesize cloudStore=_cloudStore;
@property(readonly, nonatomic) NSPersistentStore *localStore; // @synthesize localStore=_localStore;
- (void).cxx_destruct;
- (void)_migrateDatabaseIfNecessary;
- (id)_legacyRecordingWithUniqueID:(id)arg1 context:(id)arg2;
- (id)_cloudRecordingsInContext:(id)arg1;
- (id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg1;
- (void)_deleteOrphanedEntityRevisionsWithContext:(id)arg1;
- (id)_valueForDatabaseProperty:(id)arg1 context:(id)arg2;
- (void)_handleRemoteChangeNotificationOnMainQueue:(id)arg1;
- (id)_nextTransactionAfterToken:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)newContextWithConcurrencyType:(unsigned long long)arg1;
- (void)dealloc;
- (id)_initWithMirroring:(_Bool)arg1;

@end

