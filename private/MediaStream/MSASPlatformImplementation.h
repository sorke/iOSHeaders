//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSASPlatform.h"

@class ACAccountStore, NSString;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>
{
    ACAccountStore *_accountStore;
}

@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (_Bool)shouldEnableNewFeatures;
- (int)MMCSConcurrentConnectionsCount;
- (id)personIDsEnabledForAlbumSharing;
- (_Bool)personIDEnabledForAlbumSharing:(id)arg1;
- (id)pushTokenForPersonID:(id)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (_Bool)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (_Bool)MSASIsAllowedToUploadAssets;
- (_Bool)MSASIsAllowedToTransferMetadata;
- (id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
- (_Bool)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)baseSharingURLForPersonID:(id)arg1;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (_Bool)shouldLogAtLevel:(int)arg1;
- (Class)pluginClass;
- (id)pathAlbumSharingDir;
- (id)albumSharingDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

