//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class HMFTimer, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface HMDVendorDataManager : HMFObject <HMFLogging, HMFTimerDelegate>
{
    NSDictionary *_vendorModelEntries;
    long long _dataVersion;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSURLSession *_urlSession;
    HMFTimer *_fetchTimer;
}

+ (id)dbURL;
+ (id)logCategory;
+ (id)sharedVendorDataManager;
@property(readonly, nonatomic) HMFTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(retain, nonatomic) NSDictionary *vendorModelEntries; // @synthesize vendorModelEntries=_vendorModelEntries;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (_Bool)_isSameVendorList:(id)arg1;
- (id)_modelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (id)_parseManufacturersList:(id)arg1;
- (void)_handleData:(id)arg1 fromServerWithError:(id)arg2;
- (void)_saveToLocalFile:(id)arg1;
- (_Bool)_parseDatabaseFromDictionary:(id)arg1;
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)_initWithLocalFile;
- (void)_fetchDataFromServer;
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (id)init;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

