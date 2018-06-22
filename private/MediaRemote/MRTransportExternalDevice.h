//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRExternalDevice.h>

#import "MRProtocolClientConnectionDelegate.h"

@class CURunLoopThread, MRExternalClientConnection, MRExternalDeviceTransport, NSData, NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString, _MRContentItemProtobuf, _MRDeviceInfoMessageProtobuf, _MRNowPlayingPlayerPathProtobuf, _MROriginProtobuf;

@interface MRTransportExternalDevice : MRExternalDevice <MRProtocolClientConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    CURunLoopThread *_runLoopThread;
    _Bool _wantsNowPlayingNotifications;
    _Bool _wantsNowPlayingArtworkNotifications;
    _Bool _wantsVolumeNotifications;
    _Bool _wantsOutputDeviceNotifications;
    _Bool _usingSystemPairing;
    NSDate *_connectionStateTimestamp;
    unsigned int _connectionState;
    unsigned int _connectionOptions;
    long long _cachedServerDisconnectError;
    unsigned long long _reconnectionAttemptCount;
    _Bool _forceReconnectOnConnectionFailure;
    _Bool _disconnecting;
    _Bool _startedXPCTransaction;
    _Bool _isCallingClientCallback;
    MRExternalClientConnection *_clientConnection;
    _MROriginProtobuf *_customOrigin;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSDictionary *_nowPlayingInfo;
    NSData *_nowPlayingArtwork;
    _MRContentItemProtobuf *_nowPlayingItem;
    MRExternalDeviceTransport *_transport;
    long long _connectionRecoveryBehavior;
    CDUnknownBlockType _pairingCallback;
    NSObject<OS_dispatch_queue> *_pairingCallbackQueue;
    CDUnknownBlockType _connectionStateCallback;
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;
    CDUnknownBlockType _nameCallback;
    NSObject<OS_dispatch_queue> *_nameCallbackQueue;
    CDUnknownBlockType _pairingAllowedCallback;
    NSObject<OS_dispatch_queue> *_pairingAllowedCallbackQueue;
    CDUnknownBlockType _customDataCallback;
    NSObject<OS_dispatch_queue> *_customDataCallbackQueue;
    CDUnknownBlockType _outputDevicesUpdatedCallback;
    NSObject<OS_dispatch_queue> *_outputDevicesUpdatedCallbackQueue;
    CDUnknownBlockType _outputDevicesRemovedCallback;
    NSObject<OS_dispatch_queue> *_outputDevicesRemovedCallbackQueue;
    CDUnknownBlockType _volumeCallback;
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;
    CDUnknownBlockType _volumeControlCapabilitiesCallback;
    NSObject<OS_dispatch_queue> *_volumeControlCapabilitiesCallbackQueue;
    NSObject<OS_dispatch_queue> *_outputContextCallbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputContextCallbackQueue; // @synthesize outputContextCallbackQueue=_outputContextCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // @synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeControlCapabilitiesCallback; // @synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // @synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesRemovedCallback; // @synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // @synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesUpdatedCallback; // @synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // @synthesize customDataCallbackQueue=_customDataCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType customDataCallback; // @synthesize customDataCallback=_customDataCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue; // @synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingAllowedCallback; // @synthesize pairingAllowedCallback=_pairingAllowedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // @synthesize nameCallbackQueue=_nameCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType nameCallback; // @synthesize nameCallback=_nameCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingCallbackQueue; // @synthesize pairingCallbackQueue=_pairingCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingCallback; // @synthesize pairingCallback=_pairingCallback;
@property(nonatomic) _Bool isCallingClientCallback; // @synthesize isCallingClientCallback=_isCallingClientCallback;
@property(nonatomic) long long connectionRecoveryBehavior; // @synthesize connectionRecoveryBehavior=_connectionRecoveryBehavior;
@property(readonly, nonatomic) MRExternalDeviceTransport *transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)_contentItemUpdatedNotification:(id)arg1;
- (id)_createPlaybackQueue:(_Bool)arg1;
- (void)_updateNowPlayingInfo;
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1;
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1;
- (void)_handleGenericMessage:(id)arg1;
- (void)_handleSetConnectionStateMessage:(id)arg1;
- (void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2;
- (void)_handleDeviceInfoUpdateMessage:(id)arg1;
- (void)_handleTransactionMessage:(id)arg1;
- (void)_handleLegacyVolumeControlCapabilitiesDidChangeMessage:(id)arg1;
- (void)_handleVolumeControlCapabilitiesDidChangeMessage:(id)arg1;
- (void)_handleVolumeDidChangeMessage:(id)arg1;
- (void)_handleOutputDevicesRemovedMessage:(id)arg1;
- (void)_handleOutputDevicesUpdatedMessage:(id)arg1;
- (void)_handleNotificationMessageLegacy:(id)arg1;
- (void)_handleNotificationMessageModern:(id)arg1;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_handleUpdateContentItemArtworkMessage:(id)arg1;
- (void)_handleUpdateContentItemsMessage:(id)arg1;
- (void)_handleUpdatePlayerMessage:(id)arg1;
- (void)_handleUpdateClientMessage:(id)arg1;
- (void)_handleRemovePlayerMessage:(id)arg1;
- (void)_handleRemoveClientMessage:(id)arg1;
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1;
- (void)_handleSetNowPlayingClientMessage:(id)arg1;
- (void)_handleSetArtworkMessage:(id)arg1;
- (void)_handleSetStateMessageLegacy:(id)arg1;
- (void)_handleSetStateMessageModern:(id)arg1;
- (void)_handleSetStateMessage:(id)arg1;
- (void)_handleCryptoPairingMessage:(id)arg1;
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(void *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_callVolumeControlCapabilitiesCallback:(unsigned int)arg1 outputDeviceUID:(id)arg2;
- (void)_callVolumeCallback:(float)arg1 outputDeviceUID:(id)arg2;
- (void)_callOutputDevicesRemovedCallbackWithOutputDeviceUIDs:(id)arg1;
- (void)_callOutputDevicesUpdatedCallbackWithOutputDevices:(id)arg1;
- (void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2;
- (void)_callClientAllowsPairingCallback;
- (void)_callClientNameCallback;
- (void)_callClientPairingCallback:(CDUnknownBlockType)arg1;
- (void)_callClientConnectionStateCallback:(unsigned int)arg1 previousConnectionState:(unsigned int)arg2 error:(id)arg3;
- (void)_handleLegacyPlaybackQueueRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handlePlaybackQueueResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePlaybackQueueRequest:(void *)arg1 forPlayer:(void *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_onSerialQueue_registerOriginCallbacks;
- (void)_onWorkerQueue_cleanUpWithReason:(long long)arg1;
- (void)_tearDownCustomOriginWithReason:(long long)arg1;
- (void)_onWorkerQueue_syncClientState;
- (id)_onWorkerQueue_openSecuritySession;
- (id)_onWorkerQueue_loadDeviceInfo;
- (id)_onWorkerQueue_setupCustomOrigin;
- (id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned int)arg1;
- (void)_transportDeviceInfoDidChangeNotification:(id)arg1;
- (void)_localDeviceInfoDidChangeNotification:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendClientUpdatesConfigMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendClientUpdatesConfigMessage;
- (id)currentClientUpdatesConfigMessage;
- (id)errorForCurrentState;
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)unpair;
- (void)disconnect:(id)arg1;
- (void)connectWithOptions:(unsigned int)arg1;
- (void)_onSerialQueue_connectWithOptions:(unsigned int)arg1;
- (void)_onWorkerQueue_connectWithOptions:(unsigned int)arg1 isRetry:(_Bool)arg2;
- (void)setVolumeControlCapabilitiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setVolumeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setOutputDevicesUpdatedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;
- (unsigned int)connectionState;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRContentItemProtobuf *nowPlayingItem; // @synthesize nowPlayingItem=_nowPlayingItem;
@property(retain, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(retain, nonatomic) NSData *nowPlayingArtwork; // @synthesize nowPlayingArtwork=_nowPlayingArtwork;
- (id)supportedMessages;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) _MROriginProtobuf *customOrigin; // @synthesize customOrigin=_customOrigin;
@property(retain, nonatomic) MRExternalClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (void)setName:(id)arg1;
- (void)setWantsOutputDeviceNotifications:(_Bool)arg1;
- (_Bool)wantsOutputDeviceNotifications;
- (void)setWantsVolumeNotifications:(_Bool)arg1;
- (_Bool)wantsVolumeNotifications;
- (void)setWantsNowPlayingArtworkNotifications:(_Bool)arg1;
- (_Bool)wantsNowPlayingArtworkNotifications;
- (void)setWantsNowPlayingNotifications:(_Bool)arg1;
- (_Bool)wantsNowPlayingNotifications;
- (void)setUsingSystemPairing:(_Bool)arg1;
- (_Bool)isUsingSystemPairing;
- (_Bool)isPaired;
- (_Bool)isValid;
- (long long)port;
- (id)hostName;
- (id)name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

