//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMAccessory.h"

@class NSSet;

@interface HMAccessory (HFMediaAdditions)
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
- (void)_pushSymptomUpdate;
@property(nonatomic) _Bool hf_fakeWiFiMismatchSymptom;
@property(readonly, nonatomic) _Bool hf_fakeShouldDisplayManualFixOption;
@property(readonly, nonatomic) _Bool hf_fakeITunesSymptom;
@property(readonly, nonatomic) _Bool hf_fakeICloudSymptom;
@property(readonly, nonatomic) _Bool hf_fakeHomeKitSymptom;
@property(readonly, nonatomic) _Bool hf_fakeGeneralFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeHardwareFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeInternetFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeWiFiPerformanceSymptom;
@property(readonly, nonatomic) _Bool hf_fakeWiFiSymptom;
@property(readonly, nonatomic) _Bool hf_fakeUnreachableError;
- (id)hf_fixSymptom:(id)arg1;
- (_Bool)hf_shouldDisplayManualFixOption;
- (_Bool)hf_shouldShowSoftwareUpdateInfo;
- (id)hf_identifyHomePod;
@property(readonly, nonatomic) _Bool hf_needsSoftwareUpdateToSupportBeingAddedToMediaSystem;
@property(readonly, nonatomic) unsigned long long hf_mediaAccessControlCapabilities;
@property(readonly, nonatomic) _Bool hf_isDumbSpeaker;
@property(readonly, nonatomic) _Bool hf_isAirPortExtremeSpeaker;
@property(readonly, nonatomic) _Bool hf_isAppleTV;
@property(readonly, nonatomic) _Bool hf_isHomePod;
@property(readonly, nonatomic) _Bool hf_isMediaAccessory;
@end

