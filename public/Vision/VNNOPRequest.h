//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class VNSupportedImageSize;

@interface VNNOPRequest : VNImageBasedRequest
{
    VNSupportedImageSize *_detectorPreferredImageSize;
    _Bool _detectorWantsAnisotropicScaling;
    double _detectorExecutionTimeInterval;
}

@property(nonatomic) double detectorExecutionTimeInterval; // @synthesize detectorExecutionTimeInterval=_detectorExecutionTimeInterval;
@property(nonatomic) _Bool detectorWantsAnisotropicScaling; // @synthesize detectorWantsAnisotropicScaling=_detectorWantsAnisotropicScaling;
@property(copy, nonatomic) VNSupportedImageSize *detectorPreferredImageSize; // @synthesize detectorPreferredImageSize=_detectorPreferredImageSize;
- (void).cxx_destruct;
- (id)supportedImageSizeSet;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 inPixelFormat:(unsigned int)arg2 forDetectorInputImageSize:(struct CGSize)arg3 usingAnisotropicScaling:(_Bool)arg4 options:(id)arg5 error:(id *)arg6;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 inPixelFormat:(unsigned int)arg3 forDetectorInputImageSize:(struct CGSize)arg4 usingAnisotropicScaling:(_Bool)arg5 options:(id)arg6 error:(id *)arg7;
- (struct CGSize)_actualSizeForDesiredSize:(id)arg1 ofSourceImageWidth:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

