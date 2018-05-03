//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRAVOutputDevice.h>

@class AVOutputDevice, MRAVOutputDeviceSourceInfo, NSData, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MRAVConcreteOutputDevice : MRAVOutputDevice
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    AVOutputDevice *_avOutputDevice;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSString *_name;
    NSString *_uid;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_logicalDeviceID;
    NSString *_groupID;
    _Bool _overrideGroupID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
}

- (void).cxx_destruct;
- (id)_playingPairedDeviceNameForAVOutputDevice:(id)arg1;
- (void)_onqueue_clearCachedAVOutputDeviceProperties;
- (_Bool)_isOutputDevice:(id)arg1 belongToOutputContext:(id)arg2;
- (id)_outputContext;
- (void)setVolume:(float)arg1;
- (float)volume;
- (_Bool)isVolumeControlAvailable;
- (_Bool)requiresAuthorization;
- (_Bool)supportsExternalScreen;
- (_Bool)isLocalDevice;
- (_Bool)hasBatteryLevel;
- (float)batteryLevel;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (_Bool)isPickedOnPairedDevice;
- (_Bool)isDeviceGroupable;
- (_Bool)isProxyGroupPlayer;
- (_Bool)isGroupable;
- (_Bool)groupContainsGroupLeader;
- (_Bool)isGroupLeader;
- (_Bool)supportsBufferedAirPlay;
- (_Bool)canRelayCommunicationChannel;
- (_Bool)isRemoteControllable;
- (_Bool)canAccessiCloudMusicLibrary;
- (_Bool)canAccessAppleMusic;
- (_Bool)canAccessRemoteAssets;
- (id)playingPairedDeviceName;
- (id)modelSpecificInfo;
- (id)MACAddress;
- (id)groupID;
- (void)setGroupID:(id)arg1;
- (id)firmwareVersion;
- (id)modelID;
- (id)logicalDeviceID;
- (id)uid;
- (id)name;
@property(retain, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo;
@property(retain, nonatomic, setter=setAVOutputDevice:) AVOutputDevice *avOutputDevice;
- (id)initWithAVOutputDevice:(id)arg1 sourceInfo:(id)arg2;

@end

