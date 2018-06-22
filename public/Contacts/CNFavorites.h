//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore, NSArray, NSMutableArray, NSMutableDictionary;

@interface CNFavorites : NSObject
{
    NSMutableArray *_entries;
    _Bool _dirty;
    _Bool _needsReload;
    CNContactStore *_contactStore;
    NSMutableDictionary *_uidToEntry;
    unsigned long long _postCount;
    id <CNFavoritesLogger> _logger;
}

+ (id)favoritesPath;
+ (void)flushSingleton;
+ (id)sharedInstance;
@property(readonly, nonatomic) id <CNFavoritesLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) unsigned long long postCount; // @synthesize postCount=_postCount;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) NSMutableDictionary *uidToEntry; // @synthesize uidToEntry=_uidToEntry;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (void)recacheIdentitiesSoon;
- (id)_uniqueRematchedEntries:(id)arg1;
- (void)rematchEntriesWithContacts;
- (void)saveImmediately;
- (void)save;
- (_Bool)writeFavoritesToFile:(id)arg1;
- (void)removeAllEntries;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)addEntry:(id)arg1;
- (void)_entriesChangedExternally;
- (void)_postChangeNotification;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (void)_addEntryToMap:(id)arg1;
- (_Bool)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3;
- (_Bool)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)entryWithIdentifier:(id)arg1 forContact:(id)arg2;
- (id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;
- (_Bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (id)entriesForContact:(id)arg1;
@property(readonly, getter=isFull) _Bool full;
@property(readonly, nonatomic) NSArray *entries;
- (void)loadEntriesIfNecessary;
- (id)_entryDictionaries;
- (_Bool)shouldSimulateCrashReportForError:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithContactStore:(id)arg1 logger:(id)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1;

@end

