//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNPixelBufferObservation.h>

@class NSArray;

@interface VNImageSaliencyObservation : VNPixelBufferObservation
{
    struct CGSize _mOriginalImageSize;
    NSArray *_mSalientObjects;
    struct CGRect _mSalientRegion;
    struct CGRect _mHighlySalientRegion;
}

+ (_Bool)supportsSecureCoding;
+ (struct __CVBuffer *)create64x64FloatPixelBufferFromNSData:(id)arg1;
+ (id)createNSDataDumpFrom64x64FloatPixelBuffer:(struct __CVBuffer *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect narrowedBoundingBox;
@property(readonly, nonatomic) struct CGRect boundingBox;
@property(readonly, nonatomic) NSArray *salientObjects;
- (void)_computeBoundingBoxes;
- (void)_computeSalientObjects;
- (struct __CVBuffer *)createSaliencyImageAndReturnError:(id *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(struct __CVBuffer *)arg2 originalImageSize:(struct CGSize)arg3;

@end

