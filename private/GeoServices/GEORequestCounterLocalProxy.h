//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEORequestCounterProtocol.h"

@class GEORequestCounterPersistence, NSString;

@interface GEORequestCounterLocalProxy : NSObject <GEORequestCounterProtocol>
{
    GEORequestCounterPersistence *_persistence;
}

- (void).cxx_destruct;
- (void)finishedCDSStaleTileUpdateForID:(id)arg1 tilesConsidered:(unsigned int)arg2 tileDownloadAttempts:(unsigned int)arg3 successes:(unsigned int)arg4 failures:(unsigned int)arg5;
- (void)startedCDSStaleTileUpdateForID:(id)arg1;
- (void)startedCDSDownloadForTileSet:(id)arg1 zoom:(unsigned char)arg2 forCDSRegionId:(id)arg3;
- (void)receivedCDSRegions:(id)arg1 forCDSRegionId:(id)arg2;
- (void)readCDSDiagnosticsSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishedCDSDownloadForTileSet:(id)arg1 zoom:(unsigned char)arg2 tilesAtZoom:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 forCDSRegionId:(id)arg7;
- (void)finishedCDSDownloadForRegionId:(id)arg1;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)clearCounters;
- (void)startPowerLogSessionWithName:(id)arg1;
- (void)readRequestLogsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)readRequestsPerAppSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2;
@property(nonatomic) _Bool countersEnabled;
- (id)initWithPersistence:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

