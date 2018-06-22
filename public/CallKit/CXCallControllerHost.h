//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCallControllerHostConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface CXCallControllerHost : NSObject <NSXPCListenerDelegate, CXCallControllerHostConnectionDelegate>
{
    int _clientsShouldConnectToken;
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallControllerHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSXPCListener *_xpcListener;
    NSMutableDictionary *_callUUIDToCallMap;
    NSMutableSet *_connections;
}

@property(readonly, nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSMutableDictionary *callUUIDToCallMap; // @synthesize callUUIDToCallMap=_callUUIDToCallMap;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallControllerHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)callControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)callControllerHostConnection:(id)arg1 requestCalls:(CDUnknownBlockType)arg2;
- (void)callControllerHostConnectionInvalidated:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_callsForCallControllerHostConnection:(id)arg1;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)removeCall:(id)arg1;
- (void)addOrUpdateCall:(id)arg1;
- (void)dealloc;
- (id)initWithCalls:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

