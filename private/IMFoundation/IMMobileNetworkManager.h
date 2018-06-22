//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMFoundation/IMNetworkManager.h>

@class NSMutableSet, NSNumber, NSRecursiveLock;

@interface IMMobileNetworkManager : IMNetworkManager
{
    _Bool _registered;
    _Bool _shouldBringUpDataContext;
    _Bool _isDataContextAttached;
    _Bool _isDataContextActive;
    _Bool _isDataIndicatorNone;
    _Bool _isDataContextUsable;
    NSRecursiveLock *_lock;
    NSMutableSet *_cellAutoAssociationTokens;
    NSMutableSet *_wiFiAutoAssociationTokens;
}

@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // @synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens;
@property(nonatomic) _Bool isDataContextUsable; // @synthesize isDataContextUsable=_isDataContextUsable;
@property(nonatomic) _Bool isDataIndicatorNone; // @synthesize isDataIndicatorNone=_isDataIndicatorNone;
@property(nonatomic) _Bool isDataContextActive; // @synthesize isDataContextActive=_isDataContextActive;
@property(nonatomic) _Bool isDataContextAttached; // @synthesize isDataContextAttached=_isDataContextAttached;
@property(nonatomic) _Bool shouldBringUpDataContext; // @synthesize shouldBringUpDataContext=_shouldBringUpDataContext;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens; // @synthesize cellularAutoAssociationTokens=_cellAutoAssociationTokens;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)setDataConnectionActive:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isDataConnectionActive;
@property(readonly, nonatomic) _Bool isDataSwitchEnabled;
@property(readonly, nonatomic) _Bool hasLTEDataConnection;
@property(readonly, nonatomic) _Bool has2GDataConnection;
@property(readonly, nonatomic) _Bool dataConnectionExists;
@property(readonly, nonatomic) _Bool inValidSIMState;
- (void)showSIMUnlock;
- (id)_telephonyDataSIMStatus;
@property(readonly, nonatomic) _Bool isSIMLocked;
@property(readonly, nonatomic) _Bool isSIMRemoved;
@property(readonly, nonatomic) _Bool requiresSIMInserted;
- (void)_makeDataConnectionAvailable:(_Bool)arg1;
- (_Bool)_isDataConnectionAvailable;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) _Bool autoAssociateCellular;
- (void)showNetworkOptions;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) _Bool autoAssociateWiFi;
@property(readonly, nonatomic) _Bool isWiFiCaptive;
@property(readonly, nonatomic) _Bool isWiFiEnabled;
@property(readonly, nonatomic) _Bool isWiFiAssociated;
@property(readonly, nonatomic) _Bool isWiFiUsable;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property(readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property(readonly, nonatomic) _Bool willTryToSearchForWiFiNetwork;
@property(readonly, nonatomic) _Bool willTryToAutoAssociateWiFiNetwork;
@property(readonly, nonatomic) _Bool isHostingWiFiHotSpot;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
@property(readonly, nonatomic) _Bool disableFastDormancy;
- (void)_lockedAdjustCellularAutoAssociation;
- (void)_adjustCellularAutoAssociation;
@property(readonly, nonatomic) _Bool isAirplaneModeEnabled;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)init;

@end

