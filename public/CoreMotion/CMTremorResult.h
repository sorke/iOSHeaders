//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface CMTremorResult : NSObject <NSCopying, NSSecureCoding>
{
    float _percentOffWrist;
    float _percentUnknown;
    float _percentNone;
    float _percentSlight;
    float _percentMild;
    float _percentModerate;
    float _percentStrong;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) float percentStrong; // @synthesize percentStrong=_percentStrong;
@property(readonly, nonatomic) float percentModerate; // @synthesize percentModerate=_percentModerate;
@property(readonly, nonatomic) float percentMild; // @synthesize percentMild=_percentMild;
@property(readonly, nonatomic) float percentSlight; // @synthesize percentSlight=_percentSlight;
@property(readonly, nonatomic) float percentNone; // @synthesize percentNone=_percentNone;
@property(readonly, nonatomic) float percentUnknown; // @synthesize percentUnknown=_percentUnknown;
@property(readonly, nonatomic) float percentOffWrist; // @synthesize percentOffWrist=_percentOffWrist;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult *)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentOffWrist:(float)arg3 percentUnknown:(float)arg4 percentNone:(float)arg5 percentSlight:(float)arg6 percentMild:(float)arg7 percentModerate:(float)arg8 percentStrong:(float)arg9;

@end

