//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOCountryConfiguration, GEOResourceManifestManager, NSDictionary, NSLock, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GEODBWriter : NSObject
{
    NSString *_path;
    NSDictionary *_pragmaOverrides;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_versionQuery;
    struct sqlite3_stmt *_versionInsert;
    struct sqlite3_stmt *_editionQuery;
    struct sqlite3_stmt *_editionDelete;
    struct sqlite3_stmt *_editionInvalidate;
    struct sqlite3_stmt *_editionUpdate;
    struct sqlite3_stmt *_editionInvalidateAll;
    struct sqlite3_stmt *_tileInsert;
    struct sqlite3_stmt *_tileDelete;
    struct sqlite3_stmt *_tileSize;
    struct sqlite3_stmt *_sizeQuery;
    long long _lastRowID;
    unsigned long long _databaseSize;
    unsigned long long _maxDatabaseSize;
    _Bool _closed;
    _Bool _defunct;
    NSMutableArray *_writeList;
    NSMutableSet *_uncommitedWriteSet;
    unsigned long long _pendingWriteBytes;
    NSLock *_writeListLock;
    NSObject<OS_dispatch_queue> *_writeQueue;
    void *_editionMap;
    long long _evictionRowsThreshold;
    CDStruct_e4886f83 *_expirationRecords;
    unsigned long long _expirationRecordCount;
    _Bool _preloading;
    double _lastCheckedGeneralExpiration;
    unsigned long long _tileCacheMinimumWriteCount;
    unsigned long long _tileCacheMinimumWriteBytes;
    unsigned long long _tileCacheMaximumWriteCount;
    unsigned long long _tileCacheMaximumWriteBytes;
    NSString *_devicePostureCountry;
    NSString *_devicePostureRegion;
    _Bool _canCreateDebugTable;
    GEOResourceManifestManager *_manifestManager;
    GEOCountryConfiguration *_countryConfiguration;
}

@property(readonly, nonatomic) NSString *devicePostureRegion; // @synthesize devicePostureRegion=_devicePostureRegion;
@property(readonly, nonatomic) NSString *devicePostureCountry; // @synthesize devicePostureCountry=_devicePostureCountry;
@property(nonatomic) unsigned long long maxDatabaseSize; // @synthesize maxDatabaseSize=_maxDatabaseSize;
@property(readonly, nonatomic) unsigned long long databaseSize; // @synthesize databaseSize=_databaseSize;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)setExpirationRecords:(CDStruct_e4886f83 *)arg1 count:(unsigned long long)arg2;
- (void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1;
- (void)deleteData:(const struct _GEOTileKey *)arg1;
- (void)_deleteKey:(struct _GEOTileKey)arg1;
- (void)pendingWritesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)pendingWriteForKey:(struct _GEOTileKey *)arg1;
- (void)addData:(id)arg1 forKey:(struct _GEOTileKey *)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6;
- (void)_performWrites:(_Bool)arg1;
- (void)_dropWritesOnFloor:(id)arg1;
- (void)_updateEdition:(unsigned int)arg1 forTileset:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(_Bool)arg4;
- (void)_writeEntry:(id)arg1;
- (_Bool)_tileSetExpires:(unsigned int)arg1;
- (void)_evict;
- (void)shrinkBySize:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)calculateFreeableSizeWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (unsigned long long)_dbFileSize;
- (void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(_Bool)arg2;
- (unsigned long long)_freeableDiskSpace;
- (void)_printDBStatus:(const char *)arg1;
@property _Bool closed;
- (void)waitForPendingWrites;
- (void)_openIfNecessary;
- (void)_openDBForceRecreate:(_Bool)arg1;
- (void)_openDBAndPurgeContents;
- (void)_updateVersionTableWithCountryAndRegion;
- (void)_assertDatabaseSize;
- (void)_updateSize;
- (void)_setCurrentDevicePostureToCountry:(id)arg1 region:(id)arg2;
- (_Bool)_readEditions;
- (void)_writeVersionForCountry:(id)arg1 region:(id)arg2;
- (void)_prepareStatements;
- (_Bool)prepareSingleStatement:(struct sqlite3_stmt **)arg1 forSql:(id)arg2;
- (void)_createTables;
- (void)_closeDB;
- (void)_finalizeStatements;
- (void)flushPendingWrites;
- (void)_countryChanged:(id)arg1;
- (void)_deviceLocked;
- (void)_localeChanged:(id)arg1;
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2 manifestManager:(id)arg3 countryConfiguration:(id)arg4;
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

