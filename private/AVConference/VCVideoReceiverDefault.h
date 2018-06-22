//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCVideoReceiverBase.h>

@class VideoAttributes;

__attribute__((visibility("hidden")))
@interface VCVideoReceiverDefault : VCVideoReceiverBase
{
    struct tagHANDLE *_videoReceiverHandle;
    long long _streamToken;
    void *_controlInfoGenerator;
    unsigned int remoteFrameWidth;
    unsigned int remoteFrameHeight;
    VideoAttributes *remoteVideoAttributes;
    _Bool receivedFirstRemoteFrame;
    _Bool _shouldEnableFaceZoom;
    double _lastKeyFrameRequestTime;
    unsigned short _lastKeyFrameRequestStreamID;
}

@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(retain) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2;
- (void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short *)arg1 count:(int)arg2 didReceiveRTCPFB:(_Bool)arg3 didReceiveFIR:(_Bool)arg4;
- (void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)arg1;
- (void)handleRemoteFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (void)updateSourcePlayoutTimestamp:(unsigned int)arg1;
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (double)roundTripTime;
- (void)setRoundTripTime:(double)arg1;
- (void)rtcpSendIntervalElapsed;
- (void)pauseVideo;
- (void)setTargetStreamID:(unsigned short)arg1;
- (double)lastReceivedVideoRTCPPacketTime;
- (double)lastReceivedVideoRTPPacketTime;
- (void)stopVideo;
- (void)startVideo;
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithConfig:(struct tagVCVideoReceiverConfig *)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3 statisticsCollector:(id)arg4;

@end

