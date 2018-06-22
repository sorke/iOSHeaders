//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

#import "VNDetectorKeyProviding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding>
{
    struct shared_ptr<vision::mod::LandmarkAttributes> _faceAttributesPupilRefiner;
    id <VNModelFile> mLandmarkRefinerModelFileHandle;
    _Bool modelFilesWereMemmapped;
}

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (struct _Geometry2D_point2D_)_computeCentroidUsingPoints:(const struct _Geometry2D_point2D_ *)arg1 indicies:(const int *)arg2 numberOfIndicies:(int)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)detectBlinkOnFaceImage:(const struct vImage_Buffer *)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ *)arg3 landmarks:(const void *)arg4 options:(id)arg5 warningRecorder:(id)arg6 error:(id *)arg7;
- (id)computeLandmarksScoreOnImage:(const struct vImage_Buffer *)arg1 withFaceBoundingBox:(const struct _Geometry2D_rect2D_ *)arg2 andLandmarks:(const void *)arg3 error:(id *)arg4;
- (struct __CVBuffer *)createLumaPixelBufferFrom:(id)arg1 scaleToSize:(struct CGSize)arg2 forFaceBBox:(struct _Geometry2D_rect2D_)arg3 initializeVImage:(struct vImage_Buffer *)arg4 initializeRect2D:(struct _Geometry2D_rect2D_ *)arg5 initializeIgnoreCropAndScaleFlag:(_Bool *)arg6 initializeLumaScaleFromOriginal:(float *)arg7 error:(id *)arg8;
- (void)dealloc;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
@property(readonly) void *faceAttributesPupilRefiner;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

