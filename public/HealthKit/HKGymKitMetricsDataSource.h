//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKWorkoutDataSource.h"
#import "_HKXPCExportable.h"

@class HKHealthStore, HKTaskServerProxyProvider, HKWorkoutConfiguration, NSString, NSUUID;

@interface HKGymKitMetricsDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource>
{
    HKHealthStore *_healthStore;
    HKWorkoutConfiguration *_workoutConfiguration;
    id <HKGymKitMetricsDataSourceDelegate> _delegate;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

+ (id)serverInterface;
+ (id)clientInterface;
@property(retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HKGymKitMetricsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startTaskServerIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)clientRemote_didReceiveMetrics:(id)arg1;
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

