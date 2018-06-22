//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SiriCoreSiriBackgroundConnectionDelegate.h"
#import "SiriCoreSiriConnection.h"

@class NSError, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSURL, NWPathEvaluator, SAConnectionPolicy, SiriCoreSiriBackgroundConnection;

@interface SiriCoreSiriConnection : NSObject <SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isCanceled;
    id <SiriCoreSiriConnectionDelegate> _delegate;
    NSURL *_url;
    _Bool _prefersWWAN;
    NSString *_aceHost;
    NSString *_languageCode;
    double _timeout;
    _Bool _sendPings;
    NSString *_assistantIdentifier;
    NSString *_peerAssistantIdentifier;
    NSString *_connectionId;
    _Bool _isCanceledInternal;
    NSMutableSet *_pendingBackgroundConnections;
    NSMutableSet *_comatoseBackgroundConnections;
    NSMutableSet *_scheduledRoutes;
    SiriCoreSiriBackgroundConnection *_activeBackgroundConnection;
    NSObject<OS_dispatch_group> *_activeConnectionGroup;
    NSString *_peerType;
    NSString *_peerVersion;
    NSString *_productTypePrefix;
    _Bool _usesProxyConnection;
    _Bool _deviceIsInWalkaboutExperimentGroup;
    _Bool _siriConnectionUsesPeerManagedSync;
    Class _peerProviderClass;
    NSMutableArray *_connMethodUsedHistory;
    _Bool _imposePolicyBan;
    NWPathEvaluator *_evaluator;
    NSString *_savedURLHostForEvaluator;
    NSString *_savedPortForEvaluator;
    _Bool _skipPeer;
    _Bool _useWiFiHint;
    _Bool _forceReconnect;
    NSError *_skipPeerError;
    SAConnectionPolicy *_connectionPolicy;
}

@property(copy, nonatomic) SAConnectionPolicy *connectionPolicy; // @synthesize connectionPolicy=_connectionPolicy;
@property(nonatomic) _Bool imposePolicyBan; // @synthesize imposePolicyBan=_imposePolicyBan;
@property(copy, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property(retain, nonatomic) Class peerProviderClass; // @synthesize peerProviderClass=_peerProviderClass;
@property(nonatomic) _Bool siriConnectionUsesPeerManagedSync; // @synthesize siriConnectionUsesPeerManagedSync=_siriConnectionUsesPeerManagedSync;
@property(nonatomic) _Bool deviceIsInWalkaboutExperimentGroup; // @synthesize deviceIsInWalkaboutExperimentGroup=_deviceIsInWalkaboutExperimentGroup;
@property(nonatomic) _Bool usesProxyConnection; // @synthesize usesProxyConnection=_usesProxyConnection;
@property(copy, nonatomic) NSString *productTypePrefix; // @synthesize productTypePrefix=_productTypePrefix;
@property(copy, nonatomic) NSString *peerVersion; // @synthesize peerVersion=_peerVersion;
@property(copy, nonatomic) NSString *peerType; // @synthesize peerType=_peerType;
@property(copy, nonatomic) NSString *peerAssistantIdentifier; // @synthesize peerAssistantIdentifier=_peerAssistantIdentifier;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *aceHost; // @synthesize aceHost=_aceHost;
@property(nonatomic) _Bool forceReconnect; // @synthesize forceReconnect=_forceReconnect;
@property(nonatomic) _Bool prefersWWAN; // @synthesize prefersWWAN=_prefersWWAN;
@property(copy, nonatomic) NSError *skipPeerError; // @synthesize skipPeerError=_skipPeerError;
@property(nonatomic) _Bool useWiFiHint; // @synthesize useWiFiHint=_useWiFiHint;
@property(nonatomic) _Bool skipPeer; // @synthesize skipPeer=_skipPeer;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <SiriCoreSiriConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_recordConnectionMethodForMetrics:(id)arg1;
- (void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3;
- (void)siriBackgroundConnectionDidClose:(id)arg1;
- (void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2;
- (void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4;
- (void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2;
- (void)_handleLastEventFromBackgroundConnection:(id)arg1 pendingConnectionExhaustionHandler:(CDUnknownBlockType)arg2;
- (id)_activeOrAnyPendingConnection;
- (void)_waitForActiveConnection:(CDUnknownBlockType)arg1;
- (void)_accessPotentiallyActiveConnections:(CDUnknownBlockType)arg1;
- (void)getConnectionMetricsSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAnalysisInfo:(CDUnknownBlockType)arg1;
- (id)analysisInfo;
- (void)cancelSynchronously:(_Bool)arg1 onQueue:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cancelSynchronously:(CDUnknownBlockType)arg1;
- (void)probeConnection;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)setSendPings:(_Bool)arg1;
- (void)sendCommands:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)sendCommand:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)start;
- (void)_scheduleBackgroundConnectionWithRoute:(id)arg1 delay:(double)arg2 policy:(id)arg3;
- (void)_startBackgroundConnectionWithRoute:(id)arg1 policy:(id)arg2;
- (id)_connectionInfoForRoute:(id)arg1 policy:(id)arg2;
- (id)_pathEvaluator:(id)arg1 port:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

