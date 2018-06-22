//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOStyleAttributes, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitBrand : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    unsigned int _brandIndex;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    struct {
        unsigned int muid:1;
        unsigned int brandIndex:1;
    } _has;
}

@property(retain, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned int brandIndex; // @synthesize brandIndex=_brandIndex;
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
@property(readonly, nonatomic) _Bool hasNameDisplayString;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) _Bool hasBrandIndex;

@end

