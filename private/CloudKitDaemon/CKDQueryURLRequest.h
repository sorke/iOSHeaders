//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

#import "CKDURLRequestPipelining.h"

@class CKQuery, CKRecordZoneID, NSArray, NSData, NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDQueryURLRequest : CKDURLRequest <CKDURLRequestPipelining>
{
    NSMutableArray *_queryResponses;
    _Bool _shouldFetchAssetContent;
    CKQuery *_query;
    NSData *_cursor;
    unsigned long long _limit;
    CKRecordZoneID *_zoneID;
    NSArray *_requestedFields;
    NSSet *_desiredAssetKeys;
    CDUnknownBlockType _recordsParsedBlock;
    NSData *_resultsCursor;
    NSMutableArray *_recordResponses;
}

@property(retain, nonatomic) NSMutableArray *recordResponses; // @synthesize recordResponses=_recordResponses;
@property(retain, nonatomic) NSData *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property(copy, nonatomic) CDUnknownBlockType recordsParsedBlock; // @synthesize recordsParsedBlock=_recordsParsedBlock;
@property(retain, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSArray *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) CKQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSMutableArray *queryResponses; // @synthesize queryResponses=_queryResponses;
- (void).cxx_destruct;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)zoneIDsToLock;
- (_Bool)requestGETPreAuth;
- (_Bool)allowsAnonymousAccount;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned long long)arg3 requestedFields:(id)arg4 zoneID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

