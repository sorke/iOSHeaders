//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, HDSQLiteDatabase, NSMutableDictionary, NSMutableSet, NSNumber, NSSet;

@interface HDDataEntityDeletionContext : NSObject
{
    HDProfile *_profile;
    NSMutableDictionary *_deleteStatementsByClassName;
    NSMutableDictionary *_deletedObjectProvenanceIDsByOriginalProvenanceID;
    NSMutableDictionary *_localSourceIDsByOriginalSourceID;
    NSMutableSet *_deletedObjectTypeSet;
    _Bool _insertDeletedObjects;
    _Bool _callWillDeleteFromDatabase;
    HDSQLiteDatabase *_database;
    CDUnknownBlockType _recursiveDeleteAuthorizationBlock;
    NSNumber *_lastInsertedDeletedObjectPersistentID;
    unsigned long long _deletedObjectCount;
}

@property(readonly, nonatomic) unsigned long long deletedObjectCount; // @synthesize deletedObjectCount=_deletedObjectCount;
@property(readonly, copy, nonatomic) NSSet *deletedObjectTypeSet; // @synthesize deletedObjectTypeSet=_deletedObjectTypeSet;
@property(readonly, nonatomic) NSNumber *lastInsertedDeletedObjectPersistentID; // @synthesize lastInsertedDeletedObjectPersistentID=_lastInsertedDeletedObjectPersistentID;
@property(nonatomic) _Bool callWillDeleteFromDatabase; // @synthesize callWillDeleteFromDatabase=_callWillDeleteFromDatabase;
@property(nonatomic) _Bool insertDeletedObjects; // @synthesize insertDeletedObjects=_insertDeletedObjects;
@property(copy, nonatomic) CDUnknownBlockType recursiveDeleteAuthorizationBlock; // @synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock;
@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)finish;
- (id)_localSourceIDForSourceID:(id)arg1 error:(id *)arg2;
- (id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObjectWithPersistentID:(long long)arg1 objectUUID:(id)arg2 entityClass:(Class)arg3 objectType:(id)arg4 provenanceIdentifier:(id)arg5 deletionDate:(id)arg6 error:(id *)arg7;
- (_Bool)_deleteAssociatedObjectsForPersistentID:(long long)arg1 entityClass:(Class)arg2 deletionDate:(id)arg3 error:(id *)arg4;
- (_Bool)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id *)arg3;
- (id)initWithProfile:(id)arg1 database:(id)arg2;

@end

