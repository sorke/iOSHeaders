//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODataSaverTileLoaderProxy.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (void)_debug_initiateDataSaverPreload;
@property(readonly, nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled;
- (void)_removeOldRegionStateFromDisk;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

