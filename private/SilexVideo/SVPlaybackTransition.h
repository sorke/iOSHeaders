//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SVPlaybackTransitionContext;

@interface SVPlaybackTransition : NSObject
{
    id <SVVideo> _fromVideo;
    id <SVVideo> _toVideo;
    id <SVInteractivePlaybackTransitioning> _transitionCoordinator;
    SVPlaybackTransitionContext *_context;
}

@property(retain, nonatomic) SVPlaybackTransitionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <SVInteractivePlaybackTransitioning> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(readonly, nonatomic) id <SVVideo> toVideo; // @synthesize toVideo=_toVideo;
@property(readonly, nonatomic) id <SVVideo> fromVideo; // @synthesize fromVideo=_fromVideo;
- (void).cxx_destruct;
- (void)performTransitionWithVisibilityMonitor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 transitionCoordinator:(id)arg3;

@end

