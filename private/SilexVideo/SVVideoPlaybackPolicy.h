//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoPlaybackPolicy.h"

@class NSString;

@interface SVVideoPlaybackPolicy : NSObject <SVVideoPlaybackPolicy>
{
    _Bool _playbackIsAllowedToStart;
    _Bool playbackRequested;
}

@property(nonatomic) _Bool playbackRequested; // @synthesize playbackRequested;
@property(nonatomic, getter=isPlaybackAllowedToStart) _Bool playbackIsAllowedToStart; // @synthesize playbackIsAllowedToStart=_playbackIsAllowedToStart;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

