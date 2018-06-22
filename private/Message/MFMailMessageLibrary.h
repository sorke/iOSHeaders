//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFMessageLibrary.h>

#import "MFContentProtectionObserver.h"
#import "MFLibrarySearchableIndexDataSource.h"
#import "MFSQLiteConnectionPoolDelegate.h"

@class MFFileCompressionQueue, MFLibrarySearchableIndex, MFMailMessageLibraryMigrator, MFSQLiteConnectionPool, MFSearchableIndexBudgetConfiguration, MFSearchableIndexScheduler, MFWeakObjectCache, MFWeakSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, _MFMailMessageLibraryStatistics;

@interface MFMailMessageLibrary : MFMessageLibrary <MFLibrarySearchableIndexDataSource, MFSQLiteConnectionPoolDelegate, MFContentProtectionObserver>
{
    MFSQLiteConnectionPool *_connectionPool;
    MFWeakObjectCache *_libraryMessageCache;
    struct __CFDictionary *_mailboxCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_statsQueue;
    id <MFMailboxPathProvider> _mailboxPathProvider;
    MFMailMessageLibraryMigrator *_migrator;
    NSString *_threadLocalHandleKey;
    NSString *_threadLocalJournalKey;
    NSString *_activeAccountClause;
    NSString *_nonLocalAccountClause;
    int _protectedDataAvailability;
    NSObject<OS_dispatch_queue> *_keyBagQueue;
    NSMutableSet *_messagesToThreadAtUnlock;
    MFWeakSet *_middleware;
    _MFMailMessageLibraryStatistics *_lastStats;
    MFFileCompressionQueue *_compressionQueue;
    _Bool _migrationHasRun;
    id <MFMailMessageLibraryDelegate> _delegate;
    MFSearchableIndexScheduler *_searchableIndexScheduler;
    id _migrationLock;
    MFSearchableIndexBudgetConfiguration *_searchableIndexBudgetConfiguration;
    MFLibrarySearchableIndex *_searchableIndex;
}

+ (void)_removeLibrary:(_Bool)arg1 atPath:(id)arg2;
+ (void)removeLibraryOnNextLaunch;
+ (void)removeLibraryAtPath:(id)arg1;
+ (id)defaultPath;
+ (void)setDefaultInstance:(id)arg1;
+ (id)defaultInstance;
@property(retain, nonatomic) MFLibrarySearchableIndex *searchableIndex; // @synthesize searchableIndex=_searchableIndex;
@property(retain, nonatomic) MFSearchableIndexBudgetConfiguration *searchableIndexBudgetConfiguration; // @synthesize searchableIndexBudgetConfiguration=_searchableIndexBudgetConfiguration;
@property(readonly, nonatomic) id migrationLock; // @synthesize migrationLock=_migrationLock;
@property(nonatomic) _Bool migrationHasRun; // @synthesize migrationHasRun=_migrationHasRun;
@property(retain, nonatomic) MFSearchableIndexScheduler *searchableIndexScheduler; // @synthesize searchableIndexScheduler=_searchableIndexScheduler;
@property(nonatomic) id <MFMailMessageLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (id)firstMessageMatchingCriterion:(id)arg1;
- (id)_messageForStatement:(struct sqlite3_stmt *)arg1 options:(unsigned int)arg2 timestamp:(unsigned long long)arg3 isProtectedDataAvailable:(_Bool)arg4;
- (id)_libraryMessageWithLibraryID:(unsigned int)arg1 wasCached:(_Bool *)arg2;
- (id)_libraryMessageCache;
- (id)allMailboxURLStrings;
- (void)setMailboxPathProvider:(id)arg1;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)_resetTransactionIndexForAccount:(id)arg1 mailboxID:(unsigned int)arg2;
- (void)removeSearchableItemsWithLibraryIDs:(id)arg1;
- (void)removeSearchableItemsForAccount:(id)arg1 mailboxID:(unsigned int)arg2;
- (void)removeSearchableItemsForMessages:(id)arg1;
- (void)removeSearchableItemsForMailbox:(id)arg1;
- (void)removeSearchableItemsForAccount:(id)arg1;
- (void)addSpotlightTombstones:(id)arg1 type:(long long)arg2;
- (id)verificationDataSamplesForSearchableIndex:(id)arg1;
- (id)_verificationDataSamplesForSearchableIndex:(id)arg1 nonLocalAccountClause:(id)arg2;
- (id)_emailAddressesForVerificationFromLibraryString:(id)arg1;
- (id)updatesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2;
- (id)_searchableItemIndexesForDb:(struct sqlite3 *)arg1 indexingType:(long long)arg2 nonLocalAccountsClause:(id)arg3 protectedDataAvailable:(_Bool)arg4 whereClause:(id)arg5 limit:(unsigned long long)arg6;
- (struct sqlite3_stmt *)_prepareBatchStatement:(struct sqlite3 *)arg1 pattern:(id)arg2 libraryIDs:(unsigned long long *)arg3 batchSize:(unsigned long long)arg4;
- (void)_assignTransaction:(long long)arg1 messageIndexingState:(long long)arg2 forLibraryIDs:(id)arg3 missingLibraryIDIndexSet:(id *)arg4 database:(struct sqlite3 *)arg5;
- (void)_assignTransaction:(long long)arg1 messageIndexingState:(long long)arg2 forLibraryIDIndexSet:(id)arg3 missingLibraryIDIndexSet:(id *)arg4 database:(struct sqlite3 *)arg5;
- (struct sqlite3_stmt *)_prepareBatchStatement:(struct sqlite3 *)arg1 pattern:(id)arg2 objects:(id *)arg3 count:(unsigned long long)arg4;
- (void)_purgeSpotlightTombstonesBeforeTransaction:(long long)arg1 database:(struct sqlite3 *)arg2;
- (void)_assignTransaction:(long long)arg1 forSpotlightTombstones:(id)arg2 type:(long long)arg3 database:(struct sqlite3 *)arg4;
- (id)_stringsForIndexSet:(id)arg1;
- (id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3;
- (void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (void)pruneConversationTables:(double)arg1;
- (void)renameOrRemoveDatabaseIfNeeded;
- (void)renameOrRemoveDatabase;
- (void)_handleBusyError;
- (void)_handleProtectedDataIOError;
- (void)_handleIOError;
- (void)_handleDetachedDatabaseIOError;
- (void)_handleInvalidDatabaseIOError;
- (void)_handleFullDatabase;
- (void)_handleFailedMigration;
- (void)_handleProtectedDataInconsistencies;
- (void)_handleJournalMergeFailure;
- (void)_handleJournalWriteFailure;
- (void)_handleCorruptDatabase;
- (void)_handleSQLiteErrorCode:(int)arg1 db:(struct sqlite3 *)arg2;
- (int)handleSqliteError:(struct sqlite3 *)arg1 format:(id)arg2;
- (_Bool)appendToJournal:(const char *)arg1 mergeUpdateStatement:(const char *)arg2;
- (id)_activeJournal;
- (void)_setActiveJournal:(id)arg1;
- (struct sqlite3_stmt *)preparedStatement:(struct sqlite3 *)arg1 pattern:(id)arg2;
- (id)_activeConnectionWithDB:(struct sqlite3 *)arg1;
- (id)_activeConnection;
- (id)_activeConnectionWrapper;
- (id)_setActiveConnection:(id)arg1 forWriting:(_Bool)arg2;
- (void)withReaderDB:(CDUnknownBlockType)arg1;
- (void)unlockDB:(struct sqlite3 *)arg1;
- (struct sqlite3 *)getReaderDB;
- (struct sqlite3 *)getWriterDB;
- (id)_connectionForWriting:(_Bool)arg1;
- (void)closeDatabaseConnections;
- (int)_performTransaction:(CDUnknownBlockType)arg1 forWriting:(_Bool)arg2;
- (int)performReadTransaction:(CDUnknownBlockType)arg1;
- (int)performWriteTransaction:(CDUnknownBlockType)arg1;
- (int)rollbackTransaction:(struct sqlite3 *)arg1;
- (int)commitTransaction:(struct sqlite3 *)arg1;
- (int)beginTransaction:(struct sqlite3 *)arg1 withType:(long long)arg2 forMailbox:(id)arg3;
- (int)beginTransaction:(struct sqlite3 *)arg1 withType:(long long)arg2;
- (void)scheduleIncrementalVacuum;
- (void)performIncrementalVacuumForSchema:(id)arg1;
- (_Bool)migrate;
- (id)_newConnection;
- (id)newConnectionForConnectionPool:(id)arg1;
- (void)_addMessageToThreadAtUnlock:(unsigned int)arg1;
- (void)_reconcileJournalIsLaunch:(_Bool)arg1;
- (void)reconcileJournalOnStartup;
- (_Bool)_canAccessProtectedData;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (_Bool)isProtectedDataAvailable:(struct sqlite3 *)arg1;
- (long long)_reconcileJournal;
- (void)_schedulePeriodicStatisticsLogging;
- (void)_logStatistics;
- (_Bool)_shouldLogDatabaseStats;
- (unsigned long long)_deleteJournaledEntries;
- (void)_collectStatistics_nts;
- (_Bool)checkDatabaseConsistency;
- (_Bool)cleanupProtectedTables;
- (id)_indexSetOfMessagesDeleted;
@property(readonly, nonatomic) unsigned long long protectedDataAvailability;
- (void)_setProtectedDataAvailabilityState:(unsigned long long)arg1;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)allUIDsInMailbox:(id)arg1;
- (id)deletedUIDsInMailbox:(id)arg1;
- (id)UIDsToDeleteInMailbox:(id)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (void)deleteOfflineCacheDataForAccount:(long long)arg1;
- (void)consumeOfflineCacheReplayDataForAccount:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(long long)arg2;
- (id)offlineCacheOperationsForAccount:(long long)arg1 lastTemporaryID:(unsigned int *)arg2;
- (void)markOfflineCacheOperationAsComplete:(id)arg1;
- (void)appendOfflineCacheOperation:(id)arg1 forAccount:(long long)arg2 lastTemporaryID:(unsigned int)arg3;
- (id)_nonLocalAccountsClause;
- (id)_activeAccountsClause;
- (void)rebuildActiveAccountsClauseWithAccounts:(id)arg1;
- (id)_mailboxesClauseForAccounts:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (void)invalidateAccount:(id)arg1;
- (long long)libraryIDForAccount:(id)arg1;
- (long long)createLibraryIDForAccount:(id)arg1;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(_Bool *)arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 success:(_Bool *)arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (void)iterateMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(unsigned int)arg3 withMonitor:(id)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange)arg5;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange)arg5 success:(_Bool *)arg6;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(_Bool)arg5;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(_Bool)arg5 range:(struct _NSRange)arg6;
- (id)equalToMailboxIDsFromCriterion:(id)arg1;
- (_Bool)isMessageContentsLocallyAvailable:(id)arg1;
- (_Bool)hasCompleteDataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1 isComplete:(_Bool *)arg2;
- (void)deleteDataForMessage:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)headerDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3;
- (id)headerDataAtPath:(id)arg1;
- (id)bodyDataAtPath:(id)arg1 headerData:(id *)arg2;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadData:(id)arg1 forMessage:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)metadataForMessage:(id)arg1 ofClass:(Class)arg2 key:(id)arg3;
- (void)updateMessage:(id)arg1 withMetadata:(CDUnknownBlockType)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (void)_setMessageDataString:(id)arg1 forKey:(id)arg2 forMessage:(id)arg3;
- (_Bool)_setMessageData:(id)arg1 libraryID:(unsigned int)arg2 part:(id)arg3 partial:(_Bool)arg4 complete:(_Bool)arg5;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(_Bool)arg3;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(_Bool)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(_Bool)arg3;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (long long)deleteAttachmentsForMessage:(id)arg1 inMailboxFileURL:(id)arg2;
- (id)attachmentsDirectoryURLForMessage:(id)arg1 inMailboxFileURL:(id)arg2;
- (id)attachmentsDirectoryURLForMessage:(id)arg1;
- (id)fileAttributesForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 type:(int)arg2;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(_Bool)arg2 andNotify:(_Bool)arg3;
- (void)vacuumDataForObsoleteAccountURLString:(id)arg1;
- (void)deleteMailboxes:(id)arg1 account:(id)arg2;
- (_Bool)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)compactMailbox:(id)arg1;
- (void)compactMessages:(id)arg1 permanently:(_Bool)arg2;
- (void)_notifyDidCompact:(_Bool)arg1 messages:(id)arg2 mailboxes:(id)arg3;
- (void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2;
- (id)storedIntegerPropertyWithName:(id)arg1;
- (id)messageIdsForConversationId:(long long)arg1 limit:(unsigned long long)arg2;
- (long long)conversationIdForMessageIds:(id)arg1;
- (void)setConversationInfo:(long long)arg1 syncKey:(id)arg2 flags:(unsigned long long)arg3;
- (void)setFlags:(unsigned long long)arg1 forConversationId:(long long)arg2;
- (unsigned long long)flagsForConversationId:(long long)arg1;
- (id)syncedConversations;
- (_Bool)_canSelectMessagesWithOptions:(unsigned int)arg1 db:(struct sqlite3 *)arg2;
- (_Bool)shouldCancel;
- (id)accountForMessage:(id)arg1;
- (id)remoteStoreForMessage:(id)arg1;
- (id)mailboxUidForMessage:(id)arg1;
- (id)mailboxURLForMessage:(id)arg1;
- (id)pathForMailboxURL:(id)arg1;
- (unsigned int)mailboxIDForURLString:(id)arg1;
- (id)mailboxURLsForIDs:(id)arg1;
- (id)urlForMailboxID:(unsigned int)arg1;
- (id)stringForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1 monitor:(id)arg2;
- (long long)loadMoreMessagesForThreadContainingMessage:(id)arg1 hasNoMoreMessages:(_Bool *)arg2;
- (long long)countOfMessagesMissingFromThreadContainingMessage:(id)arg1;
- (id)_getReferencesForHashesWithOwners:(struct __CFDictionary *)arg1;
- (id)missingReferencesForConversationContainingMessage:(id)arg1;
- (struct __CFDictionary *)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg1;
- (id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(unsigned int)arg1 messageIDHash:(long long)arg2;
- (long long)mailboxLocationOfMessageID:(unsigned int)arg1 usingDatabase:(struct sqlite3 *)arg2;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(struct _NSRange *)arg4 fromMailbox:(id)arg5;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange)arg1 fromMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned int)arg2;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (_Bool)canProvideMinimumRemoteID;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)oldestMessageInMailbox:(id)arg1;
- (void)setMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)mostRecentStatusCountForMailbox:(id)arg1;
- (void)_setOrAdjust:(_Bool)arg1 lastSyncAndMostRecentStatusCountWithValue:(long long)arg2 forMailbox:(id)arg3;
- (void)adjustLastSyncStatusCountBy:(long long)arg1 forMailbox:(id)arg2;
- (void)setLastSyncAndMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (long long)statusCountDeltaForMailbox:(id)arg1;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)indexedCountForMailbox:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(_Bool)arg2 includeThreadSearchResults:(_Bool)arg3;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(_Bool)arg2 includeThreadSearchResults:(_Bool)arg3;
- (unsigned int)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(_Bool)arg2 includeThreadSearchResults:(_Bool)arg3;
- (unsigned int)attachmentCountForMailboxes:(id)arg1;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (unsigned int)includesMeCountForMailbox:(id)arg1;
- (unsigned int)attachmentCountForMailbox:(id)arg1;
- (unsigned int)flaggedCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (id)_queryForMailboxesIDsFromMailboxes:(id)arg1;
- (unsigned int)_includesMeCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)_attachmentCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)_flaggedCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)_computeUnreadCountForMailboxes:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (void)recomputeUnreadCountForMailboxWithURL:(id)arg1;
- (int)_integerForQuery:(id)arg1 withTextArgument:(id)arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)orderedBatchOfMessagesEndingAtRowId:(unsigned int)arg1 limit:(unsigned int)arg2 success:(_Bool *)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange)arg2;
- (struct __CFDictionary *)copySendersByLibraryIDForConversation:(long long)arg1 mailbox:(id)arg2 limit:(long long)arg3;
- (unsigned int)_libraryIDForOldestKnownMessageInMailbox:(id)arg1;
- (id)oldestKnownMessageInMailbox:(id)arg1;
- (long long)oldestKnownConversationInMailbox:(id)arg1;
- (id)countMessagesMatchingCriterion:(id)arg1 groupBy:(unsigned long long)arg2;
- (unsigned long long)countMessagesMatchingCriterion:(id)arg1;
- (unsigned int)countOfRelatedMessagesMatchingCriterion:(id)arg1 forConversationsContainingMessagesMatchingCriterion:(id)arg2 forMailboxCriterion:(id)arg3;
- (id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailbox:(id)arg2;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (id)copyMessageInfosForMailbox:(id)arg1;
- (id)dateOfNewestNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (id)_firstDateForQuery:(id)arg1 inMailbox:(id)arg2;
- (id)messagesNeedingSyncConfirmationForMailbox:(id)arg1;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (void)sendMessagesMatchingQuery:(const char *)arg1 db:(struct sqlite3 *)arg2 to:(id)arg3 options:(unsigned int)arg4;
- (void)sendMessagesForStatement:(struct sqlite3_stmt *)arg1 db:(struct sqlite3 *)arg2 to:(id)arg3 options:(unsigned int)arg4 timestamp:(unsigned long long)arg5;
- (void)iterateStatement:(struct sqlite3_stmt *)arg1 db:(struct sqlite3 *)arg2 withProgressMonitor:(id)arg3 andRowHandler:(CDUnknownFunctionPointerType)arg4 context:(void *)arg5;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(_Bool)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(_Bool)arg9 addPOPUIDs:(_Bool)arg10 dataSectionsByMessage:(id)arg11;
- (void)_tellMiddleWareDidIndexMessages:(id)arg1;
- (void)_tellMiddlewareDidAddMessages:(id)arg1 newMessagesByOldMessage:(id)arg2;
- (id)_tellMiddlewareWillAddMessage:(id)arg1;
- (void)removeMiddleware:(id)arg1;
- (void)addMiddleware:(id)arg1;
- (long long)addReferenceForContext:(id)arg1 usingDatabase:(struct sqlite3 *)arg2 mergeHandler:(CDUnknownBlockType)arg3;
- (_Bool)_insertThreadReferences:(id)arg1 toMessageWithLibraryID:(unsigned int)arg2 usingDatabase:(struct sqlite3 *)arg3;
- (id)_addThreadingInfoWithContext:(id)arg1 usingDatabase:(struct sqlite3 *)arg2;
- (id)referencesFromHeaders:(id)arg1;
- (void)notifyConversation:(long long)arg1 hasMergedIntoConversation:(long long)arg2;
- (void)notifyNewDataAvailableForMessages:(id)arg1;
- (_Bool)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2 protectionClass:(int)arg3;
- (void)setMessage:(id)arg1 isPartial:(_Bool)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)updateFlagsForMessages:(id)arg1 changes:(id)arg2 transformer:(CDUnknownBlockType)arg3;
- (void)updateFlagsForMessagesInPlace:(id)arg1 success:(_Bool *)arg2;
- (void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2;
@property(readonly, nonatomic) unsigned long long pendingIndexItemsCount;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (void)invalidateAndWait;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

