//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, NSDictionary, NSMapTable;

@interface HDDataCollectorMultiplexer : NSObject
{
    HDProfile *_profile;
    id *_collector;
    NSDictionary *_aggregatorsByType;
    NSMapTable *_recordsByAggregator;
}

- (void).cxx_destruct;
- (void)setConfiguration:(id)arg1 forAggregator:(id)arg2;
- (id)mergedConfiguration;
- (void)setLastSensorDatum:(id)arg1 forAggregator:(id)arg2;
- (id)lastDatumForType:(id)arg1;
- (id)identifierForAggregator:(id)arg1;
- (id)aggregatorForType:(id)arg1;
- (id)initForCollector:(id)arg1 identifier:(id)arg2 state:(id)arg3 profile:(id)arg4 types:(id)arg5;

@end

