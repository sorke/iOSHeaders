//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreML/MLClassifier.h>

@class MLPipeline;

@interface MLPipelineClassifier : MLClassifier
{
    MLPipeline *_engine;
}

@property(retain) MLPipeline *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id *)arg4;

@end

