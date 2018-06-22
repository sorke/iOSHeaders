//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMSDevice : NSObject
{
}

+ (id)_systemVersionDictionary;
+ (id)_dataForNVRAMKey:(id)arg1;
+ (id)_compatibleProductType;
+ (_Bool)deviceIsSeedBuild;
+ (_Bool)deviceIsiPod;
+ (_Bool)deviceIsiPhone;
+ (_Bool)deviceIsiPad;
+ (_Bool)deviceIsInternalBuild;
+ (_Bool)deviceIsAppleWatch;
+ (_Bool)deviceIsAppleTV;
+ (_Bool)deviceIsAudioAccessory;
+ (id)uniqueDeviceId;
+ (id)thinnedAppVariantId;
+ (id)serialNumber;
+ (id)productVersion;
+ (id)productType;
+ (id)MLBSerialNumber;
+ (id)macAddressData;
+ (id)macAddress;
+ (id)localIPAddress;
+ (id)hardwarePlatform;
+ (id)deviceGUID;
+ (id)buildVersion;
+ (id)deviceOffersForProductType:(unsigned long long)arg1;
+ (_Bool)deviceOffersContainProductType:(unsigned long long)arg1;
+ (void)registerCompanionWithSerialNumber:(id)arg1;
+ (_Bool)shouldPresentSetupOffersForAccount:(id)arg1;
+ (id)deviceOffersForType:(unsigned long long)arg1;
+ (_Bool)deviceOffersContainType:(unsigned long long)arg1;
+ (_Bool)isGift;
+ (_Bool)isEligibleForOffers;
+ (_Bool)expressedIntent;
+ (id)deviceOffers;

@end

