//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySessionInternal, NSArray;

@interface AVOutputDeviceDiscoverySession : NSObject
{
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;
}

+ (Class)defaultOutputDeviceDiscoverySessionImplClass;
+ (void)initialize;
- (void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1;
@property(readonly, nonatomic) _Bool devicePresenceDetected;
@property(readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property(readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(nonatomic) long long discoveryMode;
- (id)impl;
- (void)dealloc;
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (id)init;

@end
