//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSData, NSString;

@interface DMFOpenAppRequest : DMFTaskRequest
{
    _Bool _lockInApp;
    NSString *_bundleIdentifier;
    NSString *_activityType;
    NSData *_activityData;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(nonatomic) _Bool lockInApp; // @synthesize lockInApp=_lockInApp;
@property(copy, nonatomic) NSData *activityData; // @synthesize activityData=_activityData;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

