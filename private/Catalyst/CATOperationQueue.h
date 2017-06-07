//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;

@interface CATOperationQueue : NSOperationQueue
{
    id <CATOperationQueueDelegate> _delegate;
}

+ (id)mainQueue;
+ (id)currentQueue;
+ (id)backgroundQueue;
@property(nonatomic) __weak id <CATOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopObserving:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)delegateWillAddOperation:(id)arg1;
- (void)delegateOperationDidFinish:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperation:(id)arg1;
- (id)description;
- (void)setUnderlyingQueue:(id)arg1;

@end
