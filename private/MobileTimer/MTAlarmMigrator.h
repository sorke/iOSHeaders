//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTAlarm, NSMutableArray;

@interface MTAlarmMigrator : NSObject
{
    NSMutableArray *_alarms;
    MTAlarm *_sleepAlarm;
}

@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSMutableArray *alarms; // @synthesize alarms=_alarms;
- (void).cxx_destruct;
- (void)cleanUpOldNotifications;
- (void)removeFromOldStorage;
- (void)migrateFromOldStorage;

@end

