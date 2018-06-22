//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntentMetadata.h"

@class INCodableAttribute, NSArray, NSString, _INPBString;

@interface _INPBIntentMetadata : PBCodable <_INPBIntentMetadata, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    CDStruct_95bda58d _requiredEntitlements;
    struct {
        unsigned int executionContext:1;
        unsigned int intentCategory:1;
        unsigned int backgroundLaunch:1;
        unsigned int confirmed:1;
        unsigned int triggerMethod:1;
        unsigned int userConfirmationRequired:1;
    } _has;
    _Bool _backgroundLaunch;
    _Bool _confirmed;
    _Bool _userConfirmationRequired;
    int _executionContext;
    int _intentCategory;
    int _triggerMethod;
    NSString *_categoryVerb;
    NSString *_launchId;
    NSString *_nanoLaunchId;
    NSString *_systemExtensionBundleId;
    NSString *_intentDescription;
    NSString *_intentId;
    NSString *_originatingDeviceIdsIdentifier;
    NSArray *_parameterImages;
    NSString *_suggestedInvocationPhrase;
    _INPBString *_userUtterance;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)parameterImagesType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBString *userUtterance; // @synthesize userUtterance=_userUtterance;
@property(nonatomic) _Bool userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property(nonatomic) int triggerMethod; // @synthesize triggerMethod=_triggerMethod;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase; // @synthesize suggestedInvocationPhrase=_suggestedInvocationPhrase;
@property(copy, nonatomic) NSArray *parameterImages; // @synthesize parameterImages=_parameterImages;
@property(copy, nonatomic) NSString *originatingDeviceIdsIdentifier; // @synthesize originatingDeviceIdsIdentifier=_originatingDeviceIdsIdentifier;
@property(copy, nonatomic) NSString *intentId; // @synthesize intentId=_intentId;
@property(copy, nonatomic) NSString *intentDescription; // @synthesize intentDescription=_intentDescription;
@property(nonatomic) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic) _Bool backgroundLaunch; // @synthesize backgroundLaunch=_backgroundLaunch;
@property(copy, nonatomic) NSString *systemExtensionBundleId; // @synthesize systemExtensionBundleId=_systemExtensionBundleId;
@property(copy, nonatomic) NSString *nanoLaunchId; // @synthesize nanoLaunchId=_nanoLaunchId;
@property(copy, nonatomic) NSString *launchId; // @synthesize launchId=_launchId;
@property(nonatomic) int intentCategory; // @synthesize intentCategory=_intentCategory;
@property(nonatomic) int executionContext; // @synthesize executionContext=_executionContext;
@property(copy, nonatomic) NSString *categoryVerb; // @synthesize categoryVerb=_categoryVerb;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasUserUtterance;
@property(nonatomic) _Bool hasUserConfirmationRequired;
- (int)StringAsTriggerMethod:(id)arg1;
- (id)triggerMethodAsString:(int)arg1;
@property(nonatomic) _Bool hasTriggerMethod;
@property(readonly, nonatomic) _Bool hasSuggestedInvocationPhrase;
- (id)parameterImagesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long parameterImagesCount;
- (void)addParameterImages:(id)arg1;
- (void)clearParameterImages;
@property(readonly, nonatomic) _Bool hasOriginatingDeviceIdsIdentifier;
@property(readonly, nonatomic) _Bool hasIntentId;
@property(readonly, nonatomic) _Bool hasIntentDescription;
@property(nonatomic) _Bool hasConfirmed;
@property(nonatomic) _Bool hasBackgroundLaunch;
@property(readonly, nonatomic) _Bool hasSystemExtensionBundleId;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (id)requiredEntitlementsAsString:(int)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long requiredEntitlementsCount;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
@property(readonly, nonatomic) int *requiredEntitlements;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasNanoLaunchId;
@property(readonly, nonatomic) _Bool hasLaunchId;
- (int)StringAsIntentCategory:(id)arg1;
- (id)intentCategoryAsString:(int)arg1;
@property(nonatomic) _Bool hasIntentCategory;
- (int)StringAsExecutionContext:(id)arg1;
- (id)executionContextAsString:(int)arg1;
@property(nonatomic) _Bool hasExecutionContext;
@property(readonly, nonatomic) _Bool hasCategoryVerb;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

