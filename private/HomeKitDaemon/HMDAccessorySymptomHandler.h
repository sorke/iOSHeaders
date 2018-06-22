//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDAccessorySymptomsDelegate.h"
#import "HMDHomeMessageReceiver.h"
#import "HMFLogging.h"
#import "NSSecureCoding.h"

@class HMDAccessory, HMDSymptomManager, HMFMessageDispatcher, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDAccessorySymptomHandler : HMFObject <HMDAccessorySymptomsDelegate, NSSecureCoding, HMFLogging, HMDHomeMessageReceiver>
{
    NSUUID *_uuid;
    HMDAccessory *_accessory;
    NSSet *_syncedSymptoms;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDSymptomManager *_symptomManager;
    NSSet *_localSymptoms;
    NSUUID *_sfDeviceIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
@property(retain, nonatomic) NSUUID *sfDeviceIdentifier; // @synthesize sfDeviceIdentifier=_sfDeviceIdentifier;
@property(retain, nonatomic) NSSet *localSymptoms; // @synthesize localSymptoms=_localSymptoms;
@property(readonly, nonatomic) HMDSymptomManager *symptomManager; // @synthesize symptomManager=_symptomManager;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSSet *syncedSymptoms; // @synthesize syncedSymptoms=_syncedSymptoms;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)symptomManager:(id)arg1 didChangeSFDeviceIdentifier:(id)arg2;
- (void)symptomManager:(id)arg1 didChangeLocalSymptoms:(id)arg2;
- (void)symptomManager:(id)arg1 didChangeBroadcastedSymptoms:(id)arg2;
- (void)handleCurrentDeviceSymptomsChangedNotification:(id)arg1;
- (void)_handleFixErrorMessage:(id)arg1;
- (id)_filteredAccessorySymptomsForSymptoms:(id)arg1;
- (id)_filteredMediaSystemSymptomsForSymptoms:(id)arg1;
- (void)_updateBackingStoreModelWithNewSyncedSymptoms:(id)arg1;
- (void)handleNewSyncedSymptoms:(id)arg1 message:(id)arg2;
- (void)_updateStateWithNewSFDeviceIdentifier:(id)arg1;
- (void)_updateStateWithNewLocalSymptoms:(id)arg1;
- (void)_sendStatusUpdate;
- (void)_updateStateWithNewBroadcastedSymptoms:(id)arg1;
- (void)_refreshCurrentDeviceSymptoms;
- (void)refreshCurrentDeviceSymptoms;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerMessages;
- (void)handleAccessoryDeviceUpdated;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
@property(readonly, nonatomic) NSSet *symptoms;
- (id)logIdentifier;
- (id)initWithAccessory:(id)arg1 syncedSymptoms:(id)arg2 symptomManager:(id)arg3;
- (id)initWithAccessory:(id)arg1 syncedSymptoms:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

