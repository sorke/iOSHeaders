//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSMutableSet;

@interface CLSLocationOfInterestCache : NSObject
{
    NSMutableDictionary *_visitsCache;
    NSMutableDictionary *_transitionsCache;
    NSMutableSet *_allLocationsOfInterest;
    NSMutableSet *_allLocationsOfInterestTransitionIdentifiers;
    NSMutableSet *_homeLocations;
    NSMutableSet *_workLocations;
    unsigned long long _numberOfLocationsOfInterestVisits;
    NSDate *_earliestVisitStartDate;
}

@property(readonly) NSDate *earliestVisitStartDate; // @synthesize earliestVisitStartDate=_earliestVisitStartDate;
@property(readonly) unsigned long long numberOfLocationsOfInterestVisits; // @synthesize numberOfLocationsOfInterestVisits=_numberOfLocationsOfInterestVisits;
@property(retain, nonatomic) NSMutableSet *workLocations; // @synthesize workLocations=_workLocations;
@property(retain, nonatomic) NSMutableSet *homeLocations; // @synthesize homeLocations=_homeLocations;
@property(retain, nonatomic) NSMutableSet *allLocationsOfInterestTransitionIdentifiers; // @synthesize allLocationsOfInterestTransitionIdentifiers=_allLocationsOfInterestTransitionIdentifiers;
@property(retain, nonatomic) NSMutableSet *allLocationsOfInterest; // @synthesize allLocationsOfInterest=_allLocationsOfInterest;
@property(retain, nonatomic) NSMutableDictionary *transitionsCache; // @synthesize transitionsCache=_transitionsCache;
@property(retain, nonatomic) NSMutableDictionary *visitsCache; // @synthesize visitsCache=_visitsCache;
- (void).cxx_destruct;
@property(readonly) unsigned long long numberOfLocationsOfInterestTransitions;
- (id)locationsOfInterestTransitionInDateInterval:(id)arg1;
- (void)addLocationOfInterestTransition:(id)arg1;
@property(readonly) unsigned long long numberOfLocationsOfInterest;
- (id)locationsOfInterestVisitsInDateInterval:(id)arg1;
- (id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3;
- (id)locationsOfInterestOfType:(long long)arg1;
- (void)addLocationOfInterest:(id)arg1;
- (id)init;

@end

