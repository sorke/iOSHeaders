//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntentSlotResolutionResult.h"

@class INCodableAttribute, NSString, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@interface _INPBIntentSlotResolutionResult : PBCodable <_INPBIntentSlotResolutionResult, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    CDStruct_f953fb60 _has;
    int _type;
    _INPBPayloadConfirmation *_payloadConfirmation;
    _INPBPayloadNeedsDisambiguation *_payloadNeedsDisambiguation;
    _INPBPayloadNeedsValue *_payloadNeedsValue;
    _INPBPayloadSuccess *_payloadSuccess;
    _INPBPayloadUnsupported *_payloadUnsupported;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported; // @synthesize payloadUnsupported=_payloadUnsupported;
@property(retain, nonatomic) _INPBPayloadSuccess *payloadSuccess; // @synthesize payloadSuccess=_payloadSuccess;
@property(retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue; // @synthesize payloadNeedsValue=_payloadNeedsValue;
@property(retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation; // @synthesize payloadNeedsDisambiguation=_payloadNeedsDisambiguation;
@property(retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation; // @synthesize payloadConfirmation=_payloadConfirmation;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasPayloadUnsupported;
@property(readonly, nonatomic) _Bool hasPayloadSuccess;
@property(readonly, nonatomic) _Bool hasPayloadNeedsValue;
@property(readonly, nonatomic) _Bool hasPayloadNeedsDisambiguation;
@property(readonly, nonatomic) _Bool hasPayloadConfirmation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

