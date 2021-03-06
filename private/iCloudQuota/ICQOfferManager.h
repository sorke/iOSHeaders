//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICQOffer, NSNumber, NSObject<OS_dispatch_queue>, NSTimer;

@interface ICQOfferManager : NSObject
{
    NSObject<OS_dispatch_queue> *_cachedOfferQueue;
    ICQOffer *_cachedOffer;
    NSTimer *_invalidationTimer;
    _Bool _isRegisteredForDarwinNotifications;
}

+ (id)defaultBundleIdentifier;
+ (id)sharedOfferManager;
+ (id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2;
+ (id)defaultPlaceholderKeys;
+ (_Bool)_legacyBuddyOfferMightNeedPresenting;
+ (_Bool)buddyOfferMightNeedPresenting;
+ (id)ckBackupDeviceID;
- (void).cxx_destruct;
- (void)_firedInvalidationTimer:(id)arg1;
- (void)_teardownInvalidationTimer;
- (void)_setupTimerForInvalidationDate:(id)arg1;
- (void)_unregisterForDarwinNotifications;
- (void)_registerForDarwinNotifications;
- (void)_handlePushReceivedDarwinNotification;
- (_Bool)fetchOfferIfNeeded;
- (void)_refetchOffer;
@property(retain, nonatomic) ICQOffer *cachedOffer;
- (void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_shouldUseOffer:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getOfferForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getOfferWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentOfferForBundleIdentifier:(id)arg1;
- (id)currentOffer;
- (void)dealloc;
- (id)init;
- (void)updateOfferId:(id)arg1 buttonId:(id)arg2 info:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clearFollowups;
@property(nonatomic, getter=isBuddyOfferEnabled) _Bool buddyOfferEnabled;
@property(readonly, nonatomic) NSNumber *photosLibrarySize;
@property(retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property(nonatomic, getter=isSimulatedDeviceStorageAlmostFull) _Bool simulatedDeviceStorageAlmostFull;
@property(readonly, nonatomic) _Bool isDeviceStorageAlmostFull;
- (void)teardownCachedOffers;
- (void)teardownCachedBuddyOffer;
- (void)teardownCachedOffer;
- (void)postBuddyOfferType:(id)arg1;
- (void)postOfferType:(id)arg1;
- (void)forcePostFollowup;

@end

