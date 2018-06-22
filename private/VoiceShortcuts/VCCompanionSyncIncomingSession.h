//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceShortcuts/VCCompanionSyncSession.h>

@class NSDictionary, NSString;

@interface VCCompanionSyncIncomingSession : VCCompanionSyncSession
{
    NSDictionary *_syncDataHandlers;
    NSString *_syncServiceIdentifier;
}

@property(readonly, copy, nonatomic) NSString *syncServiceIdentifier; // @synthesize syncServiceIdentifier=_syncServiceIdentifier;
@property(readonly, nonatomic) NSDictionary *syncDataHandlers; // @synthesize syncDataHandlers=_syncDataHandlers;
- (void).cxx_destruct;
- (void)handleSpecialCasesInPartialErrors:(id)arg1 fromChangeSet:(struct NSOrderedSet *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetDataStoreForSyncSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (long long)sessionType;
- (id)initWithSYSession:(id)arg1 syncServiceIdentifier:(id)arg2 syncDataHandlers:(id)arg3;

@end

