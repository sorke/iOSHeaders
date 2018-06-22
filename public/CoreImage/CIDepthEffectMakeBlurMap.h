//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class AVCameraCalibrationData, CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDepthEffectMakeBlurMap : CIFilter
{
    CIImage *inputImage;
    CIImage *inputShiftmapImage;
    CIImage *inputMatteImage;
    NSNumber *inputAperture;
    CIVector *inputLeftEyePosition;
    CIVector *inputRightEyePosition;
    CIVector *inputChinPosition;
    CIVector *inputFaceMidPoint;
    CIVector *inputFocusRect;
    NSNumber *inputScale;
    AVCameraCalibrationData *inputCalibrationData;
    id inputAuxDataMetadata;
    NSDictionary *tuningParameters;
    float simulatedAperture;
    NSNumber *inputShouldAutoRotate;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputShouldAutoRotate; // @synthesize inputShouldAutoRotate;
@property(retain, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property(retain, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(retain) CIVector *inputFaceMidPoint; // @synthesize inputFaceMidPoint;
@property(retain) CIVector *inputChinPosition; // @synthesize inputChinPosition;
@property(retain) CIVector *inputRightEyePosition; // @synthesize inputRightEyePosition;
@property(retain) CIVector *inputLeftEyePosition; // @synthesize inputLeftEyePosition;
@property(copy, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputShiftmapImage; // @synthesize inputShiftmapImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)transformPoints:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)blurMapV3:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3;
- (id)refineShiftMapV3:(id)arg1 mainImage:(id)arg2 shiftmap:(id)arg3;
- (id)blurMapV2:(id)arg1;
- (id)smoothShiftMapV2:(id)arg1;
- (id)faceMaskApply:(id)arg1 blurMap:(id)arg2;
- (id)faceMaskParams:(id)arg1;
- (_Bool)needToRunFaceMask;
- (id)lensModelApply:(id)arg1 shiftMap:(id)arg2;
- (id)lensModelParams:(id)arg1;
- (id)upsampledShiftMap:(id)arg1;
- (float)intrinsicMatrixFocalLength;
- (struct CGSize)originalShiftMapSize;
- (id)calibrationData;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

