//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoPeriodicTimeObserving.h"

@class NSString, SVPlayer;

@interface SVVideoPeriodicTimeObserver : NSObject <SVVideoPeriodicTimeObserving>
{
    CDUnknownBlockType changeBlock;
    SVPlayer *_player;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    id _timeObserverToken;
    double _time;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) id timeObserverToken; // @synthesize timeObserverToken=_timeObserverToken;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserving> playbackStateObserver; // @synthesize playbackStateObserver=_playbackStateObserver;
@property(readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
- (void).cxx_destruct;
- (void)updateTime:(CDStruct_198678f7)arg1;
- (void)stopPeriodicTimeObserverForPlayer:(id)arg1;
- (void)startPeriodicTimeObserverForPlayer:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 playbackStateObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

