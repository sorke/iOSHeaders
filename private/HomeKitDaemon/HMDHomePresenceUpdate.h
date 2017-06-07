//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDHomePresence;

@interface HMDHomePresenceUpdate : HMFObject
{
    _Bool _update;
    HMDHomePresence *_homePresence;
    HMDDevice *_causingDevice;
}

@property(readonly, nonatomic) HMDDevice *causingDevice; // @synthesize causingDevice=_causingDevice;
@property(readonly, nonatomic, getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(readonly, nonatomic) HMDHomePresence *homePresence; // @synthesize homePresence=_homePresence;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHomePresence:(id)arg1 update:(_Bool)arg2 causingDevice:(id)arg3;

@end
