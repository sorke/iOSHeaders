//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

#import "REPipedLocationReceiver.h"

@class CLLocation, NSLock, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, REObserverStore;

@interface REPipedLocationDonor : RESingleton <REPipedLocationReceiver>
{
    REObserverStore *_observers;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_location;
    NSLock *_locationAccessLock;
}

+ (void)_saveLocationIntoDefaultsWithLocation:(id)arg1;
+ (id)_locationFromDefaults;
- (void).cxx_destruct;
- (void)_handleInvalidation;
@property(readonly, nonatomic) CLLocation *location;
- (void)updateLocation:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

