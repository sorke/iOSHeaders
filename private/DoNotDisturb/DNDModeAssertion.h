//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class DNDModeAssertionDetails, NSDate, NSUUID;

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSDate *_startDate;
    DNDModeAssertionDetails *_details;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) DNDModeAssertionDetails *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3;

@end

