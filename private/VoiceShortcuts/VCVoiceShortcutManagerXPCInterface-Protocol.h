//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, VCVoiceShortcut, WFLWorkflow;

@protocol VCVoiceShortcutManagerXPCInterface <NSObject>
- (void)describeSyncStateIncludingDeleted:(_Bool)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2 inDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)setShortcutSuggestions:(NSArray *)arg1 forAppWithBundleIdentifier:(NSString *)arg2;
- (void)requestSyncForServiceClassName:(NSString *)arg1 forceReset:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)validateVoiceShortcutPhrases:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)deleteVoiceShortcutWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)updateVoiceShortcutWithIdentifier:(NSString *)arg1 phrase:(NSString *)arg2 workflow:(WFLWorkflow *)arg3 completion:(void (^)(VCVoiceShortcut *, NSError *))arg4;
- (void)addVoiceShortcut:(VCVoiceShortcut *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getVoiceShortcutsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)getVoiceShortcutWithPhrase:(NSString *)arg1 completion:(void (^)(VCVoiceShortcut *, NSError *))arg2;
- (void)getVoiceShortcutWithIdentifier:(NSString *)arg1 completion:(void (^)(VCVoiceShortcut *, NSError *))arg2;
- (void)getNumberOfVoiceShortcutsWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
@end

