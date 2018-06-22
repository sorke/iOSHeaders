//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UILocalNotification.h>

#import "NSSecureCoding.h"

@class CLRegion, NSCalendar, NSData, NSDate, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding>
{
    NSDate *fireDate;
    NSTimeZone *timeZone;
    unsigned long long repeatInterval;
    NSCalendar *repeatCalendar;
    CLRegion *region;
    _Bool regionTriggersOnce;
    NSString *alertBody;
    _Bool hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *alertTitle;
    NSString *soundName;
    long long applicationIconBadgeNumber;
    NSData *userInfoData;
    NSString *category;
}

+ (_Bool)supportsSecureCoding;
- (void)setAlertTitle:(id)arg1;
- (id)alertTitle;
- (void)setRegionTriggersOnce:(_Bool)arg1;
- (_Bool)regionTriggersOnce;
- (void)setRegion:(id)arg1;
- (id)region;
- (void)setCategory:(id)arg1;
- (id)category;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (long long)applicationIconBadgeNumber;
- (void)setSoundName:(id)arg1;
- (id)soundName;
- (void)setAlertLaunchImage:(id)arg1;
- (id)alertLaunchImage;
- (void)setAlertAction:(id)arg1;
- (id)alertAction;
- (void)setHasAction:(_Bool)arg1;
- (_Bool)hasAction;
- (void)setAlertBody:(id)arg1;
- (id)alertBody;
- (void)setRepeatCalendar:(id)arg1;
- (id)repeatCalendar;
- (void)setRepeatInterval:(unsigned long long)arg1;
- (unsigned long long)repeatInterval;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)setFireDate:(id)arg1;
- (id)fireDate;
- (void).cxx_destruct;
- (_Bool)isTriggeredByRegion;
- (_Bool)isTriggeredByDate;
- (void)validate;
- (_Bool)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)description;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)_setUserInfoData:(id)arg1;
- (long long)compareFireDates:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

