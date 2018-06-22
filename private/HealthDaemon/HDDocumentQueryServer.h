//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class NSArray;

@interface HDDocumentQueryServer : HDQueryServer
{
    _Bool _suspended;
    NSArray *_authorizedSamples;
    unsigned long long _clientSampleIndex;
    _Bool _includeDocumentData;
    unsigned long long _maxResults;
    NSArray *_sortDescriptors;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
@property(readonly, nonatomic) _Bool includeDocumentData; // @synthesize includeDocumentData=_includeDocumentData;
@property(readonly, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
- (void).cxx_destruct;
- (void)_queue_start;
- (void)authorizeSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_deliverAuthorizedSamplesToClient:(id)arg1 errorOut:(id *)arg2;
- (_Bool)_deliverOneSample:(id)arg1 client:(id)arg2 errorOut:(id *)arg3;
- (id)samplesBeforeAuthorizationWithSortDescriptors:(id)arg1 errorOut:(id *)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end

