//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDBounds, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _mappedCategorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
}

+ (id)spatialLookupResultForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMappedCategorys:(id)arg1;
- (id)mappedCategorysAsString:(int)arg1;
- (void)setMappedCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)mappedCategoryAtIndex:(unsigned long long)arg1;
- (void)addMappedCategory:(int)arg1;
- (void)clearMappedCategorys;
@property(readonly, nonatomic) int *mappedCategorys;
@property(readonly, nonatomic) unsigned long long mappedCategorysCount;
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)dealloc;

@end

