//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBLocalDate.h"

@class INCodableAttribute, NSString;

@interface _INPBLocalDate : PBCodable <_INPBLocalDate, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int dayOfMonth:1;
        unsigned int dayOfWeek:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
    int _dayOfWeek;
    long long _dayOfMonth;
    long long _month;
    long long _year;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) long long dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasYear;
@property(nonatomic) _Bool hasMonth;
- (int)StringAsDayOfWeek:(id)arg1;
- (id)dayOfWeekAsString:(int)arg1;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) _Bool hasDayOfMonth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

