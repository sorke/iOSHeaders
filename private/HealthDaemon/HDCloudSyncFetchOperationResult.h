//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class HDCloudSyncOperationConfiguration, HDCloudSyncZone, NSDictionary, NSSet;

@interface HDCloudSyncFetchOperationResult : NSObject <NSCopying>
{
    HDCloudSyncOperationConfiguration *_configuration;
    long long _status;
    NSDictionary *_zonesByIdentifier;
    HDCloudSyncZone *_primaryPushZone;
}

@property(readonly, nonatomic) HDCloudSyncZone *primaryPushZone; // @synthesize primaryPushZone=_primaryPushZone;
@property(readonly, nonatomic) NSDictionary *zonesByIdentifier; // @synthesize zonesByIdentifier=_zonesByIdentifier;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) HDCloudSyncOperationConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)masterZoneForContainerID:(id)arg1;
@property(readonly, nonatomic) NSSet *pullZones;
@property(readonly, nonatomic) NSSet *seizedZones;
- (id)_storeDescriptionForZone:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatus:(long long)arg1 configuration:(id)arg2 zonesByIdentifier:(id)arg3;

@end

