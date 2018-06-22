//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteMessageTransport.h>

#import "HMDHTTPClientMessageTransportDelegate.h"
#import "HMDHTTPServerMessageTransportDelegate.h"
#import "HMFNetServiceBrowserDelegate.h"

@class HMDHTTPDevice, HMDHTTPServerMessageTransport, HMFNetServiceBrowser, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport <HMDHTTPClientMessageTransportDelegate, HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate>
{
    NSMutableSet *_residentDevices;
    NSMutableSet *_transientDevices;
    NSMutableDictionary *_txtRecord;
    NSMutableArray *_clientTransports;
    _Bool _serverEnabled;
    HMDHTTPDevice *_currentDevice;
    HMDHTTPServerMessageTransport *_serverTransport;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFNetServiceBrowser *_clientBrowser;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)shouldHostMessageServer;
+ (unsigned long long)restriction;
@property(readonly, nonatomic) HMFNetServiceBrowser *clientBrowser; // @synthesize clientBrowser=_clientBrowser;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)server:(id)arg1 didRemoveDevice:(id)arg2;
- (void)server:(id)arg1 didAddDevice:(id)arg2;
- (void)server:(id)arg1 didStopWithError:(id)arg2;
- (void)client:(id)arg1 didReceiveMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)client:(id)arg1 didStopWithError:(id)arg2;
- (void)_connectToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stopServer;
- (void)_startServerWithDevice:(id)arg1;
- (void)configureWithDevice:(id)arg1;
- (id)_serviceForDevice:(id)arg1;
- (void)removeAllClientTransports;
- (void)removeClientTransport:(id)arg1;
- (void)addClientTransport:(id)arg1;
- (id)clientTransportForService:(id)arg1;
- (id)clientTransportForDevice:(id)arg1;
@property(readonly, nonatomic) NSArray *clientTransports;
- (id)deviceForHTTPDevice:(id)arg1;
- (void)setServerTransport:(id)arg1;
@property(readonly, nonatomic) HMDHTTPServerMessageTransport *serverTransport; // @synthesize serverTransport=_serverTransport;
- (void)setCurrentDevice:(id)arg1;
@property(readonly, nonatomic) HMDHTTPDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *TXTRecord;
- (void)handleServerEnabled:(_Bool)arg1;
@property(getter=isServerEnabled) _Bool serverEnabled; // @synthesize serverEnabled=_serverEnabled;
- (void)_handleReceivedRequestMessage:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessage:(id)arg1 destination:(id)arg2 timeout:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canSendMessage:(id)arg1;
- (_Bool)isDeviceConnected:(id)arg1;
- (long long)qualityOfService;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithAccountRegistry:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

