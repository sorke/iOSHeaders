//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYClientDaemonCloudSyncProtocol-Protocol.h>
#import <SetupAssistant/BYDaemonCloudSyncProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BYClientDaemonCloudSyncProtocol;

@interface BYBuddyDaemonCloudSyncClient : NSObject <BYDaemonCloudSyncProtocol, BYClientDaemonCloudSyncProtocol>
{
    id <BYClientDaemonCloudSyncProtocol> _delegate;
    NSXPCConnection *_connection;
}

+ (id)clientInterface;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak id <BYClientDaemonCloudSyncProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)syncProgress:(double)arg1;
- (void)startSync;
- (void)needsToSync:(CDUnknownBlockType)arg1;
- (void)connectToDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
