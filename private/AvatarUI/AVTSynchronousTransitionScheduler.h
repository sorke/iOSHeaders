//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTTransitionScheduler.h"

@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler>
{
    _Bool _isRunningEvent;
    CDUnknownBlockType _eventHandler;
}

@property(nonatomic) _Bool isRunningEvent; // @synthesize isRunningEvent=_isRunningEvent;
@property(readonly, copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)didCompleteEvent;
- (void)stop;
- (void)scheduleEvent;
- (id)initWithEventHandler:(CDUnknownBlockType)arg1;

@end

