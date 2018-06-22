//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemModule.h"

@class HFTransformItemProvider, HFUserNotificationServiceTopic, HMHome;

@interface HUUserNotificationTopicServiceListModule : HFItemModule
{
    HMHome *_home;
    HFUserNotificationServiceTopic *_topic;
    struct HFTransformItemProvider *_transformServiceItemProvider;
    struct HFTransformItemProvider *_transformCameraItemProvider;
}

+ (id)_createTransformItemForItem:(id)arg1 notificationSettingsProvider:(id)arg2;
@property(readonly, nonatomic) HFTransformItemProvider *transformCameraItemProvider; // @synthesize transformCameraItemProvider=_transformCameraItemProvider;
@property(readonly, nonatomic) HFTransformItemProvider *transformServiceItemProvider; // @synthesize transformServiceItemProvider=_transformServiceItemProvider;
@property(readonly, nonatomic) HFUserNotificationServiceTopic *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)serviceLikeItemForItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 topic:(id)arg3;
- (id)initWithItemUpdater:(id)arg1;

@end

