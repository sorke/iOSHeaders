//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDateFormatter;

@interface HKTableFormatter : NSObject
{
    NSArray *_titles;
    NSArray *_columns;
    NSDateFormatter *_dateFormatter;
}

+ (id)formatterForCodableCondensedWorkouts;
- (void).cxx_destruct;
- (id)stringFromTimeInterval:(double)arg1;
- (id)stringFromDate:(id)arg1;
- (id)formattedTable;
@property(readonly, nonatomic) long long rowCount;
- (void)appendRow:(id)arg1;
- (id)init;
- (id)initWithColumnTitles:(id)arg1;
- (void)appendWorkout:(id)arg1;

@end

