//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchScreenshotRequest : DMFTaskRequest
{
    unsigned long long _maxWidth;
    unsigned long long _maxHeight;
    NSString *_sessionToken;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(nonatomic) unsigned long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) unsigned long long maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

