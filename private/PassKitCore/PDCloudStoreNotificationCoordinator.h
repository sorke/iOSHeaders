//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDCloudStoreContainerDelegate.h"
#import "PDPushNotificationConsumer.h"
#import "PDScheduledActivityClient.h"
#import "PKCloudStoreCoordinatorDelegate.h"

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, PDApplePayCloudStoreContainer, PDPassCloudStoreContainer, PDPushNotificationManager;

@interface PDCloudStoreNotificationCoordinator : NSObject <PDPushNotificationConsumer, PDCloudStoreContainerDelegate, PDScheduledActivityClient, PKCloudStoreCoordinatorDelegate>
{
    NSHashTable *_observers;
    PDPushNotificationManager *_pushNotificationManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_pushTopics;
    NSMutableArray *_containers;
    NSMutableDictionary *_containersCurrentlyProcessingPushNotifications;
    NSMutableDictionary *_containersThatShouldProcessPushNotifications;
    PDApplePayCloudStoreContainer *_applePayContainer;
    PDPassCloudStoreContainer *_passContainer;
}

+ (void)invalidateServerChangeTokens;
+ (_Bool)canInitalizeCloudStoreWithWebService:(id)arg1;
@property(retain, nonatomic) PDPassCloudStoreContainer *passContainer; // @synthesize passContainer=_passContainer;
@property(retain, nonatomic) PDApplePayCloudStoreContainer *applePayContainer; // @synthesize applePayContainer=_applePayContainer;
- (void).cxx_destruct;
- (void)_unregisterForPushNotifications;
- (void)_registerForPushNotifications;
- (id)_containerForItemType:(unsigned long long)arg1;
- (id)_errorWithCode:(long long)arg1 description:(id)arg2;
- (id)_containerWithIdentifier:(id)arg1;
- (id)_containerWithZoneName:(id)arg1;
- (void)applyPushNotificationToken:(id)arg1;
- (void)_processCloudStorePushNotificationForContainer:(id)arg1;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)pushNotificationTopics;
- (void)_unscheduleBackgroundContainerSetupActivities;
- (_Bool)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;
- (void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;
- (void)_recordAggdCloudStoreBackgroundContainerSetupResult:(_Bool)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2;
- (id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1;
- (double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1;
- (void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1;
- (void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (void)noteCloudSyncPassesSwitchChanged;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(id)arg1;
- (void)cloudStoreContainer:(id)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreContainer:(id)arg1 createdZoneWithName:(id)arg2;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetContainerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 shouldScheduleBackgroundActivity:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPushNotificationManager:(id)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3 initalizeCloudStoreManager:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

