//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EMFEmojiPreferenceActions.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions>
{
    NSMutableDictionary *_defaults;
    _Bool _isDefaultDirty;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_typingNames;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    NSMutableDictionary *_categoryIndexes;
    long long _currentSequence;
    NSObject<OS_dispatch_queue> *_differentialPrivacyQueue;
    unsigned long long _maximumRecentsCount;
}

+ (id)_cachedFlagCategoryEmoji:(CDUnknownBlockType)arg1;
+ (id)_recentStringsInCharacterSet:(id)arg1;
+ (id)_allRecentStrings;
+ (id)_recentEmojiStrings;
+ (id)_cacheDomain;
+ (id)defaultsDomain;
@property(nonatomic) unsigned long long maximumRecentsCount; // @synthesize maximumRecentsCount=_maximumRecentsCount;
- (void).cxx_destruct;
- (id)typingNameForEmoji:(id)arg1;
- (unsigned long long)previouslyUsedIndexInCategory:(id)arg1;
- (id)lastUsedVariantEmojiForEmoji:(id)arg1;
- (id)recentVariantEmojiForEmoji:(id)arg1;
- (_Bool)hasLastUsedVariantForEmoji:(id)arg1;
- (void)didDisplaySkinToneHelp;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (_Bool)isMalformationEmoji:(id)arg1;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didUseEmoji:(id)arg1;
- (double)scoreForEmojiString:(id)arg1;
- (double)scoreForSequence:(long long)arg1;
- (void)migrateInDidDisplaySkinToneHelp:(_Bool)arg1;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1;
- (void)migrateInPreviouslyUsedCategory:(id)arg1;
- (void)migrateInSkinTonePreferences:(id)arg1;
- (void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2 typingNames:(id)arg3;
- (void)_cleanUpOldFlagsCaches;
- (void)_checkForMalformationEmoji;
- (void)_checkForDingbatDuplicates;
- (void)migrateFromMajorOSVersion:(long long)arg1;
- (void)loadDefaultsIfNecessary;
- (void)resetEmojiDefaults;
- (void)writeEmojiDefaultsAndNotify:(_Bool)arg1;
- (void)writeEmojiDefaults;
- (void)_readPreferencesFromDefaults;
- (void)readEmojiDefaults;
@property(readonly, nonatomic) _Bool hasDisplayedSkinToneHelp;
@property(readonly, nonatomic) NSString *previouslyUsedCategory;
- (id)recentsInCharacterSet:(id)arg1;
@property(readonly, nonatomic) NSArray *allRecents;
@property(readonly, nonatomic) NSArray *recentEmojis;
- (id)init;
- (void)_setRecentStrings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

