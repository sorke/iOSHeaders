//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDate, NSString, NSUUID, RTLocation, RTLocationOfInterest, RTMapItem;

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _userSetLocation;
    _Bool _usualLocation;
    _Bool _confirmed;
    _Bool _locationFinalized;
    NSDate *_date;
    RTLocation *_location;
    NSString *_vehicleIdentifier;
    NSString *_notes;
    NSUUID *_identifier;
    NSData *_photo;
    RTMapItem *_mapItem;
    unsigned long long _locationQuality;
    RTLocationOfInterest *_nearbyLocationOfInterest;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool locationFinalized; // @synthesize locationFinalized=_locationFinalized;
@property(nonatomic) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(copy, nonatomic) RTLocationOfInterest *nearbyLocationOfInterest; // @synthesize nearbyLocationOfInterest=_nearbyLocationOfInterest;
@property(nonatomic) _Bool usualLocation; // @synthesize usualLocation=_usualLocation;
@property(nonatomic) unsigned long long locationQuality; // @synthesize locationQuality=_locationQuality;
@property(retain, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSData *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(nonatomic) _Bool userSetLocation; // @synthesize userSetLocation=_userSetLocation;
@property(copy, nonatomic) NSString *vehicleIdentifier; // @synthesize vehicleIdentifier=_vehicleIdentifier;
@property(copy, nonatomic) RTLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDate:(id)arg1 location:(id)arg2 vehicleIdentifier:(id)arg3 userSetLocation:(_Bool)arg4 notes:(id)arg5 identifier:(id)arg6 photo:(id)arg7 mapItem:(id)arg8 confirmed:(_Bool)arg9;
- (id)initWithDate:(id)arg1;
- (id)init;

@end

