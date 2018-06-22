//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DNDRemoteServiceConnectionEventListener.h"

@class NSHashTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface DNDModeAssertionService : NSObject <DNDRemoteServiceConnectionEventListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_clientIdentifier;
    NSHashTable *_assertionUpdateListeners;
    NSMutableSet *_activeAssertions;
    _Bool _registeredForUpdates;
}

+ (id)serviceForClientIdentifier:(id)arg1;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (void)_handleLostXPCConnection;
- (_Bool)_queue_registerForAssertionUpdatesIfRequired;
- (void)_handleModeAssertionInvalidation:(id)arg1;
- (void)_invalidateAllAssertionsWithReason:(unsigned long long)arg1;
- (void)remoteService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)removeAssertionUpdateListener:(id)arg1;
- (void)addAssertionUpdateListener:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)invalidateAllActiveModeAssertionsWithError:(id *)arg1;
- (id)activeModeAssertionWithError:(id *)arg1;
- (id)invalidateActiveModeAssertionWithError:(id *)arg1;
- (id)takeModeAssertionWithDetails:(id)arg1 error:(id *)arg2;
- (id)_initWithClientIdentifier:(id)arg1;
- (_Bool)removeAssertionUpdateListener:(id)arg1 error:(id *)arg2;
- (_Bool)addAssertionUpdateListener:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

