//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject<OS_dispatch_queue>, NSString;

@interface MPAVEndpointRoute : MPAVRoute
{
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
    MPMRAVEndpointWrapper *_endpointWrapper;
}

+ (void)getActiveEndpointRouteWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)_outputDevicesComposition;
- (_Bool)_groupLeaderIsOfDeviceSubtype:(unsigned int)arg1;
- (void)_endpointOutputDevicesDidChange:(id)arg1;
- (void)_endpointDidChange:(id)arg1;
- (_Bool)supportsRemoteControl;
- (_Bool)supportsGrouping;
- (long long)routeSubtype;
- (long long)routeType;
- (id)groupUID;
- (id)routeUID;
- (_Bool)isRoutingToWirelessDevice;
- (_Bool)isDeviceSpeakerRoute;
@property(readonly, nonatomic) _Bool canModifyGroupMembership;
- (_Bool)isProxyGroupPlayer;
- (_Bool)isDeviceRoute;
- (_Bool)isStereoPair;
- (_Bool)isHomePodRoute;
- (_Bool)isAppleTVRoute;
- (_Bool)isAirPlayingToDevice;
- (_Bool)canAccessRemoteAssets;
@property(retain, nonatomic) MPAVRouteConnection *connection;
@property(retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper; // @synthesize endpointWrapper=_endpointWrapper;
@property(readonly, nonatomic) void *endpoint;
- (id)description;
- (void)establishGroup;
- (id)designatedGroupLeaderName;
- (id)routeNames;
- (id)routeName;
@property(readonly, nonatomic) NSString *sortName;
- (void)dealloc;
- (id)initWithEndpoint:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

