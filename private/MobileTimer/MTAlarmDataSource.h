//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTAlarm, MTAlarmManager, NSHashTable, NSMutableArray;

@interface MTAlarmDataSource : NSObject
{
    MTAlarmManager *_alarmManager;
    NSHashTable *_observers;
    NSMutableArray *_alarms;
    MTAlarm *_sleepAlarm;
}

@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSMutableArray *alarms; // @synthesize alarms=_alarms;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
- (void).cxx_destruct;
- (id)removeAlarm:(id)arg1;
- (id)updateAlarm:(id)arg1;
- (id)addAlarm:(id)arg1;
- (unsigned long long)rowForAlarmWithID:(id)arg1;
- (unsigned long long)rowForAlarm:(id)arg1;
- (id)alarmAtRow:(unsigned long long)arg1;
- (unsigned long long)numberOfAlarms;
- (id)reloadAlarms;
- (void)_stateReset;
- (void)_handleAlarmNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_registerForNotifications;
- (void)_iterateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)registerObserver:(id)arg1;
- (id)initWithAlarmManager:(id)arg1;

@end

