//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoBufferObserving.h"

@class NSString, SVKeyValueObserver;

@interface SVVideoBufferObserver : NSObject <SVVideoBufferObserving>
{
    _Bool _playbackBufferFull;
    _Bool _playbackLikelyToKeepUp;
    CDUnknownBlockType _changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_playbackBufferFullObserver;
    SVKeyValueObserver *_playbackLikelyToKeepUpObserver;
}

@property(readonly, nonatomic) SVKeyValueObserver *playbackLikelyToKeepUpObserver; // @synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver;
@property(readonly, nonatomic) SVKeyValueObserver *playbackBufferFullObserver; // @synthesize playbackBufferFullObserver=_playbackBufferFullObserver;
@property(readonly, nonatomic) id <SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property(nonatomic, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
@property(nonatomic, getter=isPlaybackBufferFull) _Bool playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
- (void).cxx_destruct;
- (id)initWithPlayerItemObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

