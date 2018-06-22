//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTNotificationCenter.h"

@class NSString;

@interface MTDistributedNotificationPoster : NSObject <MTNotificationCenter>
{
}

- (void)dismissNotificationsForTimer:(id)arg1;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

