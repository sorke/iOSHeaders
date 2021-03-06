//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLCache.h"

@class NSMapTable, NSObject<OS_dispatch_queue>;

@interface _MPArtworkDataSourceURLCache : NSURLCache
{
    NSMapTable *_requestSizeMap;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

- (void).cxx_destruct;
- (void)setRepresentationSize:(struct CGSize)arg1 forRequest:(id)arg2;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;

@end

