//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIAsynchronousOperation.h"

@class NSArray, NSError, NSOperation, VUIMediaEntitiesFetchControllerResult, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesFetchControllerOperation : VUIAsynchronousOperation
{
    long long _fetchReason;
    NSArray *_requests;
    NSArray *_currentFetchResponses;
    VUIMediaEntitiesFetchControllerResult *_result;
    NSError *_error;
    VUIMediaLibrary *_mediaLibrary;
    NSOperation *_currentSubOperation;
}

@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaEntitiesFetchControllerResult *result; // @synthesize result=_result;
@property(copy, nonatomic) NSArray *currentFetchResponses; // @synthesize currentFetchResponses=_currentFetchResponses;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) long long fetchReason; // @synthesize fetchReason=_fetchReason;
- (void).cxx_destruct;
- (id)_resultWithResponses:(id)arg1;
- (void)_startChangesOperationWithMediaEntityFetchResponses:(id)arg1 currentFetchResponses:(id)arg2;
- (void)_handleCompletdFetchWithResponses:(id)arg1 error:(id)arg2;
- (void)_startMediaLibraryFetchOperation;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 requests:(id)arg3;

@end

