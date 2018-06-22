//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViceroyTrace/VCAggregator.h>

#import "VCAdaptiveLearningDelegate.h"

@class CallSegment, NSString, VCAdaptiveLearning, VCHistogram;

__attribute__((visibility("hidden")))
@interface VCAggregatorFaceTime : VCAggregator <VCAdaptiveLearningDelegate>
{
    NSString *_remoteInterfaceType;
    NSString *_currentSegmentKey;
    NSString *_relayServer;
    int _relayType;
    NSString *_accessToken;
    CallSegment *_currentSegment;
    unsigned int _currentWidth;
    _Bool _currentDegradedVideoState;
    double _degradedVideoStartTime;
    double _degradedVideoDuration;
    _Bool _currentNoRemoteState;
    double _noRemoteStartTime;
    int _callTotalDurationTicks;
    int _callAggregatedDurationTicks;
    double _callAverageAudioErasuresRate;
    double _callAverageTargetBitrate;
    double _callAverageSendBitrate;
    double _callAverageReceiveBitrate;
    double _callAverageRTT;
    double _callPoorConnectionTotalLength;
    double _callPoorConnectionMaxLength;
    unsigned int _callPoorConnectionFrequency;
    double _callTotalVideoStallTime;
    double _callMaxVideoStallInterval;
    double _callTotalAudioStallTime;
    double _callMaxAudioStallInterval;
    double _lastReportedAudioStallTime;
    double _lastReportedVideoStallTime;
    double _callLastVideoResolutionChangeTime;
    unsigned int _noRemoteAtCallEnd;
    unsigned int _remoteNoRemoteAtCallEnd;
    unsigned int _totalConnectionTime;
    unsigned int _startConnectionTime;
    unsigned int _transportConnectionTime;
    unsigned int _mediaConnectionTime;
    unsigned int _callMode;
    unsigned int _callDeviceRole;
    unsigned int _callTransportType;
    unsigned int _callErrorCode;
    unsigned int _callDetailedErrorCode;
    unsigned int _numberOfSegments;
    unsigned int _REDState;
    unsigned long long _lastReportedAudioPacketSent;
    unsigned long long _lastReportedVideoPacketSent;
    unsigned int _initialRampUpTime;
    int _initialBitrateDelta;
    VCHistogram *_callVideoSwitchPeriodHistogram;
    VCAdaptiveLearning *_adaptiveLearning;
}

- (int)shortTermMLAverageForSegment:(id)arg1;
- (int)longTermMLAverageForSegment:(id)arg1;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)updateTargetBitrateForSegment:(id)arg1 newValue:(int)arg2;
- (int)adaptiveLearningState;
- (void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3;
- (void)updateAdaptiveLearningStats:(unsigned int)arg1 payload:(id)arg2;
- (void)updateVideoSwitchTimes;
- (void)updateConnectionTimes:(id)arg1;
- (void)updateRelayInfo:(id)arg1 isRelay:(_Bool)arg2;
- (void)updateNoRemoteState:(_Bool)arg1;
- (void)updateRedState:(id)arg1;
- (void)updateErrorCode:(id)arg1;
- (void)updateRoleModeTransport:(unsigned short)arg1 deviceRole:(unsigned short)arg2 transportType:(unsigned short)arg3;
- (void)updatePauseVideo:(_Bool)arg1;
- (void)updateVideoResolution:(id)arg1;
- (void)updateVideoFECStats:(id)arg1;
- (void)updateRTStats:(id)arg1;
- (void)startNewSegment;
- (id)duplicationIndicator;
- (id)connectionTypeIndicator;
- (id)interfaceTypeIndicator:(_Bool)arg1;
- (unsigned int)RTPeriod;
- (void)reset;
- (void)flushCurrentSegment;
- (id)aggregatedSessionReport;
- (id)aggregatedCallReports;
- (id)aggregatedSegmentQRReport;
- (id)aggregatedSegmentReport:(int)arg1;
- (void)saveCallSegmentHistory;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

