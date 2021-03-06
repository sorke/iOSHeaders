//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoTransitionManager.h"

@class NSMutableArray, NSString, SVPlaybackTransition;

@interface SVVideoTransitionManager : NSObject <SVVideoTransitionManager>
{
    id <SVPlaybackTransitionCoordinatorFactory> _transitionCoordinatorFactory;
    id <SVVideoVisibilityMonitorProviding> _visibilityMonitorProviding;
    id <SVVideoQueueProviding> _queueProvider;
    NSMutableArray *_pendingVideos;
    NSMutableArray *_transitionObservers;
    SVPlaybackTransition *_activeTransition;
    id <SVVideo> _visibleVideo;
}

@property(retain, nonatomic) id <SVVideo> visibleVideo; // @synthesize visibleVideo=_visibleVideo;
@property(retain, nonatomic) SVPlaybackTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(readonly, nonatomic) NSMutableArray *transitionObservers; // @synthesize transitionObservers=_transitionObservers;
@property(readonly, nonatomic) NSMutableArray *pendingVideos; // @synthesize pendingVideos=_pendingVideos;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property(readonly, nonatomic) id <SVVideoVisibilityMonitorProviding> visibilityMonitorProviding; // @synthesize visibilityMonitorProviding=_visibilityMonitorProviding;
@property(readonly, nonatomic) id <SVPlaybackTransitionCoordinatorFactory> transitionCoordinatorFactory; // @synthesize transitionCoordinatorFactory=_transitionCoordinatorFactory;
- (void).cxx_destruct;
- (void)performNextTransition;
- (void)removeTransitionObserver:(id)arg1;
- (void)addTransitionObserver:(id)arg1;
- (void)transitionToVideo:(id)arg1;
- (id)initWithTransitionCoordinatorFactory:(id)arg1 visibilityMonitorProviding:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

