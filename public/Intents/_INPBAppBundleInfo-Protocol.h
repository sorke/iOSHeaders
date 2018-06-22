//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBAppId, _INPBBuildId, _INPBIntentSupport, _INPBLocalizedProject, _INPBPlatformSupport;

@protocol _INPBAppBundleInfo <NSObject>
+ (Class)supportedPlatformsType;
+ (Class)localizedProjectsType;
+ (Class)intentSupportType;
@property(readonly, nonatomic) unsigned long long supportedPlatformsCount;
@property(copy, nonatomic) NSArray *supportedPlatforms;
@property(readonly, nonatomic) unsigned long long localizedProjectsCount;
@property(copy, nonatomic) NSArray *localizedProjects;
@property(readonly, nonatomic) unsigned long long intentSupportsCount;
@property(copy, nonatomic) NSArray *intentSupports;
@property(readonly, nonatomic) _Bool hasBuildId;
@property(retain, nonatomic) _INPBBuildId *buildId;
@property(readonly, nonatomic) _Bool hasAppId;
@property(retain, nonatomic) _INPBAppId *appId;
- (_INPBPlatformSupport *)supportedPlatformsAtIndex:(unsigned long long)arg1;
- (void)addSupportedPlatforms:(_INPBPlatformSupport *)arg1;
- (void)clearSupportedPlatforms;
- (_INPBLocalizedProject *)localizedProjectsAtIndex:(unsigned long long)arg1;
- (void)addLocalizedProjects:(_INPBLocalizedProject *)arg1;
- (void)clearLocalizedProjects;
- (_INPBIntentSupport *)intentSupportAtIndex:(unsigned long long)arg1;
- (void)addIntentSupport:(_INPBIntentSupport *)arg1;
- (void)clearIntentSupports;
@end

