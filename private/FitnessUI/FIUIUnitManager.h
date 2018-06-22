//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthStore, NSMutableDictionary;

@interface FIUIUnitManager : NSObject
{
    NSMutableDictionary *_preferredUnits;
    HKHealthStore *_healthStore;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)setPreferredUnitsForTesting:(id)arg1;
- (void)setUserBasalEnergyBurnedUnit:(id)arg1;
- (id)userBasalEnergyBurnedUnit;
- (void)setUserActiveEnergyBurnedUnit:(id)arg1;
- (id)userActiveEnergyBurnedUnit;
- (double)distanceInDistanceUnit:(unsigned long long)arg1 forDistanceInMeters:(double)arg2;
- (double)distanceInUserDistanceUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2;
- (double)distanceInMetersForDistanceInUserUnit:(double)arg1 distanceType:(unsigned long long)arg2;
- (double)paceWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (void)setUserDistanceCyclingUnit:(unsigned long long)arg1;
- (id)userDistanceCyclingHKUnit;
- (unsigned long long)userDistanceCyclingUnit;
- (void)setUserDistanceWalkingRunningUnit:(unsigned long long)arg1;
- (id)userLapLengthHKUnit;
- (id)userDistanceWalkingRunningHKUnit;
- (id)userDistanceElevationHKUnit;
- (unsigned long long)userDistanceElevationUnit;
- (unsigned long long)userDistanceWalkingRunningUnit;
- (void)setUserDistanceUnit:(unsigned long long)arg1 forDistanceType:(unsigned long long)arg2;
- (id)userDistanceHKUnitForActivityType:(id)arg1;
- (id)userDistanceHKUnitForDistanceType:(unsigned long long)arg1;
- (unsigned long long)userDistanceUnitForDistanceType:(unsigned long long)arg1;
- (void)_setPreferredHKUnit:(id)arg1 forQuantityType:(id)arg2;
- (id)_preferredHKUnitForQuantityType:(id)arg1;
- (void)_notifyUnitPreferencesChanged;
- (void)_updatePreferredUnits;
- (id)_loadPreferredUnitsFromDefaults;
- (void)_storePreferredUnitsInDefaults:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_userPreferencesDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;

@end

