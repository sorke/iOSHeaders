//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _INPBHomeAttributeValue <NSObject>
@property(nonatomic) _Bool hasValueType;
@property(nonatomic) int valueType;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(copy, nonatomic) NSString *stringValue;
@property(nonatomic) _Bool hasIntegerValue;
@property(nonatomic) long long integerValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) double doubleValue;
@property(nonatomic) _Bool hasBooleanValue;
@property(nonatomic) _Bool booleanValue;
- (int)StringAsValueType:(NSString *)arg1;
- (NSString *)valueTypeAsString:(int)arg1;
@end

