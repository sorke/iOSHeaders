//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSData, NSDateInterval, NSUUID;

@protocol HDCollectedSensorDatum <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) NSData *resumeContext;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, copy, nonatomic) NSUUID *datumIdentifier;
@end

