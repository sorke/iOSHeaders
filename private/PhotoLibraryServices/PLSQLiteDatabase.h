//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLSQLiteDatabase : NSObject
{
    struct sqlite3 *_database;
}

+ (struct sqlite3 *)_openSQLiteDatabaseAtPath:(const char *)arg1;
+ (id)openDatabaseAtPath:(id)arg1;
- (_Bool)_execute:(id)arg1;
- (struct sqlite3_stmt *)_prepareStatement:(id)arg1;
- (_Bool)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(CDUnknownBlockType)arg2;
- (_Bool)prepareAndEvaluateStatement:(id)arg1;
- (_Bool)rollbackTransaction;
- (_Bool)commitTransaction;
- (_Bool)beginExclusiveTransaction;
- (_Bool)beginDeferredTransaction;
- (_Bool)close;
- (id)initWithOpenedSQLite3Database:(struct sqlite3 *)arg1;

@end

