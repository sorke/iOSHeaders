//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CEMPayloadBase.h"

@class NSString;

@interface RMPCheckInProtocolCheckOutRequest : CEMPayloadBase
{
    NSString *_messageType;
    NSString *_topic;
    NSString *_UDID;
}

+ (_Bool)supportsSecureCoding;
+ (id)request;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serialize;
- (_Bool)loadFromDictionary:(id)arg1 error:(id *)arg2;

@end

