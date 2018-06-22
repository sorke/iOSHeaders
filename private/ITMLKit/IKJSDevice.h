//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSDevice.h"
#import "NSObject.h"
#import "_IKJSDevice.h"
#import "_IKJSDeviceProxy.h"

@class NSNumber, NSString;

@interface IKJSDevice : IKJSObject <NSObject, IKJSDevice, _IKJSDeviceProxy, _IKJSDevice>
{
    id _networkPropertiesChangedToken;
    id <IKAppDeviceConfig> _deviceConfig;
}

+ (id)getMobileGestaltString:(struct __CFString *)arg1;
@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
- (void).cxx_destruct;
- (id)capacity:(id)arg1;
@property(readonly, nonatomic) _Bool isInRetailDemoMode;
@property(readonly, nonatomic) double lastNetworkChangedTime;
@property(readonly, nonatomic) NSString *networkType;
@property(readonly, nonatomic) _Bool runningAnInternalBuild;
@property(readonly, nonatomic) _Bool isInAirplaneMode;
@property(readonly, nonatomic) _Bool isNetworkReachable;
@property(readonly, nonatomic) NSNumber *pixelRatio;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) NSString *appVersion;
- (_Bool)isAdvertisingTrackingEnabled;
- (id)advertisingIdentifier;
@property(readonly, nonatomic) NSString *vendorIdentifier;
@property(readonly, nonatomic) NSString *vendorID;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (id)asPrivateIKJSDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

