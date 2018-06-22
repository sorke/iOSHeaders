//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDEnhancedFTMSData, HDFitnessMachineDataCharacteristicBase, HDFitnessMachineSessionRecoveryConfiguration, HDFitnessMachineStatus, HDHealthServiceOOBInfo, HKHealthService, NSArray, NSData, NSDate, NSString, NSUUID, _HKFitnessMachine;

@interface HDFitnessMachineSession : NSObject
{
    _Bool _waitingOnInitialMachineStatus;
    _Bool _waitingOnInitialMachineData;
    _Bool _dataTransferPermitted;
    _Bool _waitingOnMFA;
    _Bool _waitingOnBluetoothConnection;
    _Bool _waitingOnActivityType;
    NSUUID *_fitnessMachineSessionUUID;
    NSData *_nfcSessionIDData;
    unsigned long long _healthServiceSessionIdentifier;
    HKHealthService *_healthService;
    long long _serviceStatus;
    _HKFitnessMachine *_fitnessMachine;
    HDHealthServiceOOBInfo *_oobInfo;
    HDFitnessMachineStatus *_initialMachineStatus;
    HDFitnessMachineDataCharacteristicBase *_initialMachineData;
    HDEnhancedFTMSData *_initialEnhancedFTMSData;
    unsigned long long _connectionState;
    unsigned long long _machineState;
    NSDate *_machineStartDate;
    NSDate *_machineStateUpdateDate;
    NSArray *_oobDataArray;
}

+ (id)serviceFromRecoveryConfiguration:(id)arg1;
@property(retain, nonatomic) NSArray *oobDataArray; // @synthesize oobDataArray=_oobDataArray;
@property(readonly, nonatomic) _Bool waitingOnActivityType; // @synthesize waitingOnActivityType=_waitingOnActivityType;
@property(readonly, nonatomic) _Bool waitingOnBluetoothConnection; // @synthesize waitingOnBluetoothConnection=_waitingOnBluetoothConnection;
@property(readonly, nonatomic) _Bool waitingOnMFA; // @synthesize waitingOnMFA=_waitingOnMFA;
@property(readonly, nonatomic) _Bool dataTransferPermitted; // @synthesize dataTransferPermitted=_dataTransferPermitted;
@property(retain, nonatomic) NSDate *machineStateUpdateDate; // @synthesize machineStateUpdateDate=_machineStateUpdateDate;
@property(retain, nonatomic) NSDate *machineStartDate; // @synthesize machineStartDate=_machineStartDate;
@property(nonatomic) unsigned long long machineState; // @synthesize machineState=_machineState;
@property(nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) HDEnhancedFTMSData *initialEnhancedFTMSData; // @synthesize initialEnhancedFTMSData=_initialEnhancedFTMSData;
@property(retain, nonatomic) HDFitnessMachineDataCharacteristicBase *initialMachineData; // @synthesize initialMachineData=_initialMachineData;
@property(nonatomic) _Bool waitingOnInitialMachineData; // @synthesize waitingOnInitialMachineData=_waitingOnInitialMachineData;
@property(retain, nonatomic) HDFitnessMachineStatus *initialMachineStatus; // @synthesize initialMachineStatus=_initialMachineStatus;
@property(nonatomic) _Bool waitingOnInitialMachineStatus; // @synthesize waitingOnInitialMachineStatus=_waitingOnInitialMachineStatus;
@property(retain, nonatomic) HDHealthServiceOOBInfo *oobInfo; // @synthesize oobInfo=_oobInfo;
@property(retain, nonatomic) _HKFitnessMachine *fitnessMachine; // @synthesize fitnessMachine=_fitnessMachine;
@property(nonatomic) long long serviceStatus; // @synthesize serviceStatus=_serviceStatus;
@property(retain, nonatomic) HKHealthService *healthService; // @synthesize healthService=_healthService;
@property(nonatomic) unsigned long long healthServiceSessionIdentifier; // @synthesize healthServiceSessionIdentifier=_healthServiceSessionIdentifier;
@property(readonly, nonatomic) NSData *nfcSessionIDData; // @synthesize nfcSessionIDData=_nfcSessionIDData;
@property(readonly, nonatomic) NSUUID *fitnessMachineSessionUUID; // @synthesize fitnessMachineSessionUUID=_fitnessMachineSessionUUID;
- (void).cxx_destruct;
- (id)_oobDataArrayWithRandomValue:(id)arg1 confirmationValue:(id)arg2 sessionID:(id)arg3 btAddress:(id)arg4;
@property(readonly, nonatomic) NSArray *nfcConnectionHandoverData;
- (void)markActivityTypeProvided;
- (void)markMFAAuthenticated;
- (void)markDataTransferPermitted;
- (void)markBluetoothConnectionComplete;
@property(readonly, nonatomic) NSString *nfcSessionID;
@property(readonly, nonatomic) _Bool dataTransferRequirementsComplete;
- (void)setFitnessMachineName:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3;
@property(readonly, nonatomic) HDFitnessMachineSessionRecoveryConfiguration *recoveryConfiguration;
- (id)initWithRecoveryConfiguration:(id)arg1;
- (id)init;
- (id)initWithNFCSessionIDData:(id)arg1;
- (id)_initWithFitnessMachineSessionUUID:(id)arg1;

@end

