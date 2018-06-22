//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemModule.h"

@class HFConditionCollection, HMHome, HUTriggerConditionEditorExpandingSectionModule, HUTriggerCustomConditionEditorSectionModule, NSSet;

@interface HUTriggerConditionEditorItemModule : HFItemModule
{
    NSSet *_itemProviders;
    HFConditionCollection *_conditionCollection;
    HMHome *_home;
    NSSet *_blacklistedConditionTypes;
    HUTriggerConditionEditorExpandingSectionModule *_timeConditionModule;
    HUTriggerConditionEditorExpandingSectionModule *_locationConditionModule;
    HUTriggerCustomConditionEditorSectionModule *_customConditionsModule;
}

@property(retain, nonatomic) HUTriggerCustomConditionEditorSectionModule *customConditionsModule; // @synthesize customConditionsModule=_customConditionsModule;
@property(retain, nonatomic) HUTriggerConditionEditorExpandingSectionModule *locationConditionModule; // @synthesize locationConditionModule=_locationConditionModule;
@property(retain, nonatomic) HUTriggerConditionEditorExpandingSectionModule *timeConditionModule; // @synthesize timeConditionModule=_timeConditionModule;
@property(readonly, nonatomic) NSSet *blacklistedConditionTypes; // @synthesize blacklistedConditionTypes=_blacklistedConditionTypes;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HFConditionCollection *conditionCollection; // @synthesize conditionCollection=_conditionCollection;
@property(retain, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
- (void).cxx_destruct;
- (_Bool)_isConditionOptionItem:(id)arg1 ofType:(unsigned long long)arg2;
- (id)_sectionModuleForItem:(id)arg1;
- (id)_moduleForConditionOptionItem:(id)arg1;
- (id)_expandingSectionModuleForConditionType:(unsigned long long)arg1;
- (id)_expandingSectionModules;
- (id)_allSectionModules;
- (void)_reloadConditionForExpandingSectionModule:(id)arg1 remainingConditions:(id)arg2;
- (void)_reloadConditionsFromConditionCollection;
- (void)_buildItemProviders;
- (_Bool)isCustomConditionSwitchItem:(id)arg1;
- (void)setCustomConditionEnabled:(_Bool)arg1 forItem:(id)arg2;
- (_Bool)isShowConditionOptionsItem:(id)arg1;
- (void)setSelectedConditionOptionItem:(id)arg1 forType:(unsigned long long)arg2;
- (void)setShowConditionOptions:(_Bool)arg1 forType:(unsigned long long)arg2;
- (_Bool)shouldShowConditionOptionsForType:(unsigned long long)arg1;
- (void)conditionCollectionDidChange;
- (unsigned long long)conditionTypeForItem:(id)arg1;
- (void)updateCondition:(id)arg1 forOptionItem:(id)arg2;
- (id)conditionForOptionItem:(id)arg1;
- (_Bool)doesConditionOptionItemRequireInitialConfiguration:(id)arg1;
- (_Bool)isConditionOptionItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 conditionCollection:(id)arg3 blacklistedConditionTypes:(id)arg4;

@end

