//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HFUserNotificationServiceTopic, HMHome;

@interface HFUserNotificationServiceTopicItem : HFItem
{
    HMHome *_home;
    HFUserNotificationServiceTopic *_topic;
}

@property(readonly, nonatomic) HFUserNotificationServiceTopic *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 topic:(id)arg2;

@end

