//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationDateLabelFactory : NSObject
{
    NSMutableDictionary *_recycledLabelsByStyle;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_purgeRecycledLabels;
- (long long)styleForLabel:(id)arg1;
- (void)recycleLabel:(id)arg1;
- (id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4 forStyle:(long long)arg5;
- (id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4 forStyle:(long long)arg5;
- (id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4 forStyle:(long long)arg5;
- (id)_labelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4 forStyle:(long long)arg5 forType:(int)arg6;
- (id)init;

@end
