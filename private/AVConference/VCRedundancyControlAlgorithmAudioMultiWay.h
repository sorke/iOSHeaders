//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCRedundancyControlAlgorithm.h"

@class NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudioMultiWay : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    NSMutableDictionary *_statistics;
    unsigned int _reasonCode;
    NSNumber *_currentSSRC;
    _Bool _isPacketLossSignificant;
    unsigned int _percentageOfLossyRemoteParticipants;
    unsigned int _worstPacketLossPercentage;
    unsigned int _averagePacketLossOverLossyParticipants;
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (unsigned int)updateRedundancyPercentage;
- (_Bool)shouldApplyRedundancy;
- (void)computeRedundancyInfo;
- (_Bool)isPacketLossSignificantWithStatistics:(id)arg1;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_e9907a6b)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

