//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class NSArray;

@interface ARObjectDetectionTechnique : ARTechnique
{
    _Bool _finishedLoadingObjects;
    NSArray *_detectionObjects;
}

@property(readonly, nonatomic) NSArray *detectionObjects; // @synthesize detectionObjects=_detectionObjects;
@property(readonly) _Bool finishedLoadingObjects; // @synthesize finishedLoadingObjects=_finishedLoadingObjects;
- (void).cxx_destruct;
- (id)initWithTrackingTechnique:(id)arg1 detectionObjects:(id)arg2;

@end

