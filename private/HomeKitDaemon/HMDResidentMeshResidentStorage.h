//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFTimerDelegate.h"

@class HMDDevice, HMDResidentMesh, HMFTimer, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface HMDResidentMeshResidentStorage : HMFObject <HMFTimerDelegate>
{
    HMDResidentMesh *_owner;
    HMDDevice *_resident;
    NSMutableSet *_accessoryUUIDs;
    NSSet *_lastSentAccessoryUUIDs;
    HMFTimer *_transmitTimer;
    NSMutableDictionary *_accessoryListWithLinkQuality;
}

@property(retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality; // @synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality;
@property(retain, nonatomic) HMFTimer *transmitTimer; // @synthesize transmitTimer=_transmitTimer;
@property(retain, nonatomic) NSSet *lastSentAccessoryUUIDs; // @synthesize lastSentAccessoryUUIDs=_lastSentAccessoryUUIDs;
@property(retain, nonatomic) NSMutableSet *accessoryUUIDs; // @synthesize accessoryUUIDs=_accessoryUUIDs;
@property(nonatomic) __weak HMDDevice *resident; // @synthesize resident=_resident;
@property(nonatomic) __weak HMDResidentMesh *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)_transmitStatus:(_Bool)arg1;
- (id)_buildPayload;
- (void)_transmitAfter:(double)arg1;
- (void)_removeAccessory:(id)arg1 activateTimer:(_Bool)arg2;
- (void)_addAccessory:(id)arg1 activateTimer:(_Bool)arg2;
- (_Bool)_addAccessoryWithLinkQuality:(id)arg1 toList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)timerDidFire:(id)arg1;
- (id)initWithResident:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

