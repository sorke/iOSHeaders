//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSLock, NSString;

@interface HDDatabaseJournal : NSObject
{
    long long _type;
    NSString *_path;
    NSLock *_journalLock;
    NSFileHandle *_fileHandle;
}

@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSLock *journalLock; // @synthesize journalLock=_journalLock;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_unitTesting_journalFiles;
- (void)_unitTesting_closeCurrentJournalFile;
- (_Bool)_performPostJournalMergeWithVersion:(unsigned int)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (unsigned int)_processMonarchJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id *)arg8;
- (unsigned int)_processOkemoJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id *)arg8;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 transaction:(id)arg3 fileHandle:(id)arg4 mapping:(void *)arg5 length:(unsigned long long)arg6 error:(id *)arg7;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 transaction:(id)arg3 fileHandle:(id)arg4 fileSize:(unsigned long long *)arg5 error:(id *)arg6;
- (void)_mergeJournalEntries:(id)arg1 profile:(id)arg2;
- (_Bool)_loadJournalFromMapping:(void *)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id *)arg4 error:(id *)arg5;
- (_Bool)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id *)arg2 error:(id *)arg3;
- (id)_loadJournalEntry:(id)arg1;
- (id)_sortedListOfJournalFiles;
- (id)_nameOfNextJournalFile;
- (_Bool)_appendData:(id)arg1 error:(id *)arg2;
- (_Bool)_openNextJournalFileWithError:(id *)arg1;
- (void)_executeAtomically:(CDUnknownBlockType)arg1;
- (id)_mergeTransactionContextWithContext:(id)arg1;
- (_Bool)_processJournalFile:(id)arg1 profile:(id)arg2 accessibilityAssertion:(id)arg3;
- (_Bool)_processJournalFilesWithProfile:(id)arg1;
- (_Bool)mergeWithProfile:(id)arg1;
- (_Bool)performMergeTransactionWithProfile:(id)arg1 transactionContext:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;
- (_Bool)addJournalEntries:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1 path:(id)arg2;

@end

