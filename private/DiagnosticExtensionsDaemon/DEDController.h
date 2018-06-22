//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DEDPairingProtocol.h"
#import "DEDSecureArchiving.h"
#import "DEDXPCProtocol.h"

@class DEDIDSConnection, DEDSharingConnection, DEDXPCConnector, DEDXPCInbound, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString, NSXPCConnection;

@interface DEDController : NSObject <DEDXPCProtocol, DEDPairingProtocol, DEDSecureArchiving>
{
    _Bool _isDaemon;
    _Bool _started;
    _Bool _useSharing;
    _Bool _useIDS;
    _Bool _embeddedInApp;
    DEDXPCConnector *_xpcConnector;
    DEDXPCInbound *_xpcInbound;
    NSXPCConnection *_xpcOutboundConnection;
    id <DEDClientProtocol> _clientDelegate;
    id <DEDWorkerProtocol> _workerDelegate;
    id <DEDPairingProtocol> _pairingDelegate;
    CDUnknownBlockType _devicesCompletion;
    CDUnknownBlockType _pongBlock;
    CDUnknownBlockType _sessionExistsCompletion;
    NSMutableDictionary *_sessionStartBlocks;
    NSMutableDictionary *_sessionDidStartBlocks;
    DEDIDSConnection *__idsConnection;
    DEDSharingConnection *__sharingConnection;
    double _sessionStartTimeout;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_os_log> *_log;
    CDUnknownBlockType _didCancelCompletion;
    NSMutableDictionary *_devices;
    NSMutableDictionary *_sessions;
}

+ (id)archivedClasses;
@property(retain) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(retain) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(copy) CDUnknownBlockType didCancelCompletion; // @synthesize didCancelCompletion=_didCancelCompletion;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
@property double sessionStartTimeout; // @synthesize sessionStartTimeout=_sessionStartTimeout;
@property(retain) DEDSharingConnection *_sharingConnection; // @synthesize _sharingConnection=__sharingConnection;
@property(retain) DEDIDSConnection *_idsConnection; // @synthesize _idsConnection=__idsConnection;
@property(retain) NSMutableDictionary *sessionDidStartBlocks; // @synthesize sessionDidStartBlocks=_sessionDidStartBlocks;
@property(retain) NSMutableDictionary *sessionStartBlocks; // @synthesize sessionStartBlocks=_sessionStartBlocks;
@property(copy) CDUnknownBlockType sessionExistsCompletion; // @synthesize sessionExistsCompletion=_sessionExistsCompletion;
@property(copy) CDUnknownBlockType pongBlock; // @synthesize pongBlock=_pongBlock;
@property(copy) CDUnknownBlockType devicesCompletion; // @synthesize devicesCompletion=_devicesCompletion;
@property _Bool embeddedInApp; // @synthesize embeddedInApp=_embeddedInApp;
@property _Bool useIDS; // @synthesize useIDS=_useIDS;
@property _Bool useSharing; // @synthesize useSharing=_useSharing;
@property _Bool started; // @synthesize started=_started;
@property _Bool isDaemon; // @synthesize isDaemon=_isDaemon;
@property __weak id <DEDPairingProtocol> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
@property __weak id <DEDWorkerProtocol> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
@property __weak id <DEDClientProtocol> clientDelegate; // @synthesize clientDelegate=_clientDelegate;
@property __weak NSXPCConnection *xpcOutboundConnection; // @synthesize xpcOutboundConnection=_xpcOutboundConnection;
@property(retain) DEDXPCInbound *xpcInbound; // @synthesize xpcInbound=_xpcInbound;
@property(retain) DEDXPCConnector *xpcConnector; // @synthesize xpcConnector=_xpcConnector;
- (void).cxx_destruct;
- (id)sharingConnection;
- (id)idsConnection;
- (void)addDevice:(id)arg1;
- (id)persistence;
- (id)purgeStaleSessions:(id)arg1;
- (_Bool)induceTimeOutIfNeededAndReturnCanProceedWithDevice:(id)arg1 sessionId:(id)arg2;
- (void)hasActiveSession:(id)arg1;
- (void)sessionWithIdentifier:(id)arg1 isActive:(_Bool)arg2;
- (void)didStartBugSessionWithInfo:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)gotDeviceUpdate:(id)arg1;
- (void)didDiscoverDevices:(id)arg1;
- (void)stopDeviceDiscovery;
- (void)discoverAllAvailableDevices;
- (void)pong;
- (void)ping;
- (void)hasActiveSessionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didAbortSessionWithID:(id)arg1;
- (void)abortSession:(id)arg1;
- (void)abortSession:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)knownSessions;
- (id)sessionForIdentifier:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 target:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_deviceForIncomingDevice:(id)arg1;
- (id)_deviceForIncomingDevice:(id)arg1 needsReady:(_Bool)arg2;
- (id)_sharingDeviceForIncomingDevice:(id)arg1;
- (void)successPINForDevice:(id)arg1;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)promptPINForDevice:(id)arg1;
- (void)startPairSetupForDevice:(id)arg1;
- (_Bool)hasDevice:(id)arg1;
- (id)deviceForIdentifier:(id)arg1;
- (id)devicesWithIdentifier:(id)arg1;
- (id)_allKnownDevicesWithIdentifier:(id)arg1;
- (id)allKnownDevices;
- (id)knownDevices;
- (void)stopDiscovery;
- (void)discoverDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)pingDaemonWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteXPCObject;
- (void)start;
- (void)configureForIDS:(_Bool)arg1;
- (void)configureForSharing:(_Bool)arg1;
- (void)configurePairingDelegate:(id)arg1;
- (void)configureWorkerDelegate:(id)arg1;
- (void)configureClientDelegate:(id)arg1;
- (void)configureForEmbedded:(_Bool)arg1;
- (void)configureForDaemon;
- (id)init;
- (void)_timeOutSessionStartBlockWithIdentifier:(id)arg1 timeout:(double)arg2;
- (_Bool)hasCompletionBlockWithIdentifier:(id)arg1;
- (CDUnknownBlockType)popSessionStartCompletionWithIdentifier:(id)arg1;
- (void)addSessionStartCompletion:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (CDUnknownBlockType)popDidStartSessionCompletionWithIdentifier:(id)arg1;
- (void)addDidStartSessionCompletion:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

