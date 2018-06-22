//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSetProfileInCarIntent.h"

@class INCodableAttribute, NSString, _INPBInteger, _INPBIntentMetadata, _INPBString;

@interface _INPBSetProfileInCarIntent : PBCodable <_INPBSetProfileInCarIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int defaultProfile:1;
    } _has;
    _Bool _defaultProfile;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_profileName;
    _INPBInteger *_profileNumber;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBInteger *profileNumber; // @synthesize profileNumber=_profileNumber;
@property(retain, nonatomic) _INPBString *profileName; // @synthesize profileName=_profileName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) _Bool defaultProfile; // @synthesize defaultProfile=_defaultProfile;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasProfileNumber;
@property(readonly, nonatomic) _Bool hasProfileName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(nonatomic) _Bool hasDefaultProfile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

