//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCAudioPayloadConfig : NSObject
{
    int _payload;
    int _format;
    unsigned int _blockSize;
    unsigned int _codecSampleRate;
    unsigned int _inputSampleRate;
    unsigned int _codecSamplesPerFrame;
    unsigned int _inputSamplesPerFrame;
    unsigned int _internalBundleFactor;
    unsigned int _bundleHeaderBytes;
    NSArray *_supportedBitrates;
    unsigned int _bitrate;
    _Bool _forcingBitrate;
    _Bool _useSBR;
    _Bool _isDTXEnabled;
    unsigned int _evsSIDPeriod;
    _Bool _payloadOctetAligned;
}

@property(readonly, nonatomic) unsigned int evsSIDPeriod; // @synthesize evsSIDPeriod=_evsSIDPeriod;
@property(readonly, nonatomic) _Bool isDTXEnabled; // @synthesize isDTXEnabled=_isDTXEnabled;
@property(readonly, nonatomic) _Bool forcingBitrate; // @synthesize forcingBitrate=_forcingBitrate;
@property(readonly, nonatomic) _Bool payloadOctetAligned; // @synthesize payloadOctetAligned=_payloadOctetAligned;
@property(readonly, nonatomic) unsigned int internalBundleFactor; // @synthesize internalBundleFactor=_internalBundleFactor;
@property(readonly, nonatomic) int format; // @synthesize format=_format;
@property(readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) NSArray *supportedBitrates; // @synthesize supportedBitrates=_supportedBitrates;
@property(readonly, nonatomic) unsigned int bundleHeaderBytes; // @synthesize bundleHeaderBytes=_bundleHeaderBytes;
@property(readonly, nonatomic) unsigned int samplesPerFrame; // @synthesize samplesPerFrame=_inputSamplesPerFrame;
@property(readonly, nonatomic) unsigned int inputSampleRate; // @synthesize inputSampleRate=_inputSampleRate;
@property(readonly, nonatomic) unsigned int codecSampleRate; // @synthesize codecSampleRate=_codecSampleRate;
@property(readonly, nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(readonly, nonatomic) int payload; // @synthesize payload=_payload;
- (id)description;
- (id)className;
@property(readonly, nonatomic) unsigned int flags;
- (float)qualityForBitRate:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithConfigDict:(id)arg1;
- (void)setupEncodeProperties:(id)arg1;
- (void)createSupportedBitratesForEVS;
- (void)createSupportedBitratesForAMR16k;
- (void)createSupportedBitratesForAMR8k;
- (void)createSupportedBitratesForOpus;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitrates;
- (unsigned int)aacBitrate;
- (void)setUseSBR:(_Bool)arg1;
- (_Bool)configure:(id)arg1;

@end
