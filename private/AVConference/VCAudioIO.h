//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCAudioIOControllerDelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>

@class NSString, VCAudioIOControllerClient;
@protocol VCAudioIOControllerControl;

__attribute__((visibility("hidden")))
@interface VCAudioIO : NSObject <VCAudioIOSource, VCAudioIOSink, VCAudioIOControllerDelegate>
{
    id <VCAudioIOControllerControl> _audioIOController;
    VCAudioIOControllerClient *_controllerClient;
    id _delegate;
    struct AudioStreamBasicDescription _clientFormat;
    unsigned int _clientSamplesPerFrame;
    _Bool _isMuted;
    _Bool _isGKVoiceChat;
    struct AudioStreamBasicDescription _controllerFormat;
    unsigned int _controllerSamplesPerFrame;
    _Bool _isControllerAudioFormatValid;
    _Bool _isControllerReset;
    _Bool _isConverterNeeded;
    struct _opaque_pthread_mutex_t _stateMutex;
    unsigned int _state;
    CDUnknownBlockType _startCompletionBlock;
    CDUnknownBlockType _stopCompletionBlock;
    struct _VCAudioEndpointData _sourceData;
    struct _VCAudioEndpointData _sinkData;
}

+ (id)controllerForDeviceRole:(int)arg1;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_isMuted;
@property(readonly, nonatomic) struct AudioStreamBasicDescription clientAudioFormat; // @synthesize clientAudioFormat=_clientFormat;
@property(readonly, nonatomic) unsigned int samplesPerFrame; // @synthesize samplesPerFrame=_clientSamplesPerFrame;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didResume;
- (void)didSuspend;
- (void)controllerFormatChanged:(struct AudioStreamBasicDescription)arg1;
- (void)didStop:(_Bool)arg1 error:(id)arg2;
- (void)didStart:(_Bool)arg1 error:(id)arg2;
- (void)setClientFormat:(struct AudioStreamBasicDescription)arg1;
- (void)releaseConverters;
- (_Bool)createConverterForSource:(_Bool)arg1 error:(id *)arg2;
@property(nonatomic) unsigned char direction;
- (void)setMute:(_Bool)arg1;
@property(nonatomic, getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg1;
- (id)delegate;
- (void)forceCleanup;
- (void)dealloc;
- (_Bool)reconfigureWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(_Bool)arg4;
- (id)initWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(_Bool)arg4 delegate:(id)arg5 clientPid:(int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
