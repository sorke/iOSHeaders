//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUTemporaryImageTable.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface PUInMemoryLimitedImageTable : PUTemporaryImageTable
{
    NSCache *_memoryCache;
}

- (void).cxx_destruct;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (id)imageForItemAtIndex:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;

@end

