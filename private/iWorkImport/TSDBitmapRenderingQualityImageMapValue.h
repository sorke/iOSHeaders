//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDBitmapRenderingQualityImageMapValue : NSObject
{
    struct CGSize mMaxSize;
    struct CGImage *mDegradedImageRef;
}

@property(readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=mMaxSize;
- (struct CGImage *)degradedImageRefForForProvider:(id)arg1 quality:(int)arg2 canvasScale:(float)arg3;
- (void)addSize:(struct CGSize)arg1;
- (void)dealloc;

@end
