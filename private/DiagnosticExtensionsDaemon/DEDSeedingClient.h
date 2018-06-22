//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class DEDBugSessionConfiguration, NSObject<OS_os_log>, NSString, NSURLSession;

@interface DEDSeedingClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSObject<OS_os_log> *_log;
    DEDBugSessionConfiguration *_config;
    id <DEDSeedingClientDelegate> _uploadDelegate;
    NSURLSession *_foregroundSession;
    NSURLSession *_backgroundSession;
}

@property(retain) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain) NSURLSession *foregroundSession; // @synthesize foregroundSession=_foregroundSession;
@property __weak id <DEDSeedingClientDelegate> uploadDelegate; // @synthesize uploadDelegate=_uploadDelegate;
@property(retain) DEDBugSessionConfiguration *config; // @synthesize config=_config;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void).cxx_destruct;
- (_Bool)isLoggedIn;
- (id)_keyValuePairsForKey:(id)arg1 value:(id)arg2;
- (id)_formEncodedBodyForDictionary:(id)arg1;
- (id)contentTypeForParameterEncoding:(unsigned long long)arg1;
- (id)bodyDataForParameters:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)promiseConfiguration;
- (id)HTTPErrorWithResponse:(id)arg1 withData:(id)arg2;
- (id)filerURL;
- (id)newFilerTokenURL;
- (id)filePromiseURLForPromise:(id)arg1;
- (id)newFilePromiseURL;
- (id)loginWithTokenURL;
- (id)seedingURL;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_serverErrorFromTask:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)cancelPromise:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updatePromise:(id)arg1 withFilename:(id)arg2 size:(long long)arg3 status:(long long)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)updatePromise:(id)arg1 withAttachmentGroup:(id)arg2 status:(long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)getPromise:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)makePromiseWithUUID:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)cleanup;
- (id)beginUploadWithRequest:(id)arg1 fromFileURL:(id)arg2;
- (void)performHTTPMethod:(id)arg1 toURL:(id)arg2 parameters:(id)arg3 encoding:(unsigned long long)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)deleteResourceAtURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)jsonForURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dataForURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)jsonForURLRequest:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dataForURLRequest:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)getFilerTokenForPromise:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)sendFile:(id)arg1 promise:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)seedingLoginWithSuccess:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1 sessionID:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

