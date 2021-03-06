//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTTodayResultsSource.h"

@class FCAsyncOnceOperation, NSString;

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource>
{
    _Bool _flushingHasBeenEnabled;
    id <NTTodayResultsFetchDescriptor> _fetchDescriptor;
    id <NTReadablePrivateDataStorage> _privateDataStorage;
    id <FCContentContext> _contentContext;
    CDUnknownBlockType _sessionProvider;
    FCAsyncOnceOperation *_firstOperationCompletionOperation;
}

@property(nonatomic, getter=hasFlushingBeenEnabled) _Bool flushingHasBeenEnabled; // @synthesize flushingHasBeenEnabled=_flushingHasBeenEnabled;
@property(retain, nonatomic) FCAsyncOnceOperation *firstOperationCompletionOperation; // @synthesize firstOperationCompletionOperation=_firstOperationCompletionOperation;
@property(copy, nonatomic) CDUnknownBlockType sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) id <NTReadablePrivateDataStorage> privateDataStorage; // @synthesize privateDataStorage=_privateDataStorage;
@property(copy, nonatomic) id <NTTodayResultsFetchDescriptor> fetchDescriptor; // @synthesize fetchDescriptor=_fetchDescriptor;
- (void).cxx_destruct;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 sessionProvider:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

