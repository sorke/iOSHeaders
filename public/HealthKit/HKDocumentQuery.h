//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import "HKDocumentQueryClientInterface.h"

@class NSArray, NSString;

@interface HKDocumentQuery : HKQuery <HKDocumentQueryClientInterface>
{
    _Bool _includeDocumentData;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    CDUnknownBlockType _resultsHandler;
}

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(readonly) _Bool includeDocumentData; // @synthesize includeDocumentData=_includeDocumentData;
@property(readonly, copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverDocument:(id)arg1 query:(id)arg2;
- (id)initWithDocumentType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 includeDocumentData:(_Bool)arg5 resultsHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

