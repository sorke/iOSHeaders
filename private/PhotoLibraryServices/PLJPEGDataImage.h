//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@class NSData;

@interface PLJPEGDataImage : UIImage
{
    NSData *_plData;
}

+ (id)pl_imageWithStoredJPEGData:(id)arg1;
- (void)dealloc;
- (struct CGImage *)CGImage;
- (id)pl_imageJPEGData;

@end

