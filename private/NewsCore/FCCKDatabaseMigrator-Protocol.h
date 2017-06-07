//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CKRecord, FCCKPrivateDatabase, NSArray, NSSet, NSString;

@protocol FCCKDatabaseMigrator
- (void)databaseMigrationDidFinishForDatabase:(FCCKPrivateDatabase *)arg1 result:(long long)arg2;
- (CKRecord *)databaseMigrationMigrateRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2 deleteOriginal:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)databaseMigrationShouldDropRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSArray *)databaseMigrationRecordNamesToMigrateInZone:(NSString *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSSet *)databaseMigrationZoneNamesForDatabase:(FCCKPrivateDatabase *)arg1;
@end
