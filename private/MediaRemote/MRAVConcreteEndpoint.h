//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRAVEndpoint.h>

@class MRAVConcreteOutputDevice, MRTransportExternalDevice, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface MRAVConcreteEndpoint : MRAVEndpoint
{
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MRTransportExternalDevice *_externalDevice;
    MRAVConcreteOutputDevice *_designatedGroupLeader;
    long long _connectionType;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (_Bool)canModifyGroupMembership;
- (_Bool)isProxyGroupPlayer;
@property(retain, nonatomic) MRTransportExternalDevice *externalDevice;
@property(copy, nonatomic) NSArray *outputDevices;
- (id)uniqueIdentifier;
- (long long)connectionType;
- (id)designatedGroupLeader;
- (void)dealloc;
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2;

@end

