//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, PHAdjustmentData;

__attribute__((visibility("hidden")))
@interface _PUPhotoEditSnapshot : NSObject
{
    long long _workImageVersion;
    PHAdjustmentData *_adjustmentData;
    NSData *_imageData;
    NSData *_baseImageData;
}

@property(retain, nonatomic) NSData *baseImageData; // @synthesize baseImageData=_baseImageData;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;
- (void).cxx_destruct;
- (id)_copyData:(id)arg1;

@end

