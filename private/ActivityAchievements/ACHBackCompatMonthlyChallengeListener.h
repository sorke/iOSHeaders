//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDatabaseProtectedDataObserver.h"
#import "HDHealthDaemonReadyObserver.h"

@class ACHTemplateStore, HDProfile, NSDictionary, NSString;

@interface ACHBackCompatMonthlyChallengeListener : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;
    ACHTemplateStore *_templateStore;
    CDUnknownBlockType _readTemplatesBlock;
    NSDictionary *_injectedKeyValuePairs;
}

@property(retain, nonatomic) NSDictionary *injectedKeyValuePairs; // @synthesize injectedKeyValuePairs=_injectedKeyValuePairs;
@property(copy, nonatomic) CDUnknownBlockType readTemplatesBlock; // @synthesize readTemplatesBlock=_readTemplatesBlock;
@property(nonatomic) __weak ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)_definitionsFromKeyValuePairs:(id)arg1;
- (_Bool)_readAndSaveBackCompatDefinitions;
- (void)_protectedNanoUserDefaultsDidSyncWithNotification:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1 templateStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

