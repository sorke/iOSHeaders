//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDDatabaseMigrationTransaction, NSMutableSet;

@interface HDDatabaseSchemaManager : NSObject
{
    NSMutableSet *_createdDatabaseNames;
    HDDatabaseMigrationTransaction *_transaction;
}

- (void).cxx_destruct;
- (_Bool)_createSchemaMigrationTableIfNeededForDatabaseName:(id)arg1 error:(id *)arg2;
- (id)_schemaTableNameForDatabaseName:(id)arg1;
- (_Bool)setVersion:(long long)arg1 schema:(id)arg2 protectionClass:(long long)arg3 error:(id *)arg4;
- (long long)currentVersionForSchema:(id)arg1 protectionClass:(long long)arg2 error:(id *)arg3;
- (id)initWithTransaction:(id)arg1;

@end

