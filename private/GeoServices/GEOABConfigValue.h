//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABConfigValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _doubleValue;
    long long _intValue;
    NSString *_stringValue;
    _Bool _boolValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int boolValue:1;
    } _has;
}

@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long intValue; // @synthesize intValue=_intValue;
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
@property(nonatomic) _Bool hasBoolValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasIntValue;

@end

