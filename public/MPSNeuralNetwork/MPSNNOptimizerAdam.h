//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@interface MPSNNOptimizerAdam : MPSNNOptimizer
{
    double _beta1;
    double _beta2;
    float _epsilon;
    unsigned long long _timeStep;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long timeStep; // @synthesize timeStep=_timeStep;
@property(readonly, nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) double beta2; // @synthesize beta2=_beta2;
@property(readonly, nonatomic) double beta1; // @synthesize beta1=_beta1;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputMomentumVector:(id)arg4 inputVelocityVector:(id)arg5 resultValuesVector:(id)arg6;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 optimizerDescriptor:(id)arg6;
- (id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 learningRate:(float)arg2;

@end

