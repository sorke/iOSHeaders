//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBActivateCarSignalIntent.h"

@class INCodableAttribute, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBActivateCarSignalIntent : PBCodable <_INPBActivateCarSignalIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    CDStruct_95bda58d _signals;
    struct _has;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsSignals:(id)arg1;
- (id)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long signalsCount;
- (void)addSignals:(int)arg1;
- (void)clearSignals;
@property(readonly, nonatomic) int *signals;
- (void)setSignals:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

