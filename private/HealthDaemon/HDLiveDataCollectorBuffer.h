//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol HDSensorDatum;

@interface HDLiveDataCollectorBuffer : NSObject
{
    NSMutableArray *_buffer;
    id <HDSensorDatum> _lastProcessedDatum;
    CDUnknownBlockType _objectCreationBlock;
    CDUnknownBlockType _sensorDatumComparisonBlock;
    double _bufferAggregationInterval;
}

@property(nonatomic) double bufferAggregationInterval; // @synthesize bufferAggregationInterval=_bufferAggregationInterval;
@property(copy, nonatomic) CDUnknownBlockType sensorDatumComparisonBlock; // @synthesize sensorDatumComparisonBlock=_sensorDatumComparisonBlock;
@property(copy, nonatomic) CDUnknownBlockType objectCreationBlock; // @synthesize objectCreationBlock=_objectCreationBlock;
- (void).cxx_destruct;
- (id)_processBufferIfSensorDatumInvalid:(id)arg1;
- (void)_resetBuffer;
- (id)_createObjectsFromBuffer:(id)arg1 lastProcessedDatum:(id)arg2;
- (long long)_bufferStateForSensorDatum:(id)arg1;
- (_Bool)_bufferLengthAchieved:(double)arg1 buffer:(id)arg2 lastProcessedDatum:(id)arg3;
- (id)addSensorDatum:(id)arg1;
- (id)init;

@end
