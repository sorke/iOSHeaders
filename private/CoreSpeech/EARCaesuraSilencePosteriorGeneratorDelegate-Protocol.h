//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EARClientSilenceFeatures;

@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>
- (void)clientSilenceFeaturesAvailable:(EARClientSilenceFeatures *)arg1;

@optional
- (void)silenceDurationEstimateAvailable:(float *)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;
@end

