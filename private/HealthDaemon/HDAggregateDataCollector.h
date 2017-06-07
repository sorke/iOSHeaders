//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataCollector.h>

@class NSDictionary, _HKDataCollectorDelayedOperation;
@protocol HDSensorDatum;

@interface HDAggregateDataCollector : HDDataCollector
{
    _HKDataCollectorDelayedOperation *_historicalFetchOperation;
    id <HDSensorDatum> _lastReceivedSensorDatum;
    _Bool _didReceiveSensorDatum;
    NSDictionary *_lastReceivedSecondaryContext;
    _Bool _fetchingHistoricalData;
    _Bool _needsHistoricalFetch;
    double _maxDatumDuration;
}

- (void).cxx_destruct;
- (void)willPersistHKObjects:(id)arg1;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)updateHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateHistoricalData;
- (id)_queue_processSensorDataBatched:(id)arg1 firstDatum:(id)arg2 lastSensorDatum:(id *)arg3;
- (void)_queue_processSensorData:(id)arg1 lastSensorDatum:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_fetchHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_handleUpdatingHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_handleCMDatabaseReset;
- (void)_queue_updateLastReceivedSecondaryContext:(id)arg1;
- (void)_queue_updateLastReceivedSensorDatum:(id)arg1;
- (id)_queue_lastReceivedSecondaryContext;
- (id)_queue_lastReceivedSensorDatum;
- (void)_queue_beginUpdates;
- (void)_queue_beginStreaming;
@property(readonly, nonatomic) _Bool requiresSampleAggregation;
- (double)_queue_maxDatumDuration;
@property double maxDatumDuration;
- (double)_queue_aggregationInterval;
- (id)initWithPrimaryProfile:(id)arg1;

@end
