//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LAContext, NSData, NSError, NSObject<OS_dispatch_queue>;

@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_localAuthenticationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionHandler;
    LAContext *_inProgressContext;
    LAContext *_completedContext;
    NSData *_completedCredential;
    NSError *_completedError;
}

@property(retain, nonatomic) NSError *completedError; // @synthesize completedError=_completedError;
@property(retain, nonatomic) NSData *completedCredential; // @synthesize completedCredential=_completedCredential;
@property(retain, nonatomic) LAContext *completedContext; // @synthesize completedContext=_completedContext;
@property(retain, nonatomic) LAContext *inProgressContext; // @synthesize inProgressContext=_inProgressContext;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *localAuthenticationQueue; // @synthesize localAuthenticationQueue=_localAuthenticationQueue;
- (void).cxx_destruct;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)_invokeCompletionHandlerForInvalidation;
- (void)invalidateLocalAuthenticationContexts;
- (void)beginLocalAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCallbackQueue:(id)arg1;

@end

