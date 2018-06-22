//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHTTPURLResponse, NSHashTable, NSMutableData, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLSessionTask;

@interface TPSURLSessionTask : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionTaskDelegateQueue;
    _Bool _cancelled;
    _Bool _isCacheData;
    struct TPSURLSessionDelegateResponds _delegateResponds;
    id <TPSURLSessionDelegate> _networkDelegate;
    unsigned long long _downloadTaskTotalBytes;
    long long _dataType;
    NSString *_identifier;
    id _formattedData;
    NSURLSessionTask *_task;
    NSHTTPURLResponse *_response;
    NSString *_lastModified;
    NSMutableData *_dataTaskData;
    NSHashTable *_sessionTaskDelegates;
}

+ (struct TPSURLSessionDelegateResponds)delegateRespondsWithDelegate:(id)arg1;
@property(retain, nonatomic) NSHashTable *sessionTaskDelegates; // @synthesize sessionTaskDelegates=_sessionTaskDelegates;
@property(retain, nonatomic) NSMutableData *dataTaskData; // @synthesize dataTaskData=_dataTaskData;
@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) id formattedData; // @synthesize formattedData=_formattedData;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) unsigned long long downloadTaskTotalBytes; // @synthesize downloadTaskTotalBytes=_downloadTaskTotalBytes;
@property(nonatomic) _Bool isCacheData; // @synthesize isCacheData=_isCacheData;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) struct TPSURLSessionDelegateResponds delegateResponds; // @synthesize delegateResponds=_delegateResponds;
@property(nonatomic) __weak id <TPSURLSessionDelegate> networkDelegate; // @synthesize networkDelegate=_networkDelegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)didCompleteWithError:(id)arg1;
@property(nonatomic) float priority; // @dynamic priority;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithSessionTask:(id)arg1 identifier:(id)arg2;
- (void)dealloc;

@end

