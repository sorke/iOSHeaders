//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimeZone;

@protocol IKAppDeviceConfig <NSObject>
- (NSString *)storeFrontCountryCode;
- (NSString *)systemLanguage;
- (NSTimeZone *)timeZone;
- (_Bool)isTimeZoneSet;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoPreviewFormat;
- (unsigned long long)preferredVideoFormat;

@optional
- (NSString *)bundleIdentifier;
@end

