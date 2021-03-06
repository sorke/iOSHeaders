//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKMedicalCoding, HKMedicalDate, HKMedicationRecordType, NSArray, NSString;

@interface HKMedicationRecord : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    NSArray *_medicationCodings;
    long long _assertionType;
    NSString *_asserter;
    HKMedicalDate *_assertionDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    NSArray *_reasonForUseCodings;
    _Bool _notTaken;
    NSArray *_reasonsNotTakenCodings;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalDate *_effectiveEndDate;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 medicationCodings:(id)arg10 assertionType:(long long)arg11 asserter:(id)arg12 assertionDate:(id)arg13 statusCoding:(id)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 reasonForUseCodings:(id)arg17 notTaken:(_Bool)arg18 reasonsNotTakenCodings:(id)arg19 effectiveStartDate:(id)arg20 effectiveEndDate:(id)arg21;
+ (id)defaultDisplayString;
+ (id)statusCodingPreferredSystems;
+ (id)reasonsNotTakenCodingsPreferredSystems;
+ (id)reasonForUseCodingsPreferredSystems;
+ (id)medicationCodingsPreferredSystems;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 medicationCodings:(id)arg9 assertionType:(long long)arg10 asserter:(id)arg11 assertionDate:(id)arg12 statusCoding:(id)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 reasonForUseCodings:(id)arg16 notTaken:(_Bool)arg17 reasonsNotTakenCodings:(id)arg18 effectiveStartDate:(id)arg19 effectiveEndDate:(id)arg20;
- (void).cxx_destruct;
@property(readonly, copy) HKMedicationRecordType *medicationRecordType;
- (id)_validateConfiguration;
- (void)_setEffectiveEndDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *effectiveEndDate;
- (void)_setEffectiveStartDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *effectiveStartDate;
- (void)_setReasonsNotTakenCodings:(id)arg1;
@property(readonly, copy) NSArray *reasonsNotTakenCodings;
- (void)_setNotTaken:(_Bool)arg1;
@property(readonly) _Bool notTaken;
- (void)_setReasonForUseCodings:(id)arg1;
@property(readonly, copy) NSArray *reasonForUseCodings;
- (void)_setEarliestDosageDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *earliestDosageDate;
- (void)_setDosages:(id)arg1;
@property(readonly, copy) NSArray *dosages;
- (void)_setStatusCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setAssertionDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *assertionDate;
- (void)_setAsserter:(id)arg1;
@property(readonly, copy) NSString *asserter;
- (void)_setAssertionType:(long long)arg1;
@property(readonly) long long assertionType;
- (void)_setMedicationCodings:(id)arg1;
@property(readonly, copy) NSArray *medicationCodings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)medicalRecordPreferredSystems;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)statusCodingTasks;
- (id)reasonsNotTakenCodingsTasks;
- (id)reasonForUseCodingsTasks;
- (id)medicationCodingsTasks;

@end

