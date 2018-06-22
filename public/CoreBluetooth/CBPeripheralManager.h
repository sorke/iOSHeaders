//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreBluetooth/CBManager.h>

@class NSHashTable, NSLock, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumber;

@interface CBPeripheralManager : CBManager
{
    struct {
        unsigned int willRestoreState:1;
        unsigned int didAddService:1;
        unsigned int didReceiveReadRequest:1;
        unsigned int didReceiveWriteRequests:1;
        unsigned int centralDidSubscribeToCharacteristic:1;
        unsigned int centralDidUnsubscribeFromCharacteristic:1;
        unsigned int didStartAdvertising:1;
        unsigned int isReadyToUpdate:1;
        unsigned int centralDidConnect:1;
        unsigned int centralDidUpdateConnectionParameters:1;
        unsigned int didPublishL2CAPChannel:1;
        unsigned int didUnpublishL2CAPChannel:1;
        unsigned int didOpenL2CAPChannel:1;
    } _delegateFlags;
    _Bool _isAdvertising;
    _Bool _readyForUpdates;
    _Bool _waitingForReady;
    id <CBPeripheralManagerDelegate> _delegate;
    NSMapTable *_centrals;
    NSMutableArray *_services;
    NSMutableDictionary *_characteristicIDs;
    NSLock *_updateLock;
    NSNumber *_multipleAdvertisingSupported;
    NSHashTable *_l2capChannels;
}

+ (long long)authorizationStatus;
@property(readonly, retain, nonatomic) NSHashTable *l2capChannels; // @synthesize l2capChannels=_l2capChannels;
@property(retain, nonatomic) NSNumber *multipleAdvertisingSupported; // @synthesize multipleAdvertisingSupported=_multipleAdvertisingSupported;
@property(readonly, nonatomic) _Bool waitingForReady; // @synthesize waitingForReady=_waitingForReady;
@property(readonly, nonatomic) _Bool readyForUpdates; // @synthesize readyForUpdates=_readyForUpdates;
@property(readonly, retain, nonatomic) NSLock *updateLock; // @synthesize updateLock=_updateLock;
@property(readonly, retain, nonatomic) NSMutableDictionary *characteristicIDs; // @synthesize characteristicIDs=_characteristicIDs;
@property(readonly, retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(readonly, retain, nonatomic) NSMapTable *centrals; // @synthesize centrals=_centrals;
@property(nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property(nonatomic) __weak id <CBPeripheralManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)isMsgAllowedAlways:(unsigned short)arg1;
- (_Bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)handleL2CAPChannelUnpublished:(id)arg1;
- (void)handleL2CAPChannelPublished:(id)arg1;
- (void)handleL2CAPChannelClosed:(id)arg1;
- (void)handleL2CAPChannelOpened:(id)arg1;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleSolicitedServicesFound:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleRestoringState:(id)arg1;
@property(readonly, nonatomic, getter=supportsMultipleAdvertising) _Bool isSupportingMultipleAdvertising;
- (_Bool)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)respondToTransaction:(id)arg1 value:(id)arg2 attributeID:(id)arg3 result:(long long)arg4;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)addService:(id)arg1;
- (void)stopAdvertising;
- (void)startAdvertising:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)init;
- (void)removeAllL2CAPChannels;
- (id)l2capChannelForPeer:(id)arg1 withPsm:(unsigned short)arg2;
- (void)overrideLocalLeAddress:(id)arg1;
- (void)unpublishL2CAPChannel:(unsigned short)arg1;
- (void)publishL2CAPChannel:(unsigned short)arg1 requiresEncryption:(_Bool)arg2 options:(id)arg3;
- (void)publishL2CAPChannel:(unsigned short)arg1 requiresEncryption:(_Bool)arg2;
- (void)publishL2CAPChannelWithEncryption:(_Bool)arg1;
- (void)dealloc;
- (void)forEachCentral:(CDUnknownBlockType)arg1;
- (id)peerWithInfo:(id)arg1;
- (id)centralWithInfo:(id)arg1;

@end

