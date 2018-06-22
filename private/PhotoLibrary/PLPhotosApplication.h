//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "UIApplicationDelegate.h"

@class BLActivityAlert, NSDictionary, NSSet, NSString, UIWindow;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate>
{
    _Bool _receivingRemoteControlEvents;
    UIWindow *_window;
    int _observeForRechabilityChanges;
    _Bool _isReachable;
    _Bool _isOnWifi;
    _Bool _photoStreamIsBusy;
    _Bool _sharedPhotoStreamIsBusy;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
    NSString *_currentTestName;
    NSDictionary *_currentTestOptions;
    NSSet *_notificationSuppressionContexts;
    BLActivityAlert *_iPhotoMigrationActivityAlert;
}

+ (void)initialize;
@property(retain, nonatomic) BLActivityAlert *iPhotoMigrationActivityAlert; // @synthesize iPhotoMigrationActivityAlert=_iPhotoMigrationActivityAlert;
@property(copy, nonatomic) NSSet *notificationSuppressionContexts; // @synthesize notificationSuppressionContexts=_notificationSuppressionContexts;
@property(retain, nonatomic) NSDictionary *currentTestOptions; // @synthesize currentTestOptions=_currentTestOptions;
@property(retain, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(readonly, nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;
@property(readonly, nonatomic) _Bool isReachable; // @synthesize isReachable=_isReachable;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;
- (void *)getSharedAddressBook;
- (id)getSharedContactStore;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updatePhotoStreamProgressDisplay;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_registerForPhotoStreamActivityNotifications;
- (_Bool)shouldAllowSBAlertSupression;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)setReceivingRemoteControlEvents:(_Bool)arg1;
- (_Bool)visitViewControllersWithBlock:(CDUnknownBlockType)arg1;
- (void)_cleanUpOutboundSharingAssets;
- (void)_updateSuspensionSettings;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)photosPreferencesChanged;
- (_Bool)useCompatibleSuspensionAnimation;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)sharedFinishedLaunching:(_Bool)arg1;
- (id)rootViewController;
- (id)mainWindow;
- (void)_setImageOptions;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

