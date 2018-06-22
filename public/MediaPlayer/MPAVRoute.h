//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class MPAVBatteryLevel, MPAVRouteConnection, NSArray, NSDictionary, NSString;

@interface MPAVRoute : NSObject <NSSecureCoding>
{
    NSString *_routeName;
    _Bool _picked;
    NSDictionary *_avRouteDescription;
    MPAVRoute *_wirelessDisplayRoute;
    long long _displayRouteType;
    MPAVBatteryLevel *_batteryLevel;
    _Bool _canAccessRemoteAssets;
    _Bool _canPlayEncryptedProgressiveDownloadAssets;
    _Bool _canFetchMediaDataFromSender;
    _Bool _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    _Bool _pickedOnPairedDevice;
    _Bool _playingOnPairedDevice;
    _Bool _requiresPassword;
    _Bool _carplayRoute;
    _Bool _homePodRoute;
    NSString *_routeUID;
    NSString *_productIdentifier;
    NSString *_groupUID;
    long long _routeType;
    long long _pickableRouteType;
    long long _routeSubtype;
    NSArray *_auxiliaryDevices;
    NSString *_playingPairedDeviceName;
    void *_externalDevice;
    MPAVRouteConnection *_connection;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) MPAVRouteConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic, getter=_externalDevice) void *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(readonly, nonatomic, getter=isHomePodRoute) _Bool homePodRoute; // @synthesize homePodRoute=_homePodRoute;
@property(readonly, nonatomic, getter=isCarplayRoute) _Bool carplayRoute; // @synthesize carplayRoute=_carplayRoute;
@property(readonly, nonatomic) _Bool requiresPassword; // @synthesize requiresPassword=_requiresPassword;
@property(readonly, nonatomic, getter=isPlayingOnPairedDevice) _Bool playingOnPairedDevice; // @synthesize playingOnPairedDevice=_playingOnPairedDevice;
@property(readonly, nonatomic, getter=isPickedOnPairedDevice) _Bool pickedOnPairedDevice; // @synthesize pickedOnPairedDevice=_pickedOnPairedDevice;
@property(readonly, nonatomic) NSString *playingPairedDeviceName; // @synthesize playingPairedDeviceName=_playingPairedDeviceName;
@property(readonly, nonatomic) NSArray *auxiliaryDevices; // @synthesize auxiliaryDevices=_auxiliaryDevices;
@property(readonly, nonatomic) MPAVBatteryLevel *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; // @synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(readonly, nonatomic) _Bool canFetchMediaDataFromSender; // @synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender;
@property(readonly, nonatomic) _Bool canPlayEncryptedProgressiveDownloadAssets; // @synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets;
@property(readonly, nonatomic) _Bool canAccessRemoteAssets; // @synthesize canAccessRemoteAssets=_canAccessRemoteAssets;
@property(readonly, nonatomic) long long routeSubtype; // @synthesize routeSubtype=_routeSubtype;
@property(readonly, nonatomic) long long pickableRouteType; // @synthesize pickableRouteType=_pickableRouteType;
@property(readonly, nonatomic) long long routeType; // @synthesize routeType=_routeType;
@property(readonly, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool supportsWirelessDisplay;
@property(readonly, nonatomic, getter=isB238Route) _Bool b238Route;
@property(readonly, nonatomic, getter=isW1Route) _Bool w1Route;
@property(readonly, nonatomic, getter=isStereoPair) _Bool stereoPair;
@property(readonly, nonatomic, getter=isSmartAudio) _Bool smartAudio;
@property(readonly, nonatomic, getter=isDeviceSpeakerRoute) _Bool deviceSpeakerRoute;
@property(readonly, nonatomic, getter=isBeatsXRoute) _Bool beatsXRoute;
@property(readonly, nonatomic, getter=isBeatsStudioRoute) _Bool beatsStudioRoute;
@property(readonly, nonatomic, getter=isBeatsSoloRoute) _Bool beatsSoloRoute;
@property(readonly, nonatomic, getter=isPowerbeatsRoute) _Bool powerbeatsRoute;
@property(readonly, nonatomic, getter=isAirpodsRoute) _Bool airpodsRoute;
@property(nonatomic) long long displayRouteType;
@property(readonly, nonatomic, getter=isDisplayedAsPicked) _Bool displayAsPicked;
@property(readonly, nonatomic) long long passwordType;
@property(retain, nonatomic) MPAVRoute *wirelessDisplayRoute;
@property(readonly, nonatomic, getter=isRoutingToWirelessDevice) _Bool routingToWirelessDevice;
@property(nonatomic, getter=isPicked) _Bool picked;
@property(readonly, nonatomic) _Bool supportsRemoteControl;
@property(readonly, nonatomic) _Bool supportsGrouping;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property(readonly, nonatomic, getter=isProxyGroupPlayer) _Bool proxyGroupPlayer;
@property(readonly, nonatomic) _Bool isDeviceRoute;
@property(readonly, nonatomic, getter=isAppleTVRoute) _Bool appleTVRoute;
@property(readonly, nonatomic, getter=isAirPlayingToDevice) _Bool airPlayingToDevice;
- (void)setAVRouteDescription:(id)arg1;
@property(readonly, nonatomic) NSDictionary *avRouteDescription;
@property(copy, nonatomic) NSString *routeName;
@property(readonly, nonatomic) NSArray *routeNames;
@property(readonly, nonatomic) NSString *designatedGroupLeaderName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

