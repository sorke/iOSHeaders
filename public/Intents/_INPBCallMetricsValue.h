//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBCallMetricsValue.h"

@class INCodableAttribute, NSString;

@interface _INPBCallMetricsValue : PBCodable <_INPBCallMetricsValue, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int callDuration:1;
        unsigned int timeToEstablish:1;
    } _has;
    double _callDuration;
    double _timeToEstablish;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) double timeToEstablish; // @synthesize timeToEstablish=_timeToEstablish;
@property(nonatomic) double callDuration; // @synthesize callDuration=_callDuration;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasTimeToEstablish;
@property(nonatomic) _Bool hasCallDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

