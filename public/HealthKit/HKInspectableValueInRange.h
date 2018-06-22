//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKInspectableValueCollection, NSDate, NSString;

@interface HKInspectableValueInRange : NSObject
{
    HKInspectableValueCollection *_lowValue;
    HKInspectableValueCollection *_highValue;
    HKInspectableValueCollection *_currentValue;
    NSString *_unitString;
    NSDate *_date;
}

+ (id)valueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property(readonly, nonatomic) HKInspectableValueCollection *currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) HKInspectableValueCollection *highValue; // @synthesize highValue=_highValue;
@property(readonly, nonatomic) HKInspectableValueCollection *lowValue; // @synthesize lowValue=_lowValue;
- (void).cxx_destruct;
- (void)_setUnitString:(id)arg1;
- (double)_doubleForValue:(id)arg1;
- (double)_doubleForValueCollection:(id)arg1;
@property(readonly, nonatomic) _Bool hasRenderableContent;
@property(readonly, nonatomic) long long currentValueRelation;
@property(readonly, nonatomic) double highValueDoubleRepresentation;
@property(readonly, nonatomic) double lowValueDoubleRepresentation;
- (void)_assertValidRange;
- (id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;

@end

