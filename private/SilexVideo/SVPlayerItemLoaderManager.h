//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVPlayerItemLoaderProviding.h"

@class NSString, SVWeakObjectCache;

@interface SVPlayerItemLoaderManager : NSObject <SVPlayerItemLoaderProviding>
{
    id <SVPlayerItemLoaderFactory> _playerItemLoaderFactory;
    SVWeakObjectCache *_playerItemLoaders;
}

@property(readonly, nonatomic) SVWeakObjectCache *playerItemLoaders; // @synthesize playerItemLoaders=_playerItemLoaders;
@property(readonly, nonatomic) id <SVPlayerItemLoaderFactory> playerItemLoaderFactory; // @synthesize playerItemLoaderFactory=_playerItemLoaderFactory;
- (void).cxx_destruct;
- (id)playerItemLoaderForVideo:(id)arg1;
- (id)initWithPlayerItemLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

