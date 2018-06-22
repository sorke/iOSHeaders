//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDTransportHint, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _searchLocationParametersType;
    GEOPDTransportHint *_searchTransportHint;
    struct {
        unsigned int searchLocationParametersType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDTransportHint *searchTransportHint; // @synthesize searchTransportHint=_searchTransportHint;
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
@property(readonly, nonatomic) _Bool hasSearchTransportHint;
- (int)StringAsSearchLocationParametersType:(id)arg1;
- (id)searchLocationParametersTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchLocationParametersType;
@property(nonatomic) int searchLocationParametersType; // @synthesize searchLocationParametersType=_searchLocationParametersType;

@end

