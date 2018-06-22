//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding>
{
    _Bool _avoidHitTesting;
    NSArray *_contextIDsToAlwaysSendTouches;
    NSArray *_contextIDsToExcludeFromHitTesting;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=shouldAvoidHitTesting) _Bool avoidHitTesting; // @synthesize avoidHitTesting=_avoidHitTesting;
@property(copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting; // @synthesize contextIDsToExcludeFromHitTesting=_contextIDsToExcludeFromHitTesting;
@property(copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches; // @synthesize contextIDsToAlwaysSendTouches=_contextIDsToAlwaysSendTouches;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

