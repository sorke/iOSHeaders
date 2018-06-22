//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BSUIDateLabelFactory : NSObject
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
- (id)_labelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4 forStyle:(long long)arg5 forType:(long long)arg6;
- (void)dealloc;
- (id)init;

@end

