//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPaymentRecord.h"

@class INCodableAttribute, NSString, _INPBContact, _INPBCurrencyAmount, _INPBPaymentMethodValue, _INPBString;

@interface _INPBPaymentRecord : PBCodable <_INPBPaymentRecord, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    CDStruct_47fe53f2 _has;
    int _status;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBCurrencyAmount *_feeAmount;
    _INPBString *_note;
    _INPBContact *_payee;
    _INPBContact *_payer;
    _INPBPaymentMethodValue *_paymentMethod;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBPaymentMethodValue *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) _INPBContact *payer; // @synthesize payer=_payer;
@property(retain, nonatomic) _INPBContact *payee; // @synthesize payee=_payee;
@property(retain, nonatomic) _INPBString *note; // @synthesize note=_note;
@property(retain, nonatomic) _INPBCurrencyAmount *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasPaymentMethod;
@property(readonly, nonatomic) _Bool hasPayer;
@property(readonly, nonatomic) _Bool hasPayee;
@property(readonly, nonatomic) _Bool hasNote;
@property(readonly, nonatomic) _Bool hasFeeAmount;
@property(readonly, nonatomic) _Bool hasCurrencyAmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

