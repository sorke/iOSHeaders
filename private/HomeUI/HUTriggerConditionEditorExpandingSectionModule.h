//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemModule.h"

#import "HUTriggerConditionEditorSectionModule.h"

@class HFCondition, HFItem, HFStaticItemProvider, HMHome, NSArray, NSString;

@interface HUTriggerConditionEditorExpandingSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule>
{
    _Bool _showOptions;
    unsigned long long _conditionType;
    HFItem *_showOptionsItem;
    NSArray *_optionItems;
    HFCondition *_condition;
    HFItem *_selectedOptionItem;
    HMHome *_home;
    HFStaticItemProvider *_itemProvider;
}

+ (id)sectionModuleForConditionType:(unsigned long long)arg1 itemUpdater:(id)arg2 home:(id)arg3;
@property(retain, nonatomic) HFStaticItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) _Bool showOptions; // @synthesize showOptions=_showOptions;
@property(retain, nonatomic) HFItem *selectedOptionItem; // @synthesize selectedOptionItem=_selectedOptionItem;
@property(retain, nonatomic) HFCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSArray *optionItems; // @synthesize optionItems=_optionItems;
@property(retain, nonatomic) HFItem *showOptionsItem; // @synthesize showOptionsItem=_showOptionsItem;
@property(readonly, nonatomic) unsigned long long conditionType; // @synthesize conditionType=_conditionType;
- (void).cxx_destruct;
- (id)preferredConditionFromConditions:(id)arg1;
- (_Bool)conditionIsDisabled;
- (id)conditionTitle;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)createNoConditionOptionItemWithTitle:(id)arg1;
- (_Bool)doesOptionItemRequireInitialUserConfiguration:(id)arg1;
- (id)updateSelectionWithCondition:(id)arg1;
- (id)selectOptionItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_buildItemProvider;
- (id)sectionID;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

