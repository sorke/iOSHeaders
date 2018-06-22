//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFClockItem.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString, NSURL, NSUUID;

@interface AFClockAlarm : NSObject <AFClockItem, NSCopying, NSSecureCoding>
{
    _Bool _isFiring;
    _Bool _isEnabled;
    _Bool _isSnoozed;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    NSString *_title;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _repeatOptions;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *dismissedDate; // @synthesize dismissedDate=_dismissedDate;
@property(readonly, copy, nonatomic) NSDate *firedDate; // @synthesize firedDate=_firedDate;
@property(readonly, nonatomic) _Bool isSnoozed; // @synthesize isSnoozed=_isSnoozed;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) unsigned long long repeatOptions; // @synthesize repeatOptions=_repeatOptions;
@property(readonly, nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) unsigned long long hour; // @synthesize hour=_hour;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool isFiring; // @synthesize isFiring=_isFiring;
@property(readonly, copy, nonatomic) NSURL *alarmURL; // @synthesize alarmURL=_alarmURL;
@property(readonly, copy, nonatomic) NSUUID *alarmID; // @synthesize alarmID=_alarmID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAlarmID:(id)arg1 alarmURL:(id)arg2 isFiring:(_Bool)arg3 title:(id)arg4 hour:(unsigned long long)arg5 minute:(unsigned long long)arg6 repeatOptions:(unsigned long long)arg7 isEnabled:(_Bool)arg8 isSnoozed:(_Bool)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSURL *itemURL;
@property(readonly, nonatomic) NSUUID *itemID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

