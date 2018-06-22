//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCMediaStream.h>

#import "VCAudioIODelegate.h"
#import "VCAudioIOSink.h"
#import "VCAudioIOSource.h"
#import "VCMediaStreamSyncSource.h"

@class AVTelephonyInterface, DTMFEventHandler, NSMutableArray, NSNumber, NSObject<OS_dispatch_source>, NSObject<VCMediaStreamSyncSourceDelegate>, NSString, VCAudioIO, VCAudioPayload, VCAudioTransmitter, WRMClient;

__attribute__((visibility("hidden")))
@interface VCAudioStream : VCMediaStream <VCMediaStreamSyncSource, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate>
{
    int _clientPid;
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    _Bool lastVoiceActive;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    unsigned int awdTime;
    long long sampleRate;
    long long samplesPerFrame;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableArray *audioPayloads;
    struct AudioStreamBasicDescription vpioFormat;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    // Error parsing type: ^{tagVCAudioReceiver={tagVCAudioReceiverConfig=I[3{tagVCAudioReceiverStream=^{tagHANDLE}S}]^v^vIiiB^{opaqueRTCReporting}iB^{__CFString}^{__CFString}SB}^v^v^{opaqueVCJitterBuffer}B^{AudioStreamBasicDescription}id^{tagVCRealTimeThread}{tagVCAudioReceiverReportingTask=^{opaqueRTCReporting}i^{tagHANDLE}}B{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{tagVCAudioDecoderList=^{tagDecoderSettings}I}I{tagVCAudioReceiverStatistics=AI}^{tagWRMMetricsInfo}^?{tagVCAudioReceiverCallbackContext=^v^?^?}^?{tagVCAudioReceiverCallbackContext=^v^?^?}I[2{_RTCPPacketList=(tagNTP=Q{?=II})C[10^{tagRTCPPACKET}][1472C]I[1472C]}]dI[300{tagPacketHistoryInfo=ISIBB}]SS^{tagVCAudioReceiverStream}SSBSSSS}, name: _audioReceiver
    VCAudioTransmitter *_audioTransmitter;
    int _reportingModuleID;
    AVTelephonyInterface *_telephonyInterface;
    struct _METER_INFO soundMeter[2];
    _Bool isValid;
    int deviceRole;
    void *_audioMediaControlInfoGenerator;
    id syncSourceDelegate;
    VCAudioIO *_audioIO;
    _Bool _isMuted;
    _Bool _isRemoteMuted;
    unsigned int _lastRTPTimestamp;
    unsigned int *_reportingSSRCList;
    unsigned int _reportingSSRCCount;
    _Bool _sendActiveVoiceOnly;
    _Bool _isRemoteMediaStalled;
    int _packetsSinceStallCount;
    double _lastReceivedAudioTimestamp;
    _Bool _currentDTXEnable;
    NSNumber *_targetStreamID;
    float _volume;
}

+ (id)capabilities;
+ (id)supportedAudioPayloads;
+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(nonatomic, getter=isRemoteMuted) _Bool remoteMuted; // @synthesize remoteMuted=_isRemoteMuted;
@property(retain) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(retain) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter=_audioTransmitter;
@property(nonatomic) int deviceRole; // @synthesize deviceRole;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(readonly) unsigned int conferenceID; // @synthesize conferenceID;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectTxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)handleCodecRateModeChange:(int)arg1 payload:(int)arg2;
- (void)unregisterCodecRateModeChangeNotifications;
- (void)registerActiveAudioStreamChangeNotifications;
- (void)registerCodecRateModeChangeNotifications;
- (void)vcMediaStreamTransport:(id)arg1 updateSourceNTPTime:(double)arg2 rtpTimeStamp:(unsigned int)arg3;
- (long long)getSyncSourceSampleRate;
@property(nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate; // @synthesize syncSourceDelegate;
- (void)setCanProcessAudio:(_Bool)arg1;
- (_Bool)canProcessAudio;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)reportingAudioStreamEvent:(unsigned short)arg1;
- (id)getReportingServiceID;
- (struct __CFString *)getReportingClientName;
- (int)getReportingClientType;
- (struct __CFDictionary *)getClientSpecificUserInfo:(id)arg1;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (double)rtcpHeartbeatLeeway;
- (void)onSendRTCPPacket;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)streamIDsFromTransport;
- (void)cleanupBeforeReconfigure:(id)arg1;
- (void)createReportSSRCListWithStreamConfigs:(id)arg1;
- (id)createTransport;
- (_Bool)validateAudioStreamConfigurations:(id)arg1;
- (void)onCallIDChanged;
- (id)supportedPayloads;
@property(nonatomic) _Bool sendActiveVoiceOnly;
- (void)setStreamDirection:(long long)arg1;
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_isMuted;
- (void)cleanupAudio;
- (void)prepareAudio;
- (void)updateSoundMeter:(int)arg1 sampleBuffer:(struct opaqueVCAudioBufferList *)arg2;
- (void)setFrequencyMeteringEnabled:(_Bool)arg1 meterType:(int)arg2;
- (_Bool)isFrequencyMeteringEnabled:(int)arg1;
- (void)stopSendDTMFEvent;
- (void)sendDTMFEvent:(id)arg1;
- (_Bool)createAudioTransmitter:(long long)arg1 streamIDs:(id)arg2;
- (_Bool)createAudioReceiver;
- (int)bundlingSchemeForOperatingMode:(int)arg1 payloadType:(int)arg2;
- (int)getPacketsPerBundleForStreamConfig:(id)arg1;
- (void)dealloc;
- (_Bool)setupAudioStreamWithClientPid:(int)arg1;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2 transportSessionID:(unsigned int)arg3;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;
- (id)initWithClientPid:(int)arg1;
- (int)operatingModeForAudioStreamMode:(long long)arg1;
- (void)stateEnter;
- (void)stateExit;
- (void)setState:(int)arg1;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (_Bool)setReceiverPayloads;
- (void)setDTXPayload:(id)arg1;
- (id)addAudioPayload:(int)arg1;
- (id)configForPayloadType:(int)arg1;
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;
- (void)getCodecConfigForPayload:(int)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)setupPayloads;
- (id)getSupportedPayloads;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned int)codecTypeFromAudioPayload:(int)arg1;
- (void)pullDecodedMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)updateRemoteMediaStallState:(double)arg1;
- (void)processPulledSamples:(struct opaqueVCAudioBufferList *)arg1 rtpTimestamp:(unsigned int)arg2;
- (int)captureMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)setInputTimestamp:(unsigned int)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3;
- (void)_computeInternalFormatForAudioConfig:(id)arg1;
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

