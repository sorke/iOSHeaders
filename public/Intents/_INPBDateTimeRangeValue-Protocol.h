//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;

@protocol _INPBDateTimeRangeValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) _Bool hasStartDateTime;
@property(retain, nonatomic) _INPBDateTime *startDateTime;
@property(nonatomic) _Bool hasStartCalendar;
@property(nonatomic) long long startCalendar;
@property(readonly, nonatomic) _Bool hasRecurrence;
@property(retain, nonatomic) _INPBRecurrenceValue *recurrence;
@property(readonly, nonatomic) _Bool hasEndDateTime;
@property(retain, nonatomic) _INPBDateTime *endDateTime;
@property(nonatomic) _Bool hasEndCalendar;
@property(nonatomic) long long endCalendar;
@end

