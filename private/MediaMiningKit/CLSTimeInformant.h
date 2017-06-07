//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSInformant.h>

@interface CLSTimeInformant : CLSInformant
{
}

+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)familyIdentifier;
- (id)_relevantEventResultsForInputTimeClue:(id)arg1 inInvestigation:(id)arg2;
- (id)_deduceEventFromFetchEventResults:(id)arg1 inInvestigation:(id)arg2;
- (_Bool)_eventsOverlaping:(id)arg1 otherEvent:(id)arg2;
- (id)_eventResultFromEvent:(id)arg1 forClueCollection:(id)arg2;
- (id)_calendarEventsForInvestigation:(id)arg1 inputTimeClue:(id)arg2;
- (id)_timeEventCluesForInputTimeClue:(id)arg1 inOperation:(id)arg2;
- (id)_celebratingEventForInputTimeClue:(id)arg1 inInvestigation:(id)arg2;
- (id)_timeSeasonCluesForInputTimeClue:(id)arg1 atLocation:(id)arg2;
- (id)_durationForTimeInterval:(double)arg1;
- (id)_timeOfDayForStartHour:(long long)arg1 andEndHour:(long long)arg2;
- (id)gatherCluesOperationForInvestigation:(id)arg1;

@end
