//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MobileTimer/NSCopying-Protocol.h>

@class NSString;

@interface MTPBAlarm : PBCodable <NSCopying>
{
    double _bedtimeForSleepTracking;
    double _bedtimeSnoozeFire;
    double _dismissed;
    double _fired;
    double _lastModified;
    double _mediaID;
    double _snoozeFire;
    unsigned int _active;
    NSString *_alarmID;
    unsigned int _bedtimeHour;
    unsigned int _bedtimeMinute;
    unsigned int _bedtimeReminderMinutes;
    unsigned int _daySetting;
    unsigned int _hour;
    unsigned int _minute;
    unsigned int _revision;
    unsigned int _soundType;
    float _soundVolume;
    NSString *_title;
    NSString *_toneID;
    NSString *_vibeID;
    _Bool _allowsSnooze;
    _Bool _isEnabled;
    _Bool _isSleepAlarm;
    struct {
        unsigned int bedtimeForSleepTracking:1;
        unsigned int bedtimeSnoozeFire:1;
        unsigned int dismissed:1;
        unsigned int fired:1;
        unsigned int snoozeFire:1;
    } _has;
}

@property(nonatomic) double dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic) double fired; // @synthesize fired=_fired;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) double bedtimeSnoozeFire; // @synthesize bedtimeSnoozeFire=_bedtimeSnoozeFire;
@property(nonatomic) double bedtimeForSleepTracking; // @synthesize bedtimeForSleepTracking=_bedtimeForSleepTracking;
@property(nonatomic) double snoozeFire; // @synthesize snoozeFire=_snoozeFire;
@property(nonatomic) unsigned int active; // @synthesize active=_active;
@property(nonatomic) double lastModified; // @synthesize lastModified=_lastModified;
@property(nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property(nonatomic) unsigned int bedtimeReminderMinutes; // @synthesize bedtimeReminderMinutes=_bedtimeReminderMinutes;
@property(nonatomic) unsigned int bedtimeMinute; // @synthesize bedtimeMinute=_bedtimeMinute;
@property(nonatomic) unsigned int bedtimeHour; // @synthesize bedtimeHour=_bedtimeHour;
@property(nonatomic) _Bool isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
@property(nonatomic) float soundVolume; // @synthesize soundVolume=_soundVolume;
@property(retain, nonatomic) NSString *vibeID; // @synthesize vibeID=_vibeID;
@property(nonatomic) double mediaID; // @synthesize mediaID=_mediaID;
@property(retain, nonatomic) NSString *toneID; // @synthesize toneID=_toneID;
@property(nonatomic) unsigned int soundType; // @synthesize soundType=_soundType;
@property(nonatomic) unsigned int daySetting; // @synthesize daySetting=_daySetting;
@property(nonatomic) _Bool allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int minute; // @synthesize minute=_minute;
@property(nonatomic) unsigned int hour; // @synthesize hour=_hour;
@property(retain, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDismissed;
@property(nonatomic) _Bool hasFired;
@property(nonatomic) _Bool hasBedtimeSnoozeFire;
@property(nonatomic) _Bool hasBedtimeForSleepTracking;
@property(nonatomic) _Bool hasSnoozeFire;
@property(readonly, nonatomic) _Bool hasVibeID;
@property(readonly, nonatomic) _Bool hasToneID;
@property(readonly, nonatomic) _Bool hasTitle;

@end
