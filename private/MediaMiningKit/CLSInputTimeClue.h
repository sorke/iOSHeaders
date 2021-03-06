//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSInputClue.h>

@class NSArray, NSDate, NSSet;

@interface CLSInputTimeClue : CLSInputClue
{
    NSArray *_dateComponentsArray;
    NSArray *_events;
    NSSet *_localDates;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSSet *_universalDates;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
}

+ (id)clueWithDates:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isEqualToClue:(id)arg1;
- (void)_computeDateProperties;
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)description;
@property(copy, nonatomic) NSArray *events; // @synthesize events=_events;
- (unsigned long long)numberOfDays;
- (double)timeInterval;
- (id)localEndDate;
- (id)localStartDate;
- (id)localDates;
- (id)universalEndDate;
- (id)universalStartDate;
- (id)universalDates;

@end

