//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDCollectionCalculator_DEPRECATED.h>

@class NSMutableArray;

@interface HDTimeIntervalCollectionCalculator_DEPRECATED : HDCollectionCalculator_DEPRECATED
{
    NSMutableArray *_timePeriods;
}

- (void).cxx_destruct;
- (double)totalDuration;
- (void)_shortenRangesConsideringPreferredSourceValue:(id)arg1 lesserRange:(id)arg2;
- (void)addTimePeriodWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)initForSingleStatistics;

@end

