//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDCollectionCalculator_DEPRECATED.h>

@interface HDDiscreteCollectionCalculator_DEPRECATED : HDCollectionCalculator_DEPRECATED
{
    CDStruct_23c51cd0 _currentStats;
    struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats>>> _bySource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sourceIDsForCurrentBucket;
- (long long)dataCount;
- (id)statsBySource;
- (void)getCurrentBucketStats:(CDStruct_23c51cd0 *)arg1;
- (void)_didAddFirstValue;
- (_Bool)hasData;
- (_Bool)advanceBucket;
- (void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4;
- (id)description;

@end

