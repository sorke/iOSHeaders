//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _INPBVoiceCommandDeviceInformation <NSObject>
@property(nonatomic) _Bool hasIsHomePodInUltimateMode;
@property(nonatomic) _Bool isHomePodInUltimateMode;
@property(nonatomic) _Bool hasDeviceIdiom;
@property(nonatomic) int deviceIdiom;
- (int)StringAsDeviceIdiom:(NSString *)arg1;
- (NSString *)deviceIdiomAsString:(int)arg1;
@end

