//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagement/RMUserNotificationContext.h>

@class NSData, NSString;

@interface RMWeeklyReportUserNotificationContext : RMUserNotificationContext
{
    NSData *_weeklyReportData;
    NSString *_notificationBodyKey;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *notificationBodyKey; // @synthesize notificationBodyKey=_notificationBodyKey;
@property(retain, nonatomic) NSData *weeklyReportData; // @synthesize weeklyReportData=_weeklyReportData;
- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setDeltaScreenTimeUsage:(double)arg1 totalUsage:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

