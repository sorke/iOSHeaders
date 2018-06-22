//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCRateControllerDelegate.h"
#import "RTCPReportProvider.h"
#import "VCConnectionChangedHandler.h"
#import "VCMediaStreamNotification.h"
#import "VCNetworkFeedbackControllerDelegate.h"
#import "VCRateControlMediaControllerDelegate.h"
#import "VCSecurityEventHandler.h"
#import "VCSessionParticipantDelegate.h"
#import "VCSessionParticipantStreamDelegate.h"

@class AVCRateController, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, VCControlChannelMultiWay, VCNetworkFeedbackController, VCRateControlMediaController, VCSecurityKeyManager, VCSessionConfiguration, VCSessionDownlinkBandwidthAllocator, VCSessionMessaging, VCSessionParticipant, VCSessionParticipantLocal, VCSessionStatsController, VCTransportSession;

__attribute__((visibility("hidden")))
@interface VCSession : NSObject <VCSessionParticipantStreamDelegate, AVCRateControllerDelegate, VCRateControlMediaControllerDelegate, VCMediaStreamNotification, RTCPReportProvider, VCSecurityEventHandler, VCSessionParticipantDelegate, VCNetworkFeedbackControllerDelegate, VCConnectionChangedHandler>
{
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id <VCSessionDelegate> _delegate;
    NSString *_uuid;
    NSString *_idsDestination;
    VCControlChannelMultiWay *_controlChannel;
    VCSessionMessaging *_sessionMessaging;
    VCSessionConfiguration *_configuration;
    VCSessionParticipantLocal *_localParticipant;
    NSMutableDictionary *_remoteParticipantsMapByUUID;
    NSMutableDictionary *_remoteParticipantsMapByServerID;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportUpdateInterval;
    int _reportReportFrequency;
    VCSessionStatsController *_sessionStatsController;
    VCNetworkFeedbackController *_feedbackController;
    NSMutableArray *_startingParticipants;
    NSMutableArray *_stoppingParticipants;
    NSMutableArray *_initializingParticipants;
    VCSecurityKeyManager *_securityKeyManager;
    VCTransportSession *_transportSession;
    int _currentconnectionType;
    id <VCConnectionProtocol> _currentActiveConnection;
    unsigned int _transportSessionID;
    _Bool _localSourceNeedsReset;
    _Bool _useReducedSizeRTCP;
    AVCRateController *_uplinkRateController;
    AVCRateController *_downlinkRateController;
    unsigned int _uplinkTargetBitrate;
    unsigned int _downlinkTargetBitrate;
    VCRateControlMediaController *_uplinkMediaController;
    unsigned int _basebandFlushTransactionID;
    VCSessionDownlinkBandwidthAllocator *_downlinkBandwidthAllocator;
    NSMutableDictionary *_optInDictionary;
    struct tagVCMediaQueue *_mediaQueue;
    _Bool _forceDisableMediaPriority;
}

@property(retain, nonatomic) VCSessionMessaging *sessionMessaging; // @synthesize sessionMessaging=_sessionMessaging;
@property(readonly, nonatomic) AVCRateController *downlinkRateController; // @synthesize downlinkRateController=_downlinkRateController;
@property(readonly, nonatomic) struct opaqueRTCReporting *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(readonly, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteParticipantsMapByServerID; // @synthesize remoteParticipantsMapByServerID=_remoteParticipantsMapByServerID;
@property(retain) NSMutableDictionary *optInDictionary; // @synthesize optInDictionary=_optInDictionary;
@property(retain, nonatomic) id <VCConnectionProtocol> currentActiveConnection; // @synthesize currentActiveConnection=_currentActiveConnection;
@property(readonly, nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly, nonatomic) VCSessionParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
- (void)recommendedSettingsChanged:(id)arg1;
- (void)unregisterReportingTask;
- (void)registerReportingTask;
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)dispatchedParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)stopAllParticipants;
- (void)dispatchedUpdateConfiguration:(id)arg1;
- (void)tearDown;
- (void)dispatchedStop;
- (void)dispatchedStart;
- (void)dispatchedRemoveParticipant:(id)arg1;
- (void)dispatchedAddParticipantConfigurations:(id)arg1 processID:(int)arg2;
- (void)dispatchedAddParticipantWithConfig:(id)arg1 processID:(int)arg2;
- (void)reportingSessionRemoteParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 value:(id)arg3;
- (void)collectSessionEventKeyFields:(struct __CFDictionary *)arg1 eventType:(unsigned short)arg2 withParticipant:(id)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5 withStreamID:(unsigned short)arg6;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withStreamID:(unsigned short)arg2;
- (struct __CFDictionary *)getClientSpecificUserInfo;
- (void)handleEncryptionInfoChange:(id)arg1;
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (void)mediaStream:(id)arg1 didReceiveNewMasterKeyIndex:(id)arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)unregisterMediaStreamNotificationDelegateForParticipant:(id)arg1;
- (void)registerMediaStreamNotificationDelegateForParticipant:(id)arg1;
- (void)setupVideoRedundancyMessages;
- (void)generateKeyFrameWithReceivedMessage:(id)arg1;
- (void)setupSymptomEnabledMessages;
- (void)setupKeyFrameGenerationMessages;
- (void)setupVideoPausedMessages;
- (void)setupAudioPausedMessages;
- (void)setupVideoEnabledMessages;
- (void)setupAudioEnabledMessages;
- (void)broadcastMessage:(id)arg1 withTopic:(id)arg2;
- (void)stopSessionMessaging;
- (void)startSessionMessaging;
- (void)destroySessionMessaging;
- (void)createSessionMessaging;
- (void)sendSymptomsToRemoteParticipants:(id)arg1 symptom:(id)arg2 groupID:(id)arg3;
- (void)unregisterRemoteParticipantFromSession:(id)arg1;
- (void)removeDelegatesForRemoteParticipant:(id)arg1;
- (void)registerRemoteParticipantToSession:(id)arg1;
- (void)setDelegatesForRemoteParticipant:(id)arg1;
- (void)handleMembershipChangeInfoEvent:(id)arg1;
- (void)handleEncryptionInfoEvent:(id)arg1;
- (_Bool)detectSSRCCollision:(id)arg1 resetNeeded:(_Bool *)arg2;
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;
- (void)optInStreamWithIDSStreamIDs:(id)arg1;
- (void)updateLocalStreamConfiguration;
- (void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned int)arg1;
- (void)createMediaQueue;
- (void)setupUplinkBitrateCaps;
- (void)setupRateControllers;
- (void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;
- (void)setSessionInfoSynchronizerErrorResponseCallback;
- (void)setSessionInfoSynchronizerCallbacks;
- (void)reportingSessionDownlinkOptInEvent:(id)arg1 selectedMediaEntriesForParticipants:(id)arg2;
- (void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(_Bool)arg1;
- (void)updateParticipantConfigurations:(id)arg1;
- (int)flushBasebandWithPayloads:(id)arg1;
- (void)mediaController:(void *)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion)arg2;
- (void)rateController:(void *)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;
- (void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(_Bool)arg2;
- (void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3 processingOptIn:(_Bool)arg4;
- (void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(id)arg1;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(id)arg1;
- (void)vcSessionParticipant:(id)arg1 didChangeProminence:(unsigned char)arg2 description:(id)arg3;
- (void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(id)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(id)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSessionParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (unsigned int)calculateExpectedTotalNetworkBitrateUplink;
- (unsigned int)calculateExpectedTotalNetworkBitrateDownlink;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleCellularMTUChanged:(unsigned short)arg1 connection:(id)arg2;
- (void)handleCellTechChange:(int)arg1 connection:(id)arg2;
@property(readonly, nonatomic) NSArray *remoteParticipants;
- (void)mediaStateChangedForParticipant:(id)arg1;
- (id)participantForID:(id)arg1;
- (void)updateConfiguration:(id)arg1;
- (void)stop;
- (void)start;
- (void)removeParticipant:(id)arg1;
- (void)addParticipantConfigurations:(id)arg1 processID:(int)arg2;
@property(readonly, nonatomic) id <VCSessionDelegate> delegate;
- (id)participantsToString;
@property(readonly, copy) NSString *description;
- (char *)sessionStateToString:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setupTransportSessionWithDestination:(id)arg1;
- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 delegate:(id)arg3 processId:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

