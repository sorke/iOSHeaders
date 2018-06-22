//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBDecimalNumberValue.h"

@class INCodableAttribute, NSString, _INPBValueMetadata;

@interface _INPBDecimalNumberValue : PBCodable <_INPBDecimalNumberValue, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int exponent:1;
        unsigned int isNegative:1;
        unsigned int mantissa:1;
    } _has;
    _Bool _isNegative;
    int _exponent;
    unsigned long long _mantissa;
    _INPBValueMetadata *_valueMetadata;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) unsigned long long mantissa; // @synthesize mantissa=_mantissa;
@property(nonatomic) _Bool isNegative; // @synthesize isNegative=_isNegative;
@property(nonatomic) int exponent; // @synthesize exponent=_exponent;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(nonatomic) _Bool hasMantissa;
@property(nonatomic) _Bool hasIsNegative;
@property(nonatomic) _Bool hasExponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

