//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

@class NSArray, NSDateInterval, NSLock, REDuetKnowledgeStore, REUpNextTimer;

@interface REPeriodOfDayPredictor : REPredictor
{
    NSArray *_storedPeriods;
    NSLock *_storedPeriodsLock;
    REUpNextTimer *_periodOfDayUpdateTimer;
    REDuetKnowledgeStore *_knowledgeStore;
}

+ (double)updateInterval;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (id)_nextDayPeriodUpdateDate;
- (void)_queue_updateNextDateUpdateTimer;
- (void)_getHistoricSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getPredictedSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_periodsOfDayForSleepIntervals:(id)arg1;
- (void)_getAllSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;
- (void)update;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 beforeDate:(id)arg2;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 afterDate:(id)arg2;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDateInterval *intervalForCurrentPeriodOfDay;
@property(readonly, nonatomic) unsigned long long currentPeriodOfDay;
- (void)_handleSignificantTimeChange;
- (id)_defaultDayPeriodsOfDayForDate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

