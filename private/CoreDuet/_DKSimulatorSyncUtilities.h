//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _DKSimulatorSyncUtilities : NSObject
{
}

+ (void)_triggerInsertAndTombstoneNotificationsInKnowledgeStorage:(id)arg1 forNonLocalNewEventsFromBeginDate:(id)arg2 toEndDate:(id)arg3;
+ (void)registerSimulatedSyncNotificationsWithKnowledgeStorage:(id)arg1;
+ (void)removeSourceDeviceIDFromLocalObjects:(id)arg1;
+ (void)addLocalDeviceIDSourceOnObjects:(id)arg1;
+ (id)predicateForEventsWithLocalSourceDeviceID;
+ (id)streamNamesToSync;
+ (id)deviceID;

@end

