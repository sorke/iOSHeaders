//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemModule.h"

#import "HUTriggerConditionEditorSectionModule.h"

@class HFConditionItemProvider, HFTransformItemProvider, HMHome, NSMutableSet, NSSet, NSString;

@interface HUTriggerCustomConditionEditorSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule>
{
    HMHome *_home;
    HFConditionItemProvider *_sourceConditionItemProvider;
    HFTransformItemProvider *_itemProvider;
    NSMutableSet *_mutableEnabledConditions;
    NSMutableSet *_mutableDisabledConditions;
}

@property(retain, nonatomic) NSMutableSet *mutableDisabledConditions; // @synthesize mutableDisabledConditions=_mutableDisabledConditions;
@property(retain, nonatomic) NSMutableSet *mutableEnabledConditions; // @synthesize mutableEnabledConditions=_mutableEnabledConditions;
@property(readonly, nonatomic) HFTransformItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, nonatomic) HFConditionItemProvider *sourceConditionItemProvider; // @synthesize sourceConditionItemProvider=_sourceConditionItemProvider;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)_buildItemProviders;
- (void)setConditionEnabled:(_Bool)arg1 forCondition:(id)arg2;
- (_Bool)isConditionEnabled:(id)arg1;
- (id)itemForCondition:(id)arg1;
- (id)conditionForItem:(id)arg1;
- (void)updateEnabledConditions:(id)arg1 disabledConditions:(id)arg2;
@property(readonly, nonatomic) NSSet *disabledConditions;
@property(readonly, nonatomic) NSSet *enabledConditions;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
@property(readonly, nonatomic) unsigned long long conditionType;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)initWithItemUpdater:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

