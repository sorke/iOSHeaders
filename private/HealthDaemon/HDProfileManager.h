//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDDaemon, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface HDProfileManager : NSObject
{
    HDDaemon *_daemon;
    NSMutableDictionary *_profiles;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

- (void).cxx_destruct;
- (void)reloadSecondaryProfiles;
- (id)newProfileOfType:(long long)arg1 daemon:(id)arg2 directoryPath:(id)arg3;
- (id)_profileIdentifierForDirectoryName:(id)arg1 error:(id *)arg2;
- (id)_directoryNameForProfileIdentifier:(id)arg1;
- (id)_directoryURLForProfileIdentifier:(id)arg1;
- (void)_resourceQueue_invalidateAndWait;
- (id)_resourceQueue_profileForIdentifier:(id)arg1;
- (_Bool)_resourceQueue_deleteProfile:(id)arg1 error:(id *)arg2;
- (id)_resourceQueue_createProfileOfType:(long long)arg1 name:(id)arg2 error:(id *)arg3;
- (void)_resourceQueue_loadSecondaryProfiles;
- (void)_resourceQueue_setProfile:(id)arg1 forIdentifier:(id)arg2;
- (void)invalidateAndWait;
- (id)allProfileIdentifiers;
- (void)deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createProfileOfType:(long long)arg1 displayName:(id)arg2 error:(id *)arg3;
- (void)setProfile:(id)arg1 forIdentifier:(id)arg2;
- (id)profileForIdentifier:(id)arg1;
- (id)initWithDaemon:(id)arg1;

@end

