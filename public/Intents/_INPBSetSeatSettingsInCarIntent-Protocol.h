//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBInteger, _INPBIntentMetadata;

@protocol _INPBSetSeatSettingsInCarIntent <NSObject>
@property(nonatomic) _Bool hasSeat;
@property(nonatomic) int seat;
@property(nonatomic) _Bool hasRelativeLevelSetting;
@property(nonatomic) int relativeLevelSetting;
@property(readonly, nonatomic) _Bool hasLevel;
@property(retain, nonatomic) _INPBInteger *level;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasEnableMassage;
@property(nonatomic) _Bool enableMassage;
@property(nonatomic) _Bool hasEnableHeating;
@property(nonatomic) _Bool enableHeating;
@property(nonatomic) _Bool hasEnableCooling;
@property(nonatomic) _Bool enableCooling;
- (int)StringAsSeat:(NSString *)arg1;
- (NSString *)seatAsString:(int)arg1;
- (int)StringAsRelativeLevelSetting:(NSString *)arg1;
- (NSString *)relativeLevelSettingAsString:(int)arg1;
@end

