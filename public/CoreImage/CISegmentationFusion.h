//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSDictionary;

__attribute__((visibility("hidden")))
@interface CISegmentationFusion : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSDictionary *inputTuningParameters;
}

+ (id)customAttributes;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)kernel;

@end

