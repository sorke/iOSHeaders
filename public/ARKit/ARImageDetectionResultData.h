//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARResultData.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class ARCamera, NSArray, NSString;

@interface ARImageDetectionResultData : NSObject <ARResultData, NSCopying, NSSecureCoding>
{
    _Bool _detectionOnly;
    _Bool _providesWorldTrackingCameraPose;
    ARCamera *_currentCamera;
    NSArray *_detectedImages;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *detectedImages; // @synthesize detectedImages=_detectedImages;
@property(copy, nonatomic) ARCamera *currentCamera; // @synthesize currentCamera=_currentCamera;
@property(nonatomic) _Bool providesWorldTrackingCameraPose; // @synthesize providesWorldTrackingCameraPose=_providesWorldTrackingCameraPose;
@property(nonatomic) _Bool detectionOnly; // @synthesize detectionOnly=_detectionOnly;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: @160@0:8{?=[4]}16{?=[4]}80@144@152, name: anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

