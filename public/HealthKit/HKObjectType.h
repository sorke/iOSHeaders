//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface HKObjectType : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    long long _code;
    Class _dataObjectClass;
    HKObjectType *_parentType;
}

+ (_Bool)supportsSecureCoding;
+ (id)fitnessFriendWorkoutType;
+ (id)fitnessFriendAchievementType;
+ (id)fitnessFriendActivitySnapshotType;
+ (id)irregularlyIrregularPulseType;
+ (id)heartStudyEventType;
+ (id)tachycardiaType;
+ (id)heartRateType;
+ (id)watchActivationType;
+ (id)deepBreathingSessionType;
+ (id)coachingEventType;
+ (id)activityCacheType;
+ (id)briskMinuteDataType;
+ (id)calorieGoal;
+ (id)_objectTypesFromIdentifierArray:(id)arg1 error:(id *)arg2;
+ (id)_typeWithIdentifier:(id)arg1;
+ (id)activitySummaryType;
+ (id)workoutType;
+ (id)_objectTypeWithIdentifier:(id)arg1 class:(Class)arg2 lookupTable:(id)arg3;
+ (id)seriesTypeForIdentifier:(id)arg1;
+ (id)documentTypeForIdentifier:(id)arg1;
+ (id)correlationTypeForIdentifier:(id)arg1;
+ (id)characteristicTypeForIdentifier:(id)arg1;
+ (id)categoryTypeForIdentifier:(id)arg1;
+ (id)quantityTypeForIdentifier:(id)arg1;
+ (id)dataTypeWithCode:(long long)arg1;
+ (id)_allTypesWithIdentifierTable:(id)arg1;
+ (id)_allQuantityTypes;
+ (id)_allCorrelationTypes;
+ (id)_allCategoryTypes;
+ (id)_typesIncludingParentTypes:(id)arg1;
+ (id)_allTypesOfClass:(Class)arg1;
+ (id)_allDataTypeIdentifiers;
+ (void)_enumerateObjectTypesWithHandler:(CDUnknownBlockType)arg1;
+ (id)unknownRecordTypeForIdentifier:(id)arg1;
+ (id)medicationOrderTypeForIdentifier:(id)arg1;
+ (id)allergyRecordTypeForIdentifier:(id)arg1;
+ (id)accountOwnerTypeForIdentifier:(id)arg1;
+ (id)objectTypeForWorkoutMetric:(unsigned long long)arg1;
+ (id)procedureRecordTypeForIdentifier:(id)arg1;
+ (id)diagnosticTestResultTypeForIdentifier:(id)arg1;
+ (id)conditionRecordTypeForIdentifier:(id)arg1;
+ (id)medicationDispenseRecordTypeForIdentifier:(id)arg1;
+ (id)diagnosticTestReportTypeForIdentifier:(id)arg1;
+ (_Bool)_allowAuthorizationForSharing:(_Bool)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4;
+ (_Bool)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (_Bool)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (id)clinicalTypeForIdentifier:(id)arg1;
+ (id)vaccinationRecordTypeForIdentifier:(id)arg1;
+ (id)medicationRecordTypeForIdentifier:(id)arg1;
@property(retain, nonatomic) HKObjectType *parentType; // @synthesize parentType=_parentType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=_isClinicalType) _Bool _clinicalType;
- (id)_predicateForSDKVersion:(unsigned int)arg1;
- (_Bool)_requiresAuthorization;
@property(readonly, nonatomic) _Bool isClinicalType;
@property(readonly, nonatomic) Class dataObjectClass;
@property(readonly, nonatomic) long long code;
@property(readonly) NSString *identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithDefinition:(CDStruct_6b208136 *)arg1;
- (id)init;
- (id)hk_localizedNameForAuthSheet;
- (id)hk_localizedNameForLocale:(id)arg1;
- (id)hk_localizedName;
- (id)_hk_localizedNameKey;
- (_Bool)_allowAuthorizationForReadingWithEntitlements:(id)arg1;
- (_Bool)_allowAuthorizationForSharingWithEntitlements:(id)arg1;

@end

