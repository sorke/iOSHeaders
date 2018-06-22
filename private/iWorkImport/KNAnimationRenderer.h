//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAnimatedSlideView, KNPlaybackSession;

__attribute__((visibility("hidden")))
@interface KNAnimationRenderer : NSObject
{
    KNPlaybackSession *_session;
    KNAnimatedSlideView *_ASV;
    _Bool _areAnimationsPaused;
    id _plugin;
    Class _pluginClass;
    unsigned long long _direction;
    double _duration;
    id <KNAnimationPluginContext> _pluginContext;
}

@property(readonly, nonatomic) id <KNAnimationPluginContext> pluginContext; // @synthesize pluginContext=_pluginContext;
@property(readonly, nonatomic) Class pluginClass; // @synthesize pluginClass=_pluginClass;
@property(readonly, nonatomic) id plugin; // @synthesize plugin=_plugin;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void)prepareAnimationsAsynchronously;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(_Bool)arg1;
- (void)renderTextures;
- (void)generateTextures;
- (void)teardown;
- (void)dealloc;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)resumeAnimationsIfPaused;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)pauseAnimations;
- (void)stopAnimations;
- (void)setupPluginContext;

@end

