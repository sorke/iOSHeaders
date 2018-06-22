//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "RPRemoteDisplayXPCClientInterface.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface>
{
    _Bool _activateCalled;
    struct NSMutableDictionary *_discoveredDevices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    unsigned long long _controlFlags;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    unsigned long long _errorFlags;
    CDUnknownBlockType _errorFlagsChangedHandler;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType errorFlagsChangedHandler; // @synthesize errorFlagsChangedHandler=_errorFlagsChangedHandler;
@property(nonatomic) unsigned long long errorFlags; // @synthesize errorFlags=_errorFlags;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(nonatomic) unsigned long long controlFlags; // @synthesize controlFlags=_controlFlags;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (_Bool)shouldReportDevice:(id)arg1;
- (void)_lostAllDevices;
- (void)remoteDisplayChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)remoteDisplayLostDevice:(id)arg1;
- (void)remoteDisplayFoundDevice:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *discoveredDevices;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

