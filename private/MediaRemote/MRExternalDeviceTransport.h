//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceTransport : NSObject
{
    _Bool _requiresCustomPairing;
}

@property(readonly, nonatomic) _Bool requiresCustomPairing; // @synthesize requiresCustomPairing=_requiresCustomPairing;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *hostname;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) void *deviceInfo;

@end
