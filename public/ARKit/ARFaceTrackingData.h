//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARResultData.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSError, NSObject<OS_dispatch_semaphore>, NSString;

@interface ARFaceTrackingData : NSObject <ARResultData, NSSecureCoding, NSCopying>
{
    vector_1cb3ea33 _meshVertices;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _verticesImageSpace;
    vector_1cb3ea33 _normals;
    vector_7584168e _blendShapeCoefficients;
    // Error parsing type: {?="columns"[4]}, name: _transform
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
    NSObject<OS_dispatch_semaphore> *_imageVerticesSemaphore;
    float _tongueOut;
    NSDictionary *_trackingData;
    NSError *_trackingError;
    // Error parsing type: , name: _gazePoint
    // Error parsing type: {?="columns"[4]}, name: _leftEyeTransform
    // Error parsing type: {?="columns"[4]}, name: _rightEyeTransform
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedNeutralGeometry;
@property(readonly, nonatomic) float tongueOut; // @synthesize tongueOut=_tongueOut;
@property(readonly, nonatomic) NSError *trackingError; // @synthesize trackingError=_trackingError;
// Error parsing type for property gazePoint:
// Property attributes: T,R,N,V_gazePoint

// Error parsing type for property rightEyeTransform:
// Property attributes: T{?=[4]},R,N,V_rightEyeTransform

// Error parsing type for property leftEyeTransform:
// Property attributes: T{?=[4]},R,N,V_leftEyeTransform

@property(readonly, nonatomic) NSDictionary *trackingData; // @synthesize trackingData=_trackingData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// Error parsing type for property imageVertices:
// Property attributes: Tr^,R,N

// Error parsing type for property normals:
// Property attributes: Tr^,R,N

@property(readonly, nonatomic) unsigned long long normalCount;
@property(readonly, nonatomic) const float *blendShapeCoefficients;
@property(readonly, nonatomic) unsigned long long blendShapeCoefficientsCount;
// Error parsing type for property vertices:
// Property attributes: Tr^,R,N

@property(readonly, nonatomic) unsigned long long vertexCount;
// Error parsing type for property transform:
// Property attributes: T{?=[4]},R,N

- (void)_extractMetaDataAndTransformToMirrored:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isValid;
-     // Error parsing type: @160@0:8{?=[4]}16{?=[4]}80@144@152, name: anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTrackingData:(id)arg1 transformToMirrored:(_Bool)arg2;
- (id)initWithTrackingData:(id)arg1;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

