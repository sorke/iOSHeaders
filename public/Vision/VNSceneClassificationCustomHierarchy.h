//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "VNObservationsCacheKeyProviding.h"
#import "VNRequestRevisionProviding.h"

@class NSDictionary;

@interface VNSceneClassificationCustomHierarchy : NSObject <VNObservationsCacheKeyProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>
{
    shared_ptr_eb20c8f2 _hierarchicalModel_DO_NOT_ACCESS_DIRECTLY;
    NSDictionary *_additionalRelationships;
    unsigned long long _sceneClassificationRequestRevision;
    unsigned long long _sceneClassificationRequestDetectionLevel;
}

+ (_Bool)supportsSecureCoding;
+ (id)customHierarchyForSceneClassificationRequest:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)observationsCacheKey;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (unsigned long long)requestDetectionLevel;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)customHierarchyWithAdditionalRelationships:(id)arg1 error:(id *)arg2;
- (id)customHierarchyWithAdditionalParent:(id)arg1 children:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSDictionary *relationships;
- (_Bool)_addRelationships:(id)arg1 error:(id *)arg2;
- (shared_ptr_eb20c8f2)newHierarchicalModelAndReturnError:(id *)arg1;
- (shared_ptr_eb20c8f2)hierarchicalModelAndReturnError:(id *)arg1;
- (id)initWithSceneClassificationRequestRevision:(unsigned long long)arg1 detectionLevel:(unsigned long long)arg2;

@end

