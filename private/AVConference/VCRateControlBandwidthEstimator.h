//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SuddenChangeParameters;

__attribute__((visibility("hidden")))
@interface VCRateControlBandwidthEstimator : NSObject
{
    unsigned int _totalBytesInProbingSequence;
    unsigned int _totalPacketsInProbingSequence;
    double _lastPacketInProbingSequenceArrivalTime;
    double _referencePacketArrivalTime;
    double _earlyProbingPacketArrivalTime;
    unsigned int _earlyBytesInProbingSequence;
    unsigned int _earlyPacketsInProbingSequence;
    unsigned int _referencePacketDataSize;
    _Bool _isInitialized;
    _Bool _isFirstBWEstimationReleased;
    unsigned int _lastProbingSequenceReferenceTimestamp;
    double _firstDivergeTime;
    int _bandwidthDivergeCount;
    int _suddenChangeBandwidthBufferIndex;
    double _suddenChangeBandwidthBuffer[30];
    unsigned int _overRangePacketsCount;
    double _totalBandwidth;
    SuddenChangeParameters *_suddenChangeParameters;
    unsigned int _minPacketsCount;
    double _minEstimationWindowDuration;
    double _maxDetectableBandwidth;
    unsigned int _maxOverRangePacketsCount;
    double _estimatedBandwidth;
    unsigned int _radioAccessTechnology;
    unsigned int _mode;
    unsigned int _bandwidthEstimationState;
}

@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(nonatomic) double estimatedBandwidth; // @synthesize estimatedBandwidth=_estimatedBandwidth;
- (void)updateBandwidthDivergeCountAtArrivalTime:(double)arg1 suddenChangeAbove:(_Bool)arg2 suddenChangeBelow:(_Bool)arg3;
- (_Bool)isSuddenChangeDurationMetAtArrivalTime:(double)arg1;
- (void)compensateSuddenChangeBandwidths;
- (void)recordSuddenChangeBandwidth:(double)arg1;
- (void)detectSuddenChangeWithBandwidth:(double)arg1 suddenChangeAbove:(_Bool *)arg2 suddenChangeBelow:(_Bool *)arg3;
- (void)updateInitialBandwidthEstimationForCellularAtTime:(double)arg1 bandwidth:(double)arg2;
- (void)initializeBandwidthEstimationAtTime:(double)arg1 mediaTimestamp:(unsigned int)arg2 probingSequence:(_Bool)arg3 probingSequenceID:(unsigned int)arg4;
- (double)updateBandwidthEstimation:(double)arg1 arrivalTime:(double)arg2;
- (double)resetBandwidthWithParameters:(double)arg1 probingSequenceDuration:(double)arg2 probingSequenceSize:(unsigned int)arg3 packetsInProbingSequence:(unsigned int)arg4;
- (_Bool)isPacketProcessedLateWithArrivalTime:(double)arg1;
- (void)updateQualificationParameters;
- (void)calculateBandwidthEstimationForBandwidthSample:(double)arg1 arrivalTime:(double)arg2;
- (void)calculateBandwidthEstimationAtTime:(double)arg1 mediaTimestamp:(unsigned int)arg2 mediaDataSize:(unsigned int)arg3 probingSequence:(_Bool)arg4 probingSequenceID:(unsigned int)arg5;
- (void)dealloc;
- (id)init;

@end

