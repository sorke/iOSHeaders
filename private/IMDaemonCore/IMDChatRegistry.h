//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUConversationManagerDelegate.h"

@class IMDCKUtilities, IMDCNPersonAliasResolver, IMDChatStore, IMDMessageHistorySyncController, IMDMessageProcessingController, NSArray, NSCache, NSMutableDictionary, NSRecursiveLock, NSString, TUConversationManager;

@interface IMDChatRegistry : NSObject <TUConversationManagerDelegate>
{
    NSRecursiveLock *_chatsLock;
    NSMutableDictionary *_chats;
    _Bool _isLoading;
    _Bool _doneLoadingAfterMerge;
    NSCache *_allChatsByIDCache;
    NSMutableDictionary *_chatsByGroupID;
    _Bool _hasDumpedLogsForNoExisitingGroup;
    IMDCKUtilities *_ckUtilities;
    IMDChatStore *_chatStore;
    IMDMessageProcessingController *_messageProcessingController;
    IMDMessageHistorySyncController *_messageHistorySyncController;
    TUConversationManager *_conversationManager;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) IMDMessageHistorySyncController *messageHistorySyncController; // @synthesize messageHistorySyncController=_messageHistorySyncController;
@property(readonly, nonatomic) IMDMessageProcessingController *messageProcessingController; // @synthesize messageProcessingController=_messageProcessingController;
@property(nonatomic) _Bool hasDumpedLogsForNoExisitingGroup; // @synthesize hasDumpedLogsForNoExisitingGroup=_hasDumpedLogsForNoExisitingGroup;
@property(retain, nonatomic) IMDChatStore *chatStore; // @synthesize chatStore=_chatStore;
@property(retain, nonatomic) IMDCKUtilities *ckUtilities; // @synthesize ckUtilities=_ckUtilities;
- (id)_existingiMessageChatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;
- (_Bool)isBeingSetup;
- (void)clearPendingDeleteTable;
- (id)copyRecordIDsAndGUIDsPendingCloudKitDelete;
- (void)processMessageUsingCKRecord:(id)arg1 updatedLastMessageCount:(int)arg2;
- (void)processMessageUsingCKRecord:(id)arg1;
- (id)_lookupChatUsingID:(id)arg1;
- (id)messagesToUploadToCloudKitWithLimit:(unsigned long long)arg1;
- (void)__removeChatFromGroupIDChatIndex:(id)arg1;
- (void)__addChatToGroupIDChatIndex:(id)arg1;
- (void)_updateSyncStatisticsForMessage:(id)arg1 incrementTotalCount:(unsigned long long)arg2;
- (void)_updateSyncStatisticsForChat:(id)arg1 incrementTotalCount:(unsigned long long)arg2;
- (_Bool)_shouldUpdateSyncStatsForMessage:(id)arg1 originalSyncState:(long long)arg2;
- (_Bool)_shouldUpdateSyncStatsForChat:(id)arg1 originalSyncState:(long long)arg2;
- (id)_statsCollector;
- (void)resetChatSyncStateForRecord:(id)arg1;
- (void)markDefferredChatsAsNeedingSync;
- (void)markChatAsDeferredForSyncingUsingCKRecord:(id)arg1;
- (void)updateChatUsingCKRecord:(id)arg1;
- (void)_markForksAsSyncedForChat:(id)arg1;
- (_Bool)_isUsingStingRay;
- (_Bool)_ensureNoExistingGroupForCKRecord:(id)arg1;
- (id)_existingChatForCKRecord:(id)arg1;
- (id)_existingChatWithOriginalGroupID:(id)arg1 onService:(id)arg2;
- (void)_insertChatUsingCKRecord:(id)arg1;
- (void)updateChatWithGUID:(id)arg1 serverChangeToken:(id)arg2 recordID:(id)arg3;
- (id)chatsToUploadToCloudKitWithLimit:(unsigned long long)arg1 isUsingStingRay:(_Bool)arg2;
- (id)personCentricGroupedChatsArrayWithMaximumNumberOfChats:(long long)arg1;
- (id)chatIdToLastMessageMapOfOldChats;
- (id)sortPersonCentricChatGroups:(id)arg1;
- (id)truncateSortedChatsGroupedByPersonCentricID:(id)arg1 toMaximumNumberOfChats:(long long)arg2;
- (id)groupChatsBasedOnIdentity;
- (void)startHandleIDPopulation;
- (void)_populateCNRecordIDForHandles:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_aliasToHandlesMap:(id)arg1;
- (id)_allHandles;
@property(readonly, nonatomic) IMDCNPersonAliasResolver *cnaliasResolver;
- (_Bool)repairDuplicateChatsIfNeeded;
- (_Bool)_mergeDuplicateGroupsIfNeeded;
- (struct NSArray *)_createGroupChatsArray;
- (id)_findLosingChatGUIDsInArrayOfChats:(struct NSArray *)arg1 withWinner:(id)arg2;
- (id)_findChatWinnerInDuplicateChatArray:(struct NSArray *)arg1;
- (struct NSArray *)findDuplicateChats:(struct NSArray *)arg1;
- (_Bool)_chat:(id)arg1 isDuplicateOfChat:(id)arg2;
- (_Bool)_updateDuplicateUnnamedGroupsWithNewGroupIDIfNeeded;
- (struct NSArray *)findDuplicateUnnamedGroups:(struct NSArray *)arg1;
- (void)_makeAllAttachmentsClassC;
- (void)systemDidUnlock;
- (void)systemDidLeaveFirstDataProtectionLock;
- (_Bool)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (_Bool)saveChats;
- (_Bool)_saveChats;
- (_Bool)loadChatsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_forceReloadChats:(_Bool)arg1;
- (id)_chatInfoForSaving;
- (id)_chatInfoInRange:(struct _NSRange)arg1;
- (id)_chatInfoForNumberOfChats:(long long)arg1;
- (id)_allChatInfo;
- (id)_chatInfoForConnection;
- (void)removeMessage:(id)arg1 fromChat:(id)arg2;
- (void)addMessage:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(_Bool)arg3;
- (void)addMessage:(id)arg1 toChat:(id)arg2;
- (void)removeItem:(id)arg1 fromChat:(id)arg2;
- (void)addItem:(id)arg1 toChat:(id)arg2;
- (void)removeChat:(id)arg1;
- (void)addChat:(id)arg1 firstLoad:(_Bool)arg2;
- (void)addChat:(id)arg1;
- (void)updateGroupIDForChat:(id)arg1 newGroupID:(id)arg2;
- (void)updateStateForChat:(id)arg1 forcePost:(_Bool)arg2;
- (void)updateStateForChat:(id)arg1 forcePost:(_Bool)arg2 shouldRebuildFailedMessageDate:(_Bool)arg3;
- (void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(_Bool)arg3;
- (void)updateStateForChat:(id)arg1 hintMessage:(id)arg2;
- (void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(_Bool)arg4 hintMessage:(id)arg5 shouldRebuildFailedMessageDate:(_Bool)arg6;
- (void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(_Bool)arg4 hintMessage:(id)arg5;
- (_Bool)updateUnreadCountForChat:(id)arg1;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 historyQuery:(_Bool)arg3;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2;
- (id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)existingChatForRoom:(id)arg1 account:(id)arg2;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatForID:(id)arg1 account:(id)arg2;
- (id)existingChatWithEngramID:(id)arg1;
- (id)existingChatWithIdentifier:(id)arg1 account:(id)arg2;
- (id)existingChatsWithGroupID:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
- (id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7 lastAddressedHandle:(id)arg8;
- (id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 lastAddressedHandle:(id)arg5;
@property(readonly, nonatomic) NSArray *chats;
- (void)dealloc;
- (id)init;
- (id)_messageStore;
- (_Bool)_shouldAddNewItemForConversation:(id)arg1;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (id)_conversationItemForChat:(id)arg1 conversation:(id)arg2;
- (id)_initiatorForConversation:(id)arg1 chat:(id)arg2;
- (id)_chatForTUGroupID:(id)arg1;
- (void)_addTUConversationToMessageStore:(id)arg1 shouldBroadcast:(_Bool)arg2;
- (void)_insertCurrentActiveTUConversationsIfNeeded;
- (id)_activeTUConversations;
- (void)setUpInitialConversationManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

