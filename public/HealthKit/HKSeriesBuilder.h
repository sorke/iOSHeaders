//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKSeriesBuilderClientInterface.h"
#import "_HKXPCExportable.h"

@class HKHealthStore, HKSeriesBuilderConfiguration, HKTaskServerProxyProvider, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HKSeriesBuilder : NSObject <_HKXPCExportable, HKSeriesBuilderClientInterface>
{
    long long _state;
    HKTaskServerProxyProvider *_proxyProvider;
    NSUUID *_identifier;
    HKSeriesBuilderConfiguration *_configuration;
    HKHealthStore *_store;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

+ (void)configureServerInterface:(id)arg1;
+ (void)configureClientInterface:(id)arg1;
+ (id)serverInterface;
+ (id)clientInterface;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) HKHealthStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) HKSeriesBuilderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)clientRemote_didChangeToState:(long long)arg1;
@property(nonatomic) long long state;
- (void)_resourceQueue_discardWithHandler:(CDUnknownBlockType)arg1;
- (void)_resourceQueue_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)freezeBuilderWithCompletion:(CDUnknownBlockType)arg1;
- (void)discard;
@property(readonly, copy) NSString *description;
- (id)_initWithHealthStore:(id)arg1 identifier:(id)arg2 configuration:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

