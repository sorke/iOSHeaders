//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreTelephonyClientCarrierBundleDelegate.h"
#import "CoreTelephonyClientDelegate.h"

@class CoreTelephonyClient, IMCTXPCServiceSubscriptionInfo, NSArray, NSMutableDictionary, NSString;

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate>
{
    CoreTelephonyClient *_coreTelephonyClient;
    NSMutableDictionary *_cachedCarrierSettings;
    IMCTXPCServiceSubscriptionInfo *_ctSubscriptionInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo; // @synthesize ctSubscriptionInfo=_ctSubscriptionInfo;
@property(retain, nonatomic) NSMutableDictionary *cachedCarrierSettings; // @synthesize cachedCarrierSettings=_cachedCarrierSettings;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
- (void).cxx_destruct;
- (void)subscriptionInfoDidChange;
- (void)_resetSubscriptionInfo;
- (_Bool)deviceSupportsMultipleSubscriptions;
- (void)carrierBundleChange:(id)arg1;
@property(readonly, nonatomic) NSString *ctPhoneNumber;
- (id)ctSubscriptionInfoWithError:(id)arg1;
@property(readonly, nonatomic) NSArray *ctServiceSubscriptions;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)arg1 key:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)_getCachedCarrierSettingOrReadFromBundleForCarrierBundleKey:(id)arg1 forContext:(id)arg2 defaultValue:(id)arg3;
- (void)_setCachedCarrierSettingValue:(id)arg1 forCarrierBundleKey:(id)arg2 forPhoneNumber:(id)arg3;
- (id)_getCachedCarrierSettingValueForCarrierBundleKey:(id)arg1 forPhoneNumber:(id)arg2;
- (void)_setCarrierSettings:(id)arg1 phoneNumber:(id)arg2;
- (id)_getCarrierSettingsForPhoneNumber:(id)arg1;
- (void)_resetCachedCarrierSettingsForPhoneNumber:(id)arg1;
- (id)_createSettingsDictionaryPerPhoneNumber:(id)arg1;
- (id)newSubscriptionContextWithSlot:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

