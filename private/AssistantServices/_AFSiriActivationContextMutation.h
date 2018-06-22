//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFSiriActivationContextMutating.h"

@class AFSiriActivationContext, NSDictionary, NSString;

@interface _AFSiriActivationContextMutation : NSObject <AFSiriActivationContextMutating>
{
    AFSiriActivationContext *_baseModel;
    unsigned long long _timestamp;
    long long _event;
    long long _source;
    NSString *_deviceID;
    NSDictionary *_userInfo;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasEvent:1;
        unsigned int hasSource:1;
        unsigned int hasDeviceID:1;
        unsigned int hasUserInfo:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setUserInfo:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setEvent:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

