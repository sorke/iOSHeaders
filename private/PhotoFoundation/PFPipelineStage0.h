//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFPipelineStage.h>

@class NSMutableArray, PFSerialQueue;

@interface PFPipelineStage0 : PFPipelineStage
{
    PFSerialQueue *_generatorQueue;
    NSMutableArray *_jobGenerators;
}

- (void).cxx_destruct;
- (void)runQueuedJobs;
- (void)addJobs:(unsigned long long)arg1 withQOS:(unsigned int)arg2 generator:(CDUnknownBlockType)arg3 pipeline:(id)arg4;
- (void)generateNextJob:(unsigned int)arg1;
- (unsigned long long)indexOfMaxQOSAvailableGenerator;
- (void)setConcurrentJobLimit:(unsigned long long)arg1;
- (id)description;
- (id)init;

@end

