//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NULivePhotoKeyFrameMetaDataNode : NURenderNode
{
    CDStruct_1b6d18a9 _timeFromAdjustment;
}

- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 input:(id)arg2;

@end

