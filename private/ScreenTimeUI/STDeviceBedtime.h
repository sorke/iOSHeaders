//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDateComponents;

@interface STDeviceBedtime : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _deviceBedtimeEnabled;
    _Bool _askForMoreTime;
    NSDateComponents *_start;
    NSDateComponents *_end;
}

+ (id)defaultBedtimeEnd;
+ (id)defaultBedtimeStart;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDateComponents *end; // @synthesize end=_end;
@property(copy, nonatomic) NSDateComponents *start; // @synthesize start=_start;
@property(nonatomic) _Bool askForMoreTime; // @synthesize askForMoreTime=_askForMoreTime;
@property(nonatomic) _Bool deviceBedtimeEnabled; // @synthesize deviceBedtimeEnabled=_deviceBedtimeEnabled;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_stDeviceBedtimeInitByParsingFamilyBedtimeAllPredicate:(id)arg1;
- (void)_stDeviceBedtimeInitByParsingPersonalBedtimePredicate:(id)arg1;
- (id)initWithActivation:(id)arg1;
- (id)initWithBlueprint:(id)arg1;
- (id)init;

@end

