//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBLocalizedProject.h"

@class INCodableAttribute, NSString, _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@interface _INPBLocalizedProject : PBCodable <_INPBLocalizedProject, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    _INPBAppNames *_appNames;
    _INPBIntentVocabulary *_intentVocabulary;
    _INPBLanguageTag *_language;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBLanguageTag *language; // @synthesize language=_language;
@property(retain, nonatomic) _INPBIntentVocabulary *intentVocabulary; // @synthesize intentVocabulary=_intentVocabulary;
@property(retain, nonatomic) _INPBAppNames *appNames; // @synthesize appNames=_appNames;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(readonly, nonatomic) _Bool hasIntentVocabulary;
@property(readonly, nonatomic) _Bool hasAppNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

