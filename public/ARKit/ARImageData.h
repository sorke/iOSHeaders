//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARSensorData.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class ARFaceData, AVDepthData, NSDate, NSString;

@interface ARImageData : NSObject <ARSensorData, NSCopying, NSSecureCoding>
{
    _Bool _mirrored;
    float _exposureTargetOffset;
    float _temperature;
    double _timestamp;
    NSDate *_captureDate;
    double _currentCaptureTimestamp;
    struct __CVBuffer *_pixelBuffer;
    unsigned long long _lensType;
    double _exposureDuration;
    ARFaceData *_faceData;
    AVDepthData *_depthData;
    double _depthDataTimestamp;
    long long _cameraPosition;
    long long _captureFramesPerSecond;
    struct CGSize _imageResolution;
    // Error parsing type: , name: _tangentialDistortion
    // Error parsing type: , name: _radialDistortion
    // Error parsing type: {?="columns"[3]}, name: _cameraIntrinsics
}

+ (_Bool)supportsSecureCoding;
+ (id)captureDateFromPresentationTimestamp:(CDStruct_1b6d18a9)arg1 session:(id)arg2;
@property(nonatomic) long long captureFramesPerSecond; // @synthesize captureFramesPerSecond=_captureFramesPerSecond;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) double depthDataTimestamp; // @synthesize depthDataTimestamp=_depthDataTimestamp;
@property(retain, nonatomic) AVDepthData *depthData; // @synthesize depthData=_depthData;
@property(retain, nonatomic) ARFaceData *faceData; // @synthesize faceData=_faceData;
@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) float exposureTargetOffset; // @synthesize exposureTargetOffset=_exposureTargetOffset;
@property(nonatomic) double exposureDuration; // @synthesize exposureDuration=_exposureDuration;
// Error parsing type for property tangentialDistortion:
// Property attributes: T,N,V_tangentialDistortion

// Error parsing type for property radialDistortion:
// Property attributes: T,N,V_radialDistortion

@property(nonatomic) unsigned long long lensType; // @synthesize lensType=_lensType;
@property(nonatomic) struct CGSize imageResolution; // @synthesize imageResolution=_imageResolution;
@property(nonatomic, getter=isMirrored) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
// Error parsing type for property cameraIntrinsics:
// Property attributes: T{?=[3]},N,V_cameraIntrinsics

@property(nonatomic) double currentCaptureTimestamp; // @synthesize currentCaptureTimestamp=_currentCaptureTimestamp;
@property(copy, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) ARImageData *originalImage;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4;
- (id)initWithImageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

