//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity, NSDateInterval;

@interface HKDiscreteQuantitySeriesSample : HKQuantitySample
{
    HKQuantity *_min;
    HKQuantity *_max;
    HKQuantity *_mostRecentQuantity;
    NSDateInterval *_mostRecentQuantityDateInterval;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
@property(copy, nonatomic, setter=_setMostRecentQuantity:) HKQuantity *mostRecentQuantity; // @synthesize mostRecentQuantity=_mostRecentQuantity;
@property(copy, nonatomic, setter=_setMax:) HKQuantity *max; // @synthesize max=_max;
@property(copy, nonatomic, setter=_setMin:) HKQuantity *min; // @synthesize min=_min;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setMostRecentQuantityDateInterval:) NSDateInterval *mostRecentQuantityDateInterval;
@property(copy, nonatomic, setter=_setAverage:) HKQuantity *average;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_validateConfiguration;

@end

