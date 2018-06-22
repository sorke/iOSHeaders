//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNSceneClassificationCustomHierarchy, VNSceneObservation;

__attribute__((visibility("hidden")))
@interface VNSceneClassificationRequestConfiguration : VNImageBasedRequestConfiguration
{
    VNSceneObservation *_sceneObservation;
    VNSceneClassificationCustomHierarchy *_customHierarchy;
    unsigned long long _maximumLeafObservations;
    unsigned long long _maximumHierarchicalObservations;
}

@property(nonatomic) unsigned long long maximumHierarchicalObservations; // @synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations; // @synthesize maximumLeafObservations=_maximumLeafObservations;
@property(retain, nonatomic) VNSceneClassificationCustomHierarchy *customHierarchy; // @synthesize customHierarchy=_customHierarchy;
@property(retain, nonatomic) VNSceneObservation *sceneObservation; // @synthesize sceneObservation=_sceneObservation;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

