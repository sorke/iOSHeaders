//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMAccessorySettingGroup, NATreeNode, NSMutableDictionary, NSMutableSet;

@interface HFAccessorySettingsItemProvider : HFItemProvider
{
    HMAccessorySettingGroup *_settingGroup;
    CDUnknownBlockType _filter;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableDictionary *_tupleCache;
    NSMutableSet *_settingItems;
    NATreeNode *_parentNode;
}

+ (id)buildSettingsObjectForMediaProfileContainer:(id)arg1 settingGroup:(id)arg2 underNode:(id)arg3 cache:(id)arg4;
@property(readonly, nonatomic) NATreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) NSMutableSet *settingItems; // @synthesize settingItems=_settingItems;
@property(retain, nonatomic) NSMutableDictionary *tupleCache; // @synthesize tupleCache=_tupleCache;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(retain, nonatomic) HMAccessorySettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 settingGroup:(id)arg2;

@end

