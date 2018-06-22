//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCameraCalibrationData, AVCapturePhotoInternal, AVCaptureResolvedPhotoSettings, AVDepthData, AVPortraitEffectsMatte, NSDictionary, NSString;

@interface AVCapturePhoto : NSObject
{
    AVCapturePhotoInternal *_internal;
}

- (id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer *)arg3 replacementDepthData:(id)arg4 replacementPortraitEffectsMatte:(id)arg5 exceptionReason:(id *)arg6;
- (unsigned int)_orientation;
- (struct __CVBuffer *)_embeddedThumbnailSourcePixelBuffer;
- (id)portraitMetadata;
- (id)livePhotoMovieFileURL;
- (unsigned int)actualPhotoProcessingFlags;
- (unsigned int)expectedPhotoProcessingFlags;
- (unsigned int)photoProcessingFlags;
- (long long)lensStabilizationStatus;
- (long long)sequenceCount;
- (id)bracketSettings;
- (struct CGImage *)previewCGImageRepresentation;
- (struct CGImage *)CGImageRepresentation;
- (id)fileDataRepresentationWithCustomizer:(id)arg1;
- (id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer *)arg3 replacementDepthData:(id)arg4;
- (id)fileDataRepresentation;
@property(readonly) NSString *sourceDeviceType;
@property(readonly) long long photoCount;
@property(readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property(readonly) AVCameraCalibrationData *cameraCalibrationData;
@property(readonly) NSDictionary *metadata;
@property(readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property(readonly) AVDepthData *depthData;
@property(readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property(readonly) struct __CVBuffer *previewPixelBuffer;
@property(readonly) struct __CVBuffer *pixelBuffer;
@property(readonly, getter=isRawPhoto) _Bool rawPhoto;
@property(readonly) CDStruct_1b6d18a9 timestamp;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 photoSurface:(void *)arg2 photoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(void *)arg4 metadata:(id)arg5 depthDataSurface:(void *)arg6 depthMetadataDictionary:(id)arg7 portraitEffectsMatteSurface:(void *)arg8 portraitEffectsMatteMetadataDictionary:(id)arg9 captureRequest:(id)arg10 bracketSettings:(id)arg11 sequenceCount:(unsigned long long)arg12 photoCount:(unsigned long long)arg13 expectedPhotoProcessingFlags:(unsigned int)arg14 sourceDeviceType:(id)arg15;

@end

