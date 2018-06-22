//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDateComponents;

@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding>
{
    double _approximateIntervalDuration;
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(readonly, copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)dateIntervalForIntervalsContainingInterval:(id)arg1;
- (id)dateIntervalContainingDate:(id)arg1 index:(long long *)arg2;
- (id)dateIntervalAtIndex:(long long)arg1;
- (id)initWithAnchorDate:(id)arg1 intervalComponents:(id)arg2;

@end

