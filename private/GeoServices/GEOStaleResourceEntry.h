//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOStaleResourceEntry : PBCodable <NSCopying>
{
    int _ageInSeconds;
    NSString *_canonicalName;
    NSString *_desiredName;
    NSString *_storedName;
    struct {
        unsigned int ageInSeconds:1;
    } _has;
}

@property(nonatomic) int ageInSeconds; // @synthesize ageInSeconds=_ageInSeconds;
@property(retain, nonatomic) NSString *desiredName; // @synthesize desiredName=_desiredName;
@property(retain, nonatomic) NSString *storedName; // @synthesize storedName=_storedName;
@property(retain, nonatomic) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAgeInSeconds;
@property(readonly, nonatomic) _Bool hasDesiredName;
@property(readonly, nonatomic) _Bool hasStoredName;
@property(readonly, nonatomic) _Bool hasCanonicalName;

@end

