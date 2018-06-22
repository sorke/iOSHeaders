//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SXPlaybackCoordinator;

@protocol SXVideoPlaybackObserver <NSObject>

@optional
- (void)playbackCoordinatorMuteStateChanged:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorStateChanged:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPlaybackLikelyToKeepUpStateChanged:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPlaybackBufferFullStateChanged:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinator:(SXPlaybackCoordinator *)arg1 loadingProgressed:(double)arg2;
- (void)playbackCoordinator:(SXPlaybackCoordinator *)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinator:(SXPlaybackCoordinator *)arg1 playbackFailedWithError:(NSError *)arg2;
- (void)playbackCoordinatorFinishedPlayback:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPausedPlayback:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorResumedPlayback:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorStartedPlayback:(SXPlaybackCoordinator *)arg1;
@end

