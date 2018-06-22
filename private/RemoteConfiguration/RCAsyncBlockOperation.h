//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface RCAsyncBlockOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    CDUnknownBlockType _block;
}

+ (id)asyncBlockOperationWithMainThreadBlock:(CDUnknownBlockType)arg1;
+ (id)asyncBlockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

