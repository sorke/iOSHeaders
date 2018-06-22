//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVTAvatarConfigurationImageRenderer, AVTAvatarImageRenderer, AVTUIEnvironment, NSObject<OS_dispatch_queue>;

@interface _AVTAvatarRecordImageProvider : NSObject
{
    id <AVTImageCache> _cache;
    id <AVTUILogger> _logger;
    AVTUIEnvironment *_environment;
    AVTAvatarConfigurationImageRenderer *_configurationRenderer;
    AVTAvatarImageRenderer *_puppetRenderer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <AVTScheduler> _renderingScheduler;
}

+ (id)recordImageCacheWithEnvironment:(id)arg1;
@property(readonly, nonatomic) id <AVTScheduler> renderingScheduler; // @synthesize renderingScheduler=_renderingScheduler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) AVTAvatarImageRenderer *puppetRenderer; // @synthesize puppetRenderer=_puppetRenderer;
@property(readonly, nonatomic) AVTAvatarConfigurationImageRenderer *configurationRenderer; // @synthesize configurationRenderer=_configurationRenderer;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <AVTImageCache> cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (CDUnknownBlockType)_providerForRenderingPuppetRecord:(id)arg1 scope:(id)arg2;
- (CDUnknownBlockType)_providerForThumbnailForPuppetRecord:(id)arg1 scope:(id)arg2;
- (CDUnknownBlockType)_providerForPuppetRecord:(id)arg1 scope:(id)arg2;
- (CDUnknownBlockType)_providerForRecord:(id)arg1 scope:(id)arg2;
- (CDUnknownBlockType)providerForRecord:(id)arg1 scope:(id)arg2;
- (id)initWithCache:(id)arg1 renderingQueueProvider:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 configurationRenderer:(id)arg4 puppetRenderer:(id)arg5 environment:(id)arg6;
- (id)initWithRenderingPuppets:(_Bool)arg1 environment:(id)arg2;
- (id)initWithEnvironment:(id)arg1;

@end

