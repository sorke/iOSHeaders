//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UAUserActivityClientResponseProtocol.h"

@class NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID, NSXPCConnection;

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serverQ;
    _Bool _connectionInitializationSucceeded;
    NSMapTable *_userActivitiesByUUID;
    _Bool _supportsActivityContinuation;
    _Bool _activityContinuationIsEnabled;
    NSMutableSet *_userActivityUUIDsSendToServer;
    _Bool _registeredForAppResignationMessages;
    _Bool _needToSendInitialMessage;
    NSUUID *_activeUserActivityUUID;
    NSMapTable *_activeUserActivitiesByUUID;
}

+ (id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)arg1 dynamicType:(id)arg2 kind:(unsigned long long)arg3 teamIdentifier:(id)arg4;
+ (_Bool)dontConnectToServer;
+ (id)defaultManager;
+ (_Bool)userActivityContinuationSupported;
+ (_Bool)shouldSupportActivityContinuation;
@property _Bool needToSendInitialMessage; // @synthesize needToSendInitialMessage=_needToSendInitialMessage;
@property(retain) NSMapTable *activeUserActivitiesByUUID; // @synthesize activeUserActivitiesByUUID=_activeUserActivitiesByUUID;
@property(retain) NSMapTable *userActivitiesByUUID; // @synthesize userActivitiesByUUID=_userActivitiesByUUID;
@property(readonly) NSObject<OS_dispatch_queue> *serverQ; // @synthesize serverQ=_serverQ;
@property(copy) NSUUID *activeUserActivityUUID; // @synthesize activeUserActivityUUID=_activeUserActivityUUID;
@property(readonly) _Bool supportsActivityContinuation; // @synthesize supportsActivityContinuation=_supportsActivityContinuation;
@property _Bool registeredForAppResignationMessages; // @synthesize registeredForAppResignationMessages=_registeredForAppResignationMessages;
- (void).cxx_destruct;
- (_Bool)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)registerForApplicationDeactivateIfNecessary;
- (void)sendCurrentActivityToIndexer:(id)arg1;
- (void)sendToIndexerIfAppropriate:(id)arg1 force:(_Bool)arg2;
- (id)activities;
- (_Bool)hasUserActivityWithUUID:(id)arg1;
- (void)pinUserActivity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(_Bool)arg2;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(_Bool)arg2;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
- (id)createByDecodingUserActivity:(id)arg1;
- (id)encodeUserActivity:(id)arg1;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (void)tellClientDebuggingEnabled:(_Bool)arg1 logFileHandle:(id)arg2;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)askClientUserActivityToSave:(id)arg1;
- (id)activeActivitiesByPriority;
- (id)userActivityForUUID:(id)arg1;
- (_Bool)userActivityIsActive:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)makeActive:(id)arg1;
- (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)removeUserActivity:(id)arg1;
- (void)addUserActivity:(id)arg1;
@property(readonly, copy) NSSet *userActivityUUIDsSendToServer;
- (id)fetchUUID:(id)arg1 intervalToWaitForDocumentSynchonization:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
@property(readonly) _Bool activityContinuationIsEnabled;
- (void)connectionInterrupted;
@property(readonly) NSXPCConnection *connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)init;
- (void)sendInitialMessage:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

