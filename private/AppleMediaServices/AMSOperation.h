//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class AMSBinaryPromise, NSError, NSLock, NSMutableSet;

@interface AMSOperation : NSOperation
{
    NSLock *_lock;
    NSMutableSet *_subOperations;
    _Bool _cancelled;
    _Bool _success;
    AMSOperation *_parentOperation;
    AMSBinaryPromise *_promise;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) AMSBinaryPromise *promise; // @synthesize promise=_promise;
@property(nonatomic) __weak AMSOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)runSubOperation:(id)arg1 onQueue:(id)arg2;
- (void)runSubOperation:(id)arg1;
- (void)run;
- (_Bool)isCancelled;
- (void)cancel;
- (void)main;
- (id)init;

@end

