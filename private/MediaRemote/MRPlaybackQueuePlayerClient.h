//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRPlaybackQueueContentItemCallbacks, MRPlaybackQueuePlayerPathClient, NSArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRPlaybackQueuePlayerClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRPlaybackQueueContentItemCallbacks *_createPlaybackQueueForRequestCallbacks;
    MRPlaybackQueueContentItemCallbacks *_createItemForIdentifierCallbacks;
    MRPlaybackQueueContentItemCallbacks *_createItemForOffsetCallbacks;
    MRPlaybackQueueContentItemCallbacks *_createChildItemCallbacks;
    MRPlaybackQueueContentItemCallbacks *_metadataCallbacks;
    MRPlaybackQueueContentItemCallbacks *_languageOptionCallbacks;
    MRPlaybackQueueContentItemCallbacks *_infoCallbacks;
    MRPlaybackQueueContentItemCallbacks *_lyricsCallbacks;
    MRPlaybackQueueContentItemCallbacks *_artworkCallbacks;
    MRPlaybackQueuePlayerPathClient *_playbackQueueClient;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    void *_playerPath;
}

@property(readonly, nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property(readonly, nonatomic) void *context;
- (void)invalidatePlaybackQueueWithContext:(void *)arg1;
- (void)invalidatePlaybackQueue;
- (void *)requsetsForIdentifier:(id)arg1;
- (id)subscribedContentItems:(id)arg1;
- (long long)offsetForContentItem:(void *)arg1;
- (id)offsetsForContentItem:(void *)arg1;
- (void)addPlaybackQueue:(void *)arg1 forRequest:(void *)arg2;
- (void *)contentItemForOffset:(long long)arg1;
- (void *)nowPlayingItem;
- (_Bool)removeCallback:(void *)arg1;
@property(readonly, nonatomic) NSArray *artworkCallbacks;
- (void *)addArtworkCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *lyricsCallbacks;
- (void *)addLyricsCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *infoCallbacks;
- (void *)addInfoCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *languageOptionsCallbacks;
- (void *)addLanguageOptionsCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *metadataCallbacks;
- (void *)addMetadataCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *createChildItemCallbacks;
- (void *)addCreateChildItemCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *createItemForOffsetCallbacks;
- (void *)addCreateItemForOffsetCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *createItemForIdentifierCallbacks;
- (void *)addCreateItemForIdentifierCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *createPlaybackQueueForRequestCallbacks;
- (void *)addCreatePlaybackQueueForRequestCallback:(CDUnknownBlockType)arg1 prepend:(_Bool)arg2;
- (id)_callbacksFromList:(id)arg1;
- (void *)_addCallback:(id)arg1 toList:(id *)arg2 prepend:(_Bool)arg3;
@property(readonly, nonatomic) void *capabilities;
@property(readonly, nonatomic) _Bool hasPlaybackQueueCallbacks;
- (void)dealloc;
- (id)initWithPlayerPath:(void *)arg1 queue:(id)arg2;

@end
