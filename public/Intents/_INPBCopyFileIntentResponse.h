//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBCopyFileIntentResponse.h"

@class INCodableAttribute, NSString, _INPBString;

@interface _INPBCopyFileIntentResponse : PBCodable <_INPBCopyFileIntentResponse, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    CDStruct_be739ab4 _has;
    _Bool _overwrite;
    _Bool _success;
    int _entityType;
    _INPBString *_destinationName;
    _INPBString *_entityName;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property(retain, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasOverwrite;
- (int)StringAsEntityType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEntityType;
@property(readonly, nonatomic) _Bool hasEntityName;
@property(readonly, nonatomic) _Bool hasDestinationName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

