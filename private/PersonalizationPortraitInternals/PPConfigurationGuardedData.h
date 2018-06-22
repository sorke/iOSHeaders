//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface PPConfigurationGuardedData : NSObject
{
    double topicsSigmoidWidth;
    double topicsSigmoidPeakValue;
    double topicsScalingFactor;
    double remoteTopicsMultiplier;
    double halfValuePosition;
    double nonReaderTextWeight;
    unsigned long long minimumTopicRecords;
    unsigned long long maximumTopicRecords;
    double analyticsSamplingRate;
    NSString *variantName;
    NSDictionary *topicMaps;
    NSDictionary *topicMapsScalingFactors;
    NSDictionary *topicsSourceMultiplier;
    NSDictionary *topicsAlgorithmMultiplier;
}

- (void).cxx_destruct;

@end

