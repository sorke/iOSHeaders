//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCKZoneStore.h"

@class CKServerChangeToken, NSArray, NSDate;

@interface SCKZoneMemoryStore : NSObject <SCKZoneStore>
{
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSArray *_serverRecords;
    NSArray *_pendingCommands;
}

@property(readonly, copy, nonatomic) NSArray *pendingCommands; // @synthesize pendingCommands=_pendingCommands;
@property(readonly, copy, nonatomic) NSArray *serverRecords; // @synthesize serverRecords=_serverRecords;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
- (void).cxx_destruct;
- (void)clearPendingCommands;
- (void)addPendingCommands:(id)arg1;
- (void)applyServerRecordsDiff:(id)arg1;
- (id)init;

@end

