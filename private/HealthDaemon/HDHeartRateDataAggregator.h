//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDDataAggregator.h>

@interface HDHeartRateDataAggregator : HDDataAggregator
{
}

- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)_metadataForSensorDatum:(id)arg1 collector:(id)arg2;
- (void)_notifyForSensorDatum:(id)arg1 collector:(id)arg2 device:(id)arg3 source:(id)arg4;
- (_Bool)_shouldRequestActiveCollectionForConfiguration:(id)arg1;
- (id)configurationForCollector:(id)arg1;
- (void)workoutManagerStateChanged:(id)arg1;
- (id)objectType;
- (void)dealloc;
- (id)initWithDataCollectionManager:(id)arg1;

@end

