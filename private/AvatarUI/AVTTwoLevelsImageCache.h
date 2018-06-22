//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTImageCache.h"

@class NSString;

@interface AVTTwoLevelsImageCache : NSObject <AVTImageCache>
{
    id <AVTImageCache> _firstLevelCache;
    id <AVTImageCache> _secondLevelCache;
}

@property(readonly, nonatomic) id <AVTImageCache> secondLevelCache; // @synthesize secondLevelCache=_secondLevelCache;
@property(readonly, nonatomic) id <AVTImageCache> firstLevelCache; // @synthesize firstLevelCache=_firstLevelCache;
- (void).cxx_destruct;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)initWithFirstLevelCache:(id)arg1 secondLevelCache:(id)arg2 environment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

