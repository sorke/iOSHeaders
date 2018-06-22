//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FCNotificationsConfiguration : NSObject
{
    NSArray *_preSubscribedNotificationsChannelIDs;
    NSArray *_recommendedNotificationChannelIDs;
}

@property(readonly, copy, nonatomic) NSArray *recommendedNotificationChannelIDs; // @synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs;
@property(readonly, copy, nonatomic) NSArray *preSubscribedNotificationsChannelIDs; // @synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2;

@end

