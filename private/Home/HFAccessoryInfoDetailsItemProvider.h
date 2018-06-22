//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFAccessoryInfoItem, HMAccessory, HMHome, NSMutableSet;

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider
{
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
    NSMutableSet *_accessoryInfoDetailItems;
    HMAccessory *_accessory;
    HFAccessoryInfoItem *_firmwareItem;
    HFAccessoryInfoItem *_softwareItem;
    HFAccessoryInfoItem *_wifiItem;
}

+ (id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3;
+ (CDUnknownBlockType)accessoryInfoServiceDetailComparator;
+ (id)preferredCharacteristicOrderArray;
@property(readonly, nonatomic) HFAccessoryInfoItem *wifiItem; // @synthesize wifiItem=_wifiItem;
@property(readonly, nonatomic) HFAccessoryInfoItem *softwareItem; // @synthesize softwareItem=_softwareItem;
@property(readonly, nonatomic) HFAccessoryInfoItem *firmwareItem; // @synthesize firmwareItem=_firmwareItem;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSMutableSet *accessoryInfoDetailItems; // @synthesize accessoryInfoDetailItems=_accessoryInfoDetailItems;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)toggleAccessoryInfoItem:(id)arg1;
- (_Bool)canToggleAccessoryInfoItem:(id)arg1;
- (id)initWithHome:(id)arg1 accessory:(id)arg2;
- (id)init;

@end

