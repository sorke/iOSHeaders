//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface NTPBTOCExposure : PBCodable <NSCopying>
{
    int _precedingLocation;
    NSData *_tocExposureId;
    struct {
        unsigned int precedingLocation:1;
    } _has;
}

@property(retain, nonatomic) NSData *tocExposureId; // @synthesize tocExposureId=_tocExposureId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTocExposureId;
- (int)StringAsPrecedingLocation:(id)arg1;
- (id)precedingLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasPrecedingLocation;
@property(nonatomic) int precedingLocation; // @synthesize precedingLocation=_precedingLocation;

@end

