//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntentResponsePayloadFailure.h"

@class INCodableAttribute, NSString;

@interface _INPBIntentResponsePayloadFailure : PBCodable <_INPBIntentResponsePayloadFailure, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int appLaunchRequested:1;
        unsigned int errorCode:1;
    } _has;
    _Bool _appLaunchRequested;
    int _errorCode;
    NSString *_enumTypeName;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *enumTypeName; // @synthesize enumTypeName=_enumTypeName;
@property(nonatomic) _Bool appLaunchRequested; // @synthesize appLaunchRequested=_appLaunchRequested;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasEnumTypeName;
@property(nonatomic) _Bool hasAppLaunchRequested;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

