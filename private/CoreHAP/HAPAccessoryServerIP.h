//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

#import "HAPAuthSessionDelegate.h"
#import "HAPHTTPClientDebugDelegate.h"
#import "HAPHTTPClientDelegate.h"
#import "HMFNetMonitorDelegate.h"
#import "HMFTimerDelegate.h"

@class HAPAccessory, HAPAccessoryProtocolInfo, HAPAccessoryServerBrowserIP, HAPAuthSession, HAPHTTPClient, HAPWACClient, HMFBlockOperation, HMFNetMonitor, HMFTimer, NSArray, NSData, NSDictionary, NSMutableArray, NSOperationQueue, NSString;

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate, HMFTimerDelegate, HAPAuthSessionDelegate, HMFNetMonitorDelegate>
{
    struct PairingSessionPrivate *_pairingSession;
    unsigned long long _featureFlags;
    _Bool _wacComplete;
    _Bool _wacLegacy;
    _Bool _wacSoftToken;
    _Bool _preSoftAuthWacStarted;
    _Bool _postSoftAuthWacStarted;
    _Bool _authenticated;
    _Bool _establishingSecureConnection;
    _Bool _hasTunnelService;
    _Bool _econnresetRetryInProgress;
    _Bool _continuingLegacyWACpairing;
    _Bool _wacStarted;
    _Bool _hasStartedPairing;
    _Bool _networkReachable;
    _Bool _tokenRequestPending;
    _Bool _tokenValidationPending;
    NSString *_model;
    NSString *_sourceVersion;
    unsigned long long _statusFlags;
    NSData *_token;
    NSDictionary *_bonjourDeviceInfo;
    HAPAccessoryServerBrowserIP *_browser;
    NSArray *_ipServices;
    NSMutableArray *_queuedOperations;
    HAPAccessory *_primaryAccessoryForServer;
    HAPHTTPClient *_httpClient;
    HAPAuthSession *_authSession;
    HAPAccessoryProtocolInfo *_authenticatedProtocolInfo;
    CDUnknownBlockType _pairVerifyCompletionBlock;
    NSString *_controllerUsername;
    CDUnknownBlockType _netServiceResolveCompletionBlock;
    HMFBlockOperation *_pairOperation;
    NSOperationQueue *_clientOperationQueue;
    NSDictionary *_wacDeviceInfo;
    HAPWACClient *_pairUsingWAC;
    HMFTimer *_bonjourEventTimer;
    HMFNetMonitor *_networkMonitor;
}

+ (id)sharedPairOperationQueue;
@property(nonatomic, getter=isTokenValidationPending) _Bool tokenValidationPending; // @synthesize tokenValidationPending=_tokenValidationPending;
@property(nonatomic, getter=isTokenRequestPending) _Bool tokenRequestPending; // @synthesize tokenRequestPending=_tokenRequestPending;
@property(nonatomic, getter=isNetworkReachable) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
@property(readonly, nonatomic) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(nonatomic) _Bool hasStartedPairing; // @synthesize hasStartedPairing=_hasStartedPairing;
@property(retain, nonatomic) HMFTimer *bonjourEventTimer; // @synthesize bonjourEventTimer=_bonjourEventTimer;
@property(nonatomic, getter=isWacStarted) _Bool wacStarted; // @synthesize wacStarted=_wacStarted;
@property(nonatomic, getter=isContinuingLegacyWACpairing) _Bool continuingLegacyWACpairing; // @synthesize continuingLegacyWACpairing=_continuingLegacyWACpairing;
@property(retain, nonatomic) HAPWACClient *pairUsingWAC; // @synthesize pairUsingWAC=_pairUsingWAC;
@property(readonly, copy, nonatomic) NSDictionary *wacDeviceInfo; // @synthesize wacDeviceInfo=_wacDeviceInfo;
@property(readonly, nonatomic) NSOperationQueue *clientOperationQueue; // @synthesize clientOperationQueue=_clientOperationQueue;
@property(retain, nonatomic) HMFBlockOperation *pairOperation; // @synthesize pairOperation=_pairOperation;
@property(nonatomic) _Bool econnresetRetryInProgress; // @synthesize econnresetRetryInProgress=_econnresetRetryInProgress;
@property(nonatomic) _Bool hasTunnelService; // @synthesize hasTunnelService=_hasTunnelService;
@property _Bool establishingSecureConnection; // @synthesize establishingSecureConnection=_establishingSecureConnection;
@property(copy, nonatomic) CDUnknownBlockType netServiceResolveCompletionBlock; // @synthesize netServiceResolveCompletionBlock=_netServiceResolveCompletionBlock;
@property(retain, nonatomic) NSString *controllerUsername; // @synthesize controllerUsername=_controllerUsername;
@property(copy, nonatomic) CDUnknownBlockType pairVerifyCompletionBlock; // @synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo; // @synthesize authenticatedProtocolInfo=_authenticatedProtocolInfo;
@property(readonly, nonatomic) HAPAuthSession *authSession; // @synthesize authSession=_authSession;
@property(retain, nonatomic) HAPHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) HAPAccessory *primaryAccessoryForServer; // @synthesize primaryAccessoryForServer=_primaryAccessoryForServer;
@property(retain, nonatomic) NSMutableArray *queuedOperations; // @synthesize queuedOperations=_queuedOperations;
@property(retain, nonatomic) NSArray *ipServices; // @synthesize ipServices=_ipServices;
@property(nonatomic) __weak HAPAccessoryServerBrowserIP *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSDictionary *bonjourDeviceInfo; // @synthesize bonjourDeviceInfo=_bonjourDeviceInfo;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(nonatomic, getter=isPostSoftAuthWacStarted) _Bool postSoftAuthWacStarted; // @synthesize postSoftAuthWacStarted=_postSoftAuthWacStarted;
@property(nonatomic, getter=isPreSoftAuthWacStarted) _Bool preSoftAuthWacStarted; // @synthesize preSoftAuthWacStarted=_preSoftAuthWacStarted;
@property(nonatomic, getter=isWacSoftToken) _Bool wacSoftToken; // @synthesize wacSoftToken=_wacSoftToken;
@property(nonatomic, getter=isWacLegacy) _Bool wacLegacy; // @synthesize wacLegacy=_wacLegacy;
@property(nonatomic, getter=isWacComplete) _Bool wacComplete; // @synthesize wacComplete=_wacComplete;
@property(nonatomic) unsigned long long statusFlags; // @synthesize statusFlags=_statusFlags;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)_handleListPairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(_Bool)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authSession:(id)arg1 authComplete:(id)arg2;
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
- (void)tearDownSessionOnAuthCompletion;
- (void)provisionToken:(id)arg1;
- (void)continueAuthAfterValidation:(_Bool)arg1;
- (void)authenticateAccessory;
- (_Bool)_validateProtocolInfo:(id)arg1;
- (void)getAccessoryInfo:(CDUnknownBlockType)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (int)_handlePairVerifyCompletionWithData:(id)arg1;
- (int)_pairVerifyStart;
- (int)_pairSetupTryPassword:(id)arg1;
- (int)_handlePairSetupCompletionWithData:(id)arg1;
- (int)_continuePairingAfterAuthPrompt;
- (int)_pairSetupStartWithConsentRequired:(_Bool)arg1;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (int)_ensureHTTPClientSetUp;
- (void)httpClientDidCloseConnectionDueToServer:(id)arg1;
- (void)_establishSecureSession;
- (void)invokePairVerifyCompletionBlock:(id)arg1;
- (void)_invokePairVerifyCompletionBlock:(id)arg1;
- (_Bool)_isSessionEstablished;
- (_Bool)isSessionEstablised;
- (_Bool)_mergeExistingService:(id)arg1 withNewService:(id)arg2;
- (_Bool)_mergeExistingAccessory:(id)arg1 withNewAccessory:(id)arg2;
- (_Bool)_updateAccessories:(id)arg1;
- (void)_updateProtocolVersionFromPrimaryAccessory:(id)arg1;
- (void)__registerForInternalCharacteristicNotifications;
- (void)_parseAttributeDatabase:(id)arg1 transaction:(id)arg2;
- (void)_getAttributeDatabase;
- (_Bool)_parseTXTRecordDictionary:(id)arg1;
- (_Bool)_parseAndValidateTXTRecord;
- (void)_handleHTTPClientErrors;
- (_Bool)_processEvent:(id)arg1 matchedCharacteristic:(id *)arg2;
- (void)httpClient:(id)arg1 didReceiveEvent:(id)arg2;
- (void)_handleEventResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(_Bool)arg6 completion:(CDUnknownBlockType)arg7 queue:(id)arg8;
- (void)_enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (void)_handleWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_handlePrepareWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 prepareIdentifier:(id)arg3 httpStatus:(int)arg4 error:(id)arg5 requestTuples:(id)arg6 timeout:(double)arg7 queue:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_performExecuteWriteValues:(id)arg1 prepareIdentifier:(id)arg2 timeout:(double)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performTimedWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleReadResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_processQueuedOperationsWithError:(id)arg1;
- (void)_queueEnableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_queueListPairingWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_insertWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_queueWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_queuedWriteOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_insertReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_queueReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_queuedReadOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)stopPairingWithError:(id *)arg1;
- (void)_tearDownSession;
- (_Bool)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)continuePairingAfterAuthPrompt;
- (void)reconfirm;
- (void)startPairingWithConsentRequired:(_Bool)arg1;
- (void)_isAccessoryPublicKeyPresent:(_Bool *)arg1 registeredWithHomeKit:(_Bool *)arg2;
- (void)_establishSecureConnectionAndFetchAttributeDatabase;
- (void)discoverAccessories;
- (long long)linkType;
- (id)primaryAccessory;
- (id)services;
- (void)pairSetupStartSoftAuthWAC;
- (void)_continuePairingAfterConfirmingSoftAuthWAC;
- (void)_tearDownWAC;
- (void)_continuePairingAfterWAC:(id)arg1;
- (int)_continuePairingWithSetupCode:(id)arg1;
- (void)_continuePairingUsingWAC;
- (void)continuePairingUsingWAC;
- (void)_continuePairingAfterConfirmingSecureWAC;
- (void)_pairVerifyContinueWAC;
- (void)_pairVerifyStartWAC;
- (void)_pairSetupContinueWAC;
- (void)_pairSetupStartWAC;
- (void)_invalidateWAC;
- (void)startReprovisioning;
@property(readonly, nonatomic, getter=isWacAccessory) _Bool wacAccessory;
- (void)updateWithWACDevice:(id)arg1;
- (id)initWithWACDeviceDictionary:(id)arg1 keyStore:(id)arg2 browser:(id)arg3;
- (void)_updateWithBonjourDeviceInfo:(id)arg1;
- (void)updateWithBonjourDeviceInfo:(id)arg1;
- (_Bool)_hasBonjourDeviceInfo;
- (_Bool)hasBonjourDeviceInfo;
- (void)_notifyDelegatesOfAddAccessoryFailure;
- (void)_notifyDelegatesPairingStopped:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)invalidateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reset;
- (id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 browser:(id)arg3;
- (id)initCommon:(id)arg1 browser:(id)arg2;
- (void)_requestResource:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

