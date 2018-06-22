//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class DNDState;

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding>
{
    DNDState *_previousState;
    DNDState *_state;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) DNDState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) DNDState *previousState; // @synthesize previousState=_previousState;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPreviousState:(id)arg1 state:(id)arg2;

@end

