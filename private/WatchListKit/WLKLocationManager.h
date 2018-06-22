//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate>
{
    int _didChangeNotificationToken;
    NSDictionary *_lastKnownLocation;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    CDUnknownBlockType _locationUpdateBlock;
    CLLocationManager *_clLocationManager;
    NSXPCConnection *_connection;
}

+ (id)defaultLocationManager;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int didChangeNotificationToken; // @synthesize didChangeNotificationToken=_didChangeNotificationToken;
@property(retain, nonatomic) CLLocationManager *clLocationManager; // @synthesize clLocationManager=_clLocationManager;
@property(copy, nonatomic) CDUnknownBlockType locationUpdateBlock; // @synthesize locationUpdateBlock=_locationUpdateBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
- (id)_connection;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)_supportPath;
- (void)_dictionaryOnDisk:(CDUnknownBlockType)arg1;
- (void)_writeToDisk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryOnDisk;
- (void)_writeToDisk;
- (void)_readFromDisk;
- (void)_refreshLastKnownLocationFromCache;
- (long long)_statusForCLAuthorizationStatus:(int)arg1;
- (id)_dictionaryForCLLocation:(id)arg1;
- (void)_requestCLLocationUpdates:(CDUnknownBlockType)arg1;
- (void)_requestRecentCLLocation:(CDUnknownBlockType)arg1;
- (void)setLastKnownLocation:(id)arg1;
- (double)_getLastKnownLocation:(id)arg1 distanceFromLocation:(id)arg2;
- (id)_createLocationObjFromLocationDictionary:(id)arg1;
- (_Bool)isLastKnownLocation:(id)arg1 significantlyOlderThanNewLocation:(id)arg2;
- (_Bool)_shouldLastKnownLocation:(id)arg1 beUpdatedTo:(id)arg2;
- (_Bool)_isLastKnownLocationFresh:(id)arg1;
- (_Bool)_isLastKnownLocation:(id)arg1 freshForMaxAge:(double)arg2 fromNewTimestamp:(double)arg3;
- (id)_copyLastKnownLocation;
- (id)_dictionaryRepresentation;
- (void)_requestActiveLocationChangeUpdates;
- (void)updateLocationIfNeeded;
@property(readonly, nonatomic) NSDictionary *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
- (void)requestAuthorization;
- (long long)authorizationStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

