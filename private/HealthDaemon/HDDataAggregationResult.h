//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HDDataAggregationResult : NSObject
{
    NSArray *_aggregatedObjects;
    NSArray *_remainingSensorData;
    id <HDCollectedSensorDatum> _lastSensorData;
}

@property(readonly, copy, nonatomic) id <HDCollectedSensorDatum> lastSensorData; // @synthesize lastSensorData=_lastSensorData;
@property(readonly, copy, nonatomic) NSArray *remainingSensorData; // @synthesize remainingSensorData=_remainingSensorData;
@property(readonly, copy, nonatomic) NSArray *aggregatedObjects; // @synthesize aggregatedObjects=_aggregatedObjects;
- (void).cxx_destruct;
- (id)initWithAggregatedObjects:(id)arg1 remainingSensorData:(id)arg2 lastSensorData:(id)arg3;

@end

