//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKSyncOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation
{
    _Bool _asynchronous;
    NSMutableArray *_blocks;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(getter=isAsynchronous) _Bool asynchronous; // @synthesize asynchronous=_asynchronous;
- (void).cxx_destruct;
- (void)main;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (id)executionBlocks;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

