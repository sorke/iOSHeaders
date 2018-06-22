//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBCondition, _INPBTemperature;

@protocol _INPBTemperatureList <NSObject>
+ (Class)temperatureType;
@property(readonly, nonatomic) unsigned long long temperaturesCount;
@property(copy, nonatomic) NSArray *temperatures;
@property(readonly, nonatomic) _Bool hasCondition;
@property(retain, nonatomic) _INPBCondition *condition;
- (_INPBTemperature *)temperatureAtIndex:(unsigned long long)arg1;
- (void)addTemperature:(_INPBTemperature *)arg1;
- (void)clearTemperatures;
@end

