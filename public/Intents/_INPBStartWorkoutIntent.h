//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBStartWorkoutIntent.h"

@class INCodableAttribute, NSString, _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@interface _INPBStartWorkoutIntent : PBCodable <_INPBStartWorkoutIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int isOpenEnded:1;
        unsigned int workoutGoalUnitType:1;
        unsigned int workoutLocationType:1;
    } _has;
    _Bool _isOpenEnded;
    int _workoutGoalUnitType;
    int _workoutLocationType;
    _INPBDouble *_goalValue;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_workoutName;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBDataString *workoutName; // @synthesize workoutName=_workoutName;
@property(nonatomic) int workoutLocationType; // @synthesize workoutLocationType=_workoutLocationType;
@property(nonatomic) int workoutGoalUnitType; // @synthesize workoutGoalUnitType=_workoutGoalUnitType;
@property(nonatomic) _Bool isOpenEnded; // @synthesize isOpenEnded=_isOpenEnded;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDouble *goalValue; // @synthesize goalValue=_goalValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasWorkoutName;
- (int)StringAsWorkoutLocationType:(id)arg1;
- (id)workoutLocationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasWorkoutLocationType;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;
- (id)workoutGoalUnitTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasWorkoutGoalUnitType;
@property(nonatomic) _Bool hasIsOpenEnded;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasGoalValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

