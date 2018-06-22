//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString, NSUUID, RTMapItem;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding>
{
    id <GEOMapItem> _geoMapItem;
    double _latitude;
    double _longitude;
    double _uncertainty;
    double _confidence;
    NSUUID *_identifier;
    long long _type;
    long long _typeSource;
    RTMapItem *_mapItem;
    NSArray *_visits;
    NSString *_customLabel;
}

+ (_Bool)supportsSecureCoding;
+ (id)geoMapItemSourceToString:(long long)arg1;
+ (id)locationOfInterestTypeSourceToString:(long long)arg1;
+ (id)locationOfInterestTypeToString:(long long)arg1;
@property(readonly, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) long long typeSource; // @synthesize typeSource=_typeSource;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (long long)recentCompare:(id)arg1;
- (id)nameFromType:(long long)arg1;
@property(readonly, nonatomic) NSString *preferredName;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(long long)arg6 typeSource:(long long)arg7 visits:(id)arg8 customLabel:(id)arg9 mapItem:(id)arg10;
- (id)init;
@property(readonly, nonatomic) long long geoMapItemSource;

@end

