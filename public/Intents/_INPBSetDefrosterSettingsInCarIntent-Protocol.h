//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBIntentMetadata;

@protocol _INPBSetDefrosterSettingsInCarIntent <NSObject>
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasEnable;
@property(nonatomic) _Bool enable;
@property(nonatomic) _Bool hasDefroster;
@property(nonatomic) int defroster;
- (int)StringAsDefroster:(NSString *)arg1;
- (NSString *)defrosterAsString:(int)arg1;
@end

