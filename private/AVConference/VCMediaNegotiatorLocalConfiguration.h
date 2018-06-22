//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSSet, NSString, VCAudioRuleCollection, VCBitrateArbiter, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorLocalConfiguration : NSObject <NSCopying>
{
    unsigned int _audioSSRC;
    unsigned int _videoSSRC;
    VCAudioRuleCollection *_audioRuleCollection;
    VCVideoRuleCollections *_videoRuleCollections;
    VCVideoRuleCollections *_screenRuleCollections;
    _Bool _allowAudioRecording;
    _Bool _allowAudioSwitching;
    int _preferredAudioCodec;
    unsigned int _audioUnitNumber;
    int _deviceRole;
    NSDictionary *_videoFeatureStrings;
    _Bool _allowRTCPFB;
    _Bool _isCaller;
    NSString *_basebandCodec;
    unsigned int _basebandCodecSampleRate;
    VCBitrateArbiter *_bitrateArbiter;
    NSSet *_captionsReceiverLanguages;
    NSSet *_captionsSenderLanguages;
    void *_callLogFile;
    unsigned long long _creationTime;
    NSArray *_multiwayAudioStreams;
    NSArray *_multiwayVideoStreams;
}

@property(retain, nonatomic) NSArray *multiwayVideoStreams; // @synthesize multiwayVideoStreams=_multiwayVideoStreams;
@property(retain, nonatomic) NSArray *multiwayAudioStreams; // @synthesize multiwayAudioStreams=_multiwayAudioStreams;
@property(nonatomic) unsigned long long creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) void *callLogFile; // @synthesize callLogFile=_callLogFile;
@property(retain, nonatomic) NSSet *captionsReceiverLanguages; // @synthesize captionsReceiverLanguages=_captionsReceiverLanguages;
@property(retain, nonatomic) NSSet *captionsSenderLanguages; // @synthesize captionsSenderLanguages=_captionsSenderLanguages;
@property(retain, nonatomic) VCBitrateArbiter *bitrateArbiter; // @synthesize bitrateArbiter=_bitrateArbiter;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) unsigned int audioUnitNumber; // @synthesize audioUnitNumber=_audioUnitNumber;
@property(nonatomic) unsigned int basebandCodecSampleRate; // @synthesize basebandCodecSampleRate=_basebandCodecSampleRate;
@property(retain, nonatomic) NSString *basebandCodec; // @synthesize basebandCodec=_basebandCodec;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(nonatomic) unsigned int videoSSRC; // @synthesize videoSSRC=_videoSSRC;
@property(nonatomic) unsigned int audioSSRC; // @synthesize audioSSRC=_audioSSRC;
@property(retain, nonatomic) NSDictionary *videoFeatureStrings; // @synthesize videoFeatureStrings=_videoFeatureStrings;
@property(nonatomic) int preferredAudioCodec; // @synthesize preferredAudioCodec=_preferredAudioCodec;
@property(nonatomic) _Bool allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(retain, nonatomic) VCVideoRuleCollections *screenRuleCollections; // @synthesize screenRuleCollections=_screenRuleCollections;
@property(retain, nonatomic) VCVideoRuleCollections *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(retain, nonatomic) VCAudioRuleCollection *audioRuleCollection; // @synthesize audioRuleCollection=_audioRuleCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

