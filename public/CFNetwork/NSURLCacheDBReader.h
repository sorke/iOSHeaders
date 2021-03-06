//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface NSURLCacheDBReader : NSObject
{
    struct sqlite3_stmt *_sqlSelectStmt;
    struct sqlite3_stmt *_sqlSelectTimeStmt;
    struct sqlite3 *_dbReadConnection;
    NSLock *_dbReadConnectionLock;
    long long _schemaVersion;
    NSLock *_timeRelativeLookupLock;
    NSMutableSet *recentTimeStampLookups;
    unsigned char _performTimeRelativeLookups;
    NSString *_dbPathDirectory;
    NSString *_dbPathFile;
    NSMutableSet *_recentTimeStampLookups;
    _Bool _isDBOpen;
}

@property(retain) NSString *dbPathFile; // @synthesize dbPathFile=_dbPathFile;
@property(retain) NSString *dbPathDirectory; // @synthesize dbPathDirectory=_dbPathDirectory;
@property unsigned char performTimeRelativeLookups; // @synthesize performTimeRelativeLookups=_performTimeRelativeLookups;
@property(retain) NSMutableSet *recentTimeStampLookups; // @synthesize recentTimeStampLookups=_recentTimeStampLookups;
@property _Bool isDBOpen; // @synthesize isDBOpen=_isDBOpen;
- (id)createCachedResponseDictForTransmissionWithKey:(id)arg1 objectVersion:(long long)arg2 storagePolicy:(int)arg3 responseObjectBytes:(char *)arg4 responseObjectBytesLength:(int)arg5 protoProps:(char *)arg6 protoPropsLength:(int)arg7 receiverDataBytes:(char *)arg8 receiverDataLength:(int)arg9 requestObjectBytes:(char *)arg10 requestObjectBytesLength:(int)arg11 userInfoBytes:(const char *)arg12 useInfoLength:(int)arg13 isDataOnFS:(_Bool)arg14 cacheDirPath:(id)arg15 cacheFileName:(id)arg16;
- (int)execSQLStatement:(const char *)arg1 onConnection:(struct sqlite3 *)arg2 toCompletionWithRetry:(long long)arg3 writeLockHeld:(_Bool)arg4;
- (int)stepSQLStatement:(struct sqlite3_stmt *)arg1 toCompletionWithRetry:(long long)arg2;
-     // Error parsing type: v32@0:8@16^{_CFURLCache={__CFRuntimeBase=QAQ}{shared_ptr<__CFURLCache>=^{__CFURLCache}^{__shared_weak_count}}}24, name: performTimeRelativeLookupWithInitialTime:caller:
-     // Error parsing type: ^{_CFCachedURLResponse={__CFRuntimeBase=QAQ}^{__CFCachedURLResponse}}48@0:8@16^@24^@32^{_CFURLCache={__CFRuntimeBase=QAQ}{shared_ptr<__CFURLCache>=^{__CFURLCache}^{__shared_weak_count}}}40, name: createCachedResponseForKey:cacheDataPath:cacheDataFile:caller:
- (_Bool)_finalizeDBSelectStatements;
- (_Bool)_finalizeAllDBStatements;
- (_Bool)_prepareDBSelectStatements;
- (_Bool)_prepareDBStatements;
- (void)_closeDBReadConnections;
- (void)_closeDB;
- (_Bool)_openDBReadConnections;
- (_Bool)openAndPrepareReadCacheDB;
- (void)dealloc;
- (void)cleanupAndShutdown_Lock;
- (id)initWithDBPath:(id)arg1 maxSize:(long long)arg2;
- (id)init;

@end

