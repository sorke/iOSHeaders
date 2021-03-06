//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoLoadingStateObserving.h"

@class NFStateMachine, NSError, NSString, SVKeyValueObserver;

@interface SVVideoLoadingStateObserver : NSObject <SVVideoLoadingStateObserving>
{
    unsigned long long _state;
    CDUnknownBlockType _finishedBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _startBlock;
    NSError *_error;
    id <SVPlayerItemLoading> _playerItemLoader;
    NFStateMachine *_stateMachine;
    SVKeyValueObserver *_playerItemStatusObserver;
}

@property(retain, nonatomic) SVKeyValueObserver *playerItemStatusObserver; // @synthesize playerItemStatusObserver=_playerItemStatusObserver;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SVPlayerItemLoading> playerItemLoader; // @synthesize playerItemLoader=_playerItemLoader;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic, setter=onStart:) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic, setter=onFailed:) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic, setter=onFinished:) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)configureStateWithPlayerItem:(id)arg1;
- (id)initWithPlayerItemLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

