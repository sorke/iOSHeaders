//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

__attribute__((visibility("hidden")))
@interface PUImportConcurrentAction : NSOperation
{
    _Bool _executing;
    _Bool _finished;
}

- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (void)finish;
- (void)performAction;
- (void)start;

@end

