//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCVideoFrameBufferPool : NSObject
{
    int _maxBufferCount;
    NSMutableDictionary *_bufferPool;
}

- (_Bool)releaseFrameWithTime:(long long)arg1;
- (_Bool)addFrame:(struct __CVBuffer *)arg1 time:(long long)arg2;
- (void)dealloc;
- (id)initWithCapacity:(int)arg1;

@end

