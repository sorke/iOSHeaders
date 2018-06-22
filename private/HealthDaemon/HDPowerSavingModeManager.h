//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDAssertionObserver.h"

@class HDAssertionManager, NSObject<OS_dispatch_queue>, NSString, RadiosPreferences;

@interface HDPowerSavingModeManager : NSObject <HDAssertionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    RadiosPreferences *_radioPrefs;
    _Bool _powerSavingModeEnabled;
    _Bool _supportsCellularTelephony;
}

- (void).cxx_destruct;
- (void)_queue_powerSavingModeDidChange;
- (void)_powerSavingModeDidChange;
- (void)_stopObservingPowerSavingModeSetting;
- (void)_startObservingPowerSavingModeSetting;
- (void)_queue_disablePowerSavingIfNeeded;
- (void)_queue_enablePowerSavingIfNeeded;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2;
- (_Bool)supportsPowerSavingForActivityType:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

