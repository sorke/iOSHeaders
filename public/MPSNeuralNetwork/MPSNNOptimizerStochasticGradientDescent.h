//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@interface MPSNNOptimizerStochasticGradientDescent : MPSNNOptimizer
{
    float _momentumScale;
    _Bool _useNestrovMomentum;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) _Bool useNestrovMomentum; // @synthesize useNestrovMomentum=_useNestrovMomentum;
@property(readonly, nonatomic) float momentumScale; // @synthesize momentumScale=_momentumScale;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputMomentumVector:(id)arg4 resultValuesVector:(id)arg5;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 momentumScale:(float)arg2 useNestrovMomentum:(_Bool)arg3 optimizerDescriptor:(id)arg4;
- (id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 learningRate:(float)arg2;

@end

