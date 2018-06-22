//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REMLModel.h>

@interface REBayesianMLModel : REMLModel
{
    struct BayesianModel _model;
    unsigned long long _numberOfFeatures;
}

+ (unsigned long long)maxFeatureCount;
+ (unsigned long long)featureBitWidth;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (long long)_getNumberOfCoordinates;
- (void)_clearModel;
- (_Bool)_loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)_saveModelToURL:(id)arg1 error:(id *)arg2;
- (void)_loadFeatureVector:(vector_cfeb9b06 *)arg1 fromFeatureMap:(id)arg2;
- (id)_predictWithFeatures:(id)arg1;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (id)initWithFeatureSet:(id)arg1;

@end

