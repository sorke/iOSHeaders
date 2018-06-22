//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTCacheableResource.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface AVTAvatarConfiguration : NSObject <AVTCacheableResource, NSCopying>
{
    NSMutableDictionary *_presetsStorage;
    NSMutableDictionary *_colorPresetsStorage;
}

+ (id)keyForSettingKind:(CDStruct_597dd055)arg1;
+ (id)configurationFromAvatar:(id)arg1 coreModel:(id)arg2;
+ (id)configurationColorPresetWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 coreModel:(id)arg3;
+ (id)configurationPresetWithPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2;
@property(readonly, nonatomic) NSMutableDictionary *colorPresetsStorage; // @synthesize colorPresetsStorage=_colorPresetsStorage;
@property(readonly, nonatomic) NSMutableDictionary *presetsStorage; // @synthesize presetsStorage=_presetsStorage;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyToAvatar:(id)arg1;
- (id)presetForSettingKind:(CDStruct_597dd055)arg1 storage:(id)arg2;
- (id)colorPresetForSettingKind:(CDStruct_597dd055)arg1;
- (id)presetForCategory:(long long)arg1;
- (id)presetsForStorage:(id)arg1;
- (id)colorPresets;
- (id)presets;
- (void)removePresetsForSettingKind:(CDStruct_597dd055)arg1 storage:(id)arg2;
- (void)removeColorPresetsForSettingKind:(CDStruct_597dd055)arg1;
- (void)removePresetsForCategory:(long long)arg1;
- (void)addConfigurationColorPreset:(id)arg1;
- (void)addColorPreset:(id)arg1;
- (void)addConfigurationPreset:(id)arg1;
- (void)addPreset:(id)arg1;
- (id)initWithPresets:(id)arg1 colorPresets:(id)arg2;
- (id)init;
- (unsigned long long)costForScope:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

