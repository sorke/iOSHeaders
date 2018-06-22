//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAIdentifiable.h"

@class NSSet, NSString;

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable>
{
    NSSet *_serviceTypes;
    NSSet *_accessoryCategoryTypes;
    NSString *_topicName;
    id <HFIconDescriptor> _iconDescriptor;
}

+ (id)na_identity;
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(readonly, copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(readonly, copy, nonatomic) NSSet *accessoryCategoryTypes; // @synthesize accessoryCategoryTypes=_accessoryCategoryTypes;
@property(readonly, copy, nonatomic) NSSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicName:(id)arg3 iconDescriptor:(id)arg4;
- (id)initWithServiceType:(id)arg1 topicName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

