//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPBitmapStore, NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject
{
    NSMutableDictionary *_imageCache;
    CPBitmapStore *_serializedCache;
}

+ (id)serializedCacheKeyForImageNamed:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)sharedCache;
@property(retain, nonatomic) CPBitmapStore *serializedCache; // @synthesize serializedCache=_serializedCache;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2 version:(unsigned long long)arg3;
- (id)init;

@end

