//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSObject<OS_xpc_object>;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy
{
    unsigned int _contextId;
    NSObject<OS_xpc_object> *_assertionEndpoint;
    double _initialTouchTimestamp;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double initialTouchTimestamp; // @synthesize initialTouchTimestamp=_initialTouchTimestamp;
@property(readonly, nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
- (void)setAssertionEndpoint:(id)arg1;
- (id)assertionEndpoint;
- (void).cxx_destruct;
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextId:(unsigned int)arg1 initialTouchTimestamp:(double)arg2;

@end

