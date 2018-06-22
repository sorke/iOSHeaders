//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPlaceList.h"

@class INCodableAttribute, NSArray, NSString, _INPBCondition;

@interface _INPBPlaceList : PBCodable <_INPBPlaceList, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_places;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)placeType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *places; // @synthesize places=_places;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)placeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long placesCount;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
@property(readonly, nonatomic) _Bool hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

