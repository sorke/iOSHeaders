//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _maxLabels;
    NSMutableArray *_measurements;
    struct {
        unsigned int maxLabels:1;
    } _has;
}

+ (Class)measurementType;
@property(retain, nonatomic) NSMutableArray *measurements; // @synthesize measurements=_measurements;
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
@property(nonatomic) _Bool hasMaxLabels;
@property(nonatomic) unsigned int maxLabels; // @synthesize maxLabels=_maxLabels;
- (id)measurementAtIndex:(unsigned long long)arg1;
- (unsigned long long)measurementsCount;
- (void)addMeasurement:(id)arg1;
- (void)clearMeasurements;

@end

