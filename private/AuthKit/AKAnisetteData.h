//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSObjectROCKDeserializable.h"
#import "NSObjectROCKSerializable.h"
#import "NSSecureCoding.h"

@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSObjectROCKDeserializable, NSObjectROCKSerializable, NSSecureCoding>
{
    NSString *_machineID;
    NSString *_oneTimePassword;
    unsigned long long _routingInfo;
}

+ (id)rockDecodeWithXPCObject:(id)arg1 sessionManager:(id)arg2 error:(id *)arg3;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long routingInfo; // @synthesize routingInfo=_routingInfo;
@property(copy, nonatomic) NSString *oneTimePassword; // @synthesize oneTimePassword=_oneTimePassword;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
- (void).cxx_destruct;
- (id)rockEncodeWithSessionManager:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

