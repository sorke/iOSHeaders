//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CLLocation, CLSLitePlacemark, NSArray, NSMutableArray, NSUUID;

@interface CLSLocationOfInterest : NSObject <NSSecureCoding>
{
    NSMutableArray *_visits;
    NSUUID *_identifier;
    long long _type;
    CLLocation *_location;
    CLSLitePlacemark *_placemark;
    CLLocation *_placemarkLocation;
    double _radius;
    unsigned long long _businessItemMuid;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long businessItemMuid; // @synthesize businessItemMuid=_businessItemMuid;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) CLLocation *placemarkLocation; // @synthesize placemarkLocation=_placemarkLocation;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)removeVisit:(id)arg1;
- (void)addVisit:(id)arg1;
@property(readonly, nonatomic) CLSLitePlacemark *placemark; // @synthesize placemark=_placemark;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 location:(id)arg3 placemark:(id)arg4 businessItemMuid:(unsigned long long)arg5 radius:(double)arg6;

@end

