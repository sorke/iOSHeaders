//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDate;

@interface RETimeline : NSObject <NSCopying>
{
    NSArray *_transitionDates;
    NSArray *_values;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToTimeline:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)valueForDate:(id)arg1;
@property(readonly, nonatomic) NSArray *transitionDates;
- (id)initWithStartDate:(id)arg1 values:(id)arg2 durations:(id)arg3;
- (id)init;
- (id)initWithTimeline:(id)arg1;

@end

