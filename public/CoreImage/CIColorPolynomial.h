//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorPolynomial : CIFilter
{
    CIImage *inputImage;
    CIVector *inputRedCoefficients;
    CIVector *inputGreenCoefficients;
    CIVector *inputBlueCoefficients;
    CIVector *inputAlphaCoefficients;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputAlphaCoefficients; // @synthesize inputAlphaCoefficients;
@property(retain, nonatomic) CIVector *inputBlueCoefficients; // @synthesize inputBlueCoefficients;
@property(retain, nonatomic) CIVector *inputGreenCoefficients; // @synthesize inputGreenCoefficients;
@property(retain, nonatomic) CIVector *inputRedCoefficients; // @synthesize inputRedCoefficients;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_kernel;

@end
