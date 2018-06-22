//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@protocol _INPBStartWorkoutIntent <NSObject>
@property(readonly, nonatomic) _Bool hasWorkoutName;
@property(retain, nonatomic) _INPBDataString *workoutName;
@property(nonatomic) _Bool hasWorkoutLocationType;
@property(nonatomic) int workoutLocationType;
@property(nonatomic) _Bool hasWorkoutGoalUnitType;
@property(nonatomic) int workoutGoalUnitType;
@property(nonatomic) _Bool hasIsOpenEnded;
@property(nonatomic) _Bool isOpenEnded;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasGoalValue;
@property(retain, nonatomic) _INPBDouble *goalValue;
- (int)StringAsWorkoutLocationType:(NSString *)arg1;
- (NSString *)workoutLocationTypeAsString:(int)arg1;
- (int)StringAsWorkoutGoalUnitType:(NSString *)arg1;
- (NSString *)workoutGoalUnitTypeAsString:(int)arg1;
@end

