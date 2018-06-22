//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDDevice, HMDResidentMesh, NSMutableDictionary, NSMutableSet;

@interface HMDResidentMeshMeshStorage : HMFObject
{
    _Bool _enabled;
    HMDResidentMesh *_owner;
    HMDDevice *_device;
    NSMutableSet *_accessoryUUIDs;
    unsigned long long _generationCount;
    NSMutableDictionary *_accessoryListWithLinkQuality;
}

@property(retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality; // @synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long generationCount; // @synthesize generationCount=_generationCount;
@property(retain, nonatomic) NSMutableSet *accessoryUUIDs; // @synthesize accessoryUUIDs=_accessoryUUIDs;
@property(retain, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak HMDResidentMesh *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)_requestStatus;
- (id)initWithDevice:(id)arg1 owner:(id)arg2;

@end

