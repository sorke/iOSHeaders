//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class _UIStatusBarDataActivityEntry, _UIStatusBarDataBackgroundActivityEntry, _UIStatusBarDataBatteryEntry, _UIStatusBarDataBluetoothEntry, _UIStatusBarDataBoolEntry, _UIStatusBarDataCellularEntry, _UIStatusBarDataEntry, _UIStatusBarDataIntegerEntry, _UIStatusBarDataLocationEntry, _UIStatusBarDataLockEntry, _UIStatusBarDataStringEntry, _UIStatusBarDataTetheringEntry, _UIStatusBarDataThermalEntry, _UIStatusBarDataWifiEntry;

@interface _UIStatusBarData : NSObject <NSCopying, NSSecureCoding>
{
    _UIStatusBarDataStringEntry *_timeEntry;
    _UIStatusBarDataStringEntry *_shortTimeEntry;
    _UIStatusBarDataStringEntry *_dateEntry;
    _UIStatusBarDataStringEntry *_personNameEntry;
    _UIStatusBarDataCellularEntry *_cellularEntry;
    _UIStatusBarDataWifiEntry *_wifiEntry;
    _UIStatusBarDataBatteryEntry *_mainBatteryEntry;
    _UIStatusBarDataBluetoothEntry *_bluetoothEntry;
    _UIStatusBarDataThermalEntry *_thermalEntry;
    _UIStatusBarDataActivityEntry *_activityEntry;
    _UIStatusBarDataTetheringEntry *_tetheringEntry;
    _UIStatusBarDataLocationEntry *_locationEntry;
    _UIStatusBarDataLockEntry *_lockEntry;
    _UIStatusBarDataBoolEntry *_quietModeEntry;
    _UIStatusBarDataBoolEntry *_electronicTollCollectionEntry;
    _UIStatusBarDataEntry *_rotationLockEntry;
    _UIStatusBarDataEntry *_airplaneModeEntry;
    _UIStatusBarDataEntry *_ttyEntry;
    _UIStatusBarDataEntry *_nikeEntry;
    _UIStatusBarDataEntry *_assistantEntry;
    _UIStatusBarDataEntry *_studentEntry;
    _UIStatusBarDataEntry *_vpnEntry;
    _UIStatusBarDataEntry *_liquidDetectionEntry;
    _UIStatusBarDataEntry *_airPlayEntry;
    _UIStatusBarDataEntry *_carPlayEntry;
    _UIStatusBarDataEntry *_alarmEntry;
    _UIStatusBarDataIntegerEntry *_volumeEntry;
    _UIStatusBarDataBackgroundActivityEntry *_backgroundActivityEntry;
    _UIStatusBarDataStringEntry *_backNavigationEntry;
    _UIStatusBarDataStringEntry *_forwardNavigationEntry;
}

+ (id)entryKeys;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) _UIStatusBarDataStringEntry *forwardNavigationEntry; // @synthesize forwardNavigationEntry=_forwardNavigationEntry;
@property(copy, nonatomic) _UIStatusBarDataStringEntry *backNavigationEntry; // @synthesize backNavigationEntry=_backNavigationEntry;
@property(copy, nonatomic) _UIStatusBarDataBackgroundActivityEntry *backgroundActivityEntry; // @synthesize backgroundActivityEntry=_backgroundActivityEntry;
@property(copy, nonatomic) _UIStatusBarDataIntegerEntry *volumeEntry; // @synthesize volumeEntry=_volumeEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *alarmEntry; // @synthesize alarmEntry=_alarmEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *carPlayEntry; // @synthesize carPlayEntry=_carPlayEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *airPlayEntry; // @synthesize airPlayEntry=_airPlayEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *liquidDetectionEntry; // @synthesize liquidDetectionEntry=_liquidDetectionEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *vpnEntry; // @synthesize vpnEntry=_vpnEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *studentEntry; // @synthesize studentEntry=_studentEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *assistantEntry; // @synthesize assistantEntry=_assistantEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *nikeEntry; // @synthesize nikeEntry=_nikeEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *ttyEntry; // @synthesize ttyEntry=_ttyEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *airplaneModeEntry; // @synthesize airplaneModeEntry=_airplaneModeEntry;
@property(copy, nonatomic) _UIStatusBarDataEntry *rotationLockEntry; // @synthesize rotationLockEntry=_rotationLockEntry;
@property(copy, nonatomic) _UIStatusBarDataBoolEntry *electronicTollCollectionEntry; // @synthesize electronicTollCollectionEntry=_electronicTollCollectionEntry;
@property(copy, nonatomic) _UIStatusBarDataBoolEntry *quietModeEntry; // @synthesize quietModeEntry=_quietModeEntry;
@property(copy, nonatomic) _UIStatusBarDataLockEntry *lockEntry; // @synthesize lockEntry=_lockEntry;
@property(copy, nonatomic) _UIStatusBarDataLocationEntry *locationEntry; // @synthesize locationEntry=_locationEntry;
@property(copy, nonatomic) _UIStatusBarDataTetheringEntry *tetheringEntry; // @synthesize tetheringEntry=_tetheringEntry;
@property(copy, nonatomic) _UIStatusBarDataActivityEntry *activityEntry; // @synthesize activityEntry=_activityEntry;
@property(copy, nonatomic) _UIStatusBarDataThermalEntry *thermalEntry; // @synthesize thermalEntry=_thermalEntry;
@property(copy, nonatomic) _UIStatusBarDataBluetoothEntry *bluetoothEntry; // @synthesize bluetoothEntry=_bluetoothEntry;
@property(copy, nonatomic) _UIStatusBarDataBatteryEntry *mainBatteryEntry; // @synthesize mainBatteryEntry=_mainBatteryEntry;
@property(copy, nonatomic) _UIStatusBarDataWifiEntry *wifiEntry; // @synthesize wifiEntry=_wifiEntry;
@property(copy, nonatomic) _UIStatusBarDataCellularEntry *cellularEntry; // @synthesize cellularEntry=_cellularEntry;
@property(copy, nonatomic) _UIStatusBarDataStringEntry *personNameEntry; // @synthesize personNameEntry=_personNameEntry;
@property(copy, nonatomic) _UIStatusBarDataStringEntry *dateEntry; // @synthesize dateEntry=_dateEntry;
@property(copy, nonatomic) _UIStatusBarDataStringEntry *shortTimeEntry; // @synthesize shortTimeEntry=_shortTimeEntry;
@property(copy, nonatomic) _UIStatusBarDataStringEntry *timeEntry; // @synthesize timeEntry=_timeEntry;
- (void).cxx_destruct;
- (void)makeUpdateFromData:(id)arg1;
- (id)updateFromData:(id)arg1;
- (id)dataByApplyingUpdate:(id)arg1 keys:(id)arg2;
- (void)applyUpdate:(id)arg1;
- (void)_applyUpdate:(id)arg1 keys:(id)arg2;
- (id)description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;

@end

