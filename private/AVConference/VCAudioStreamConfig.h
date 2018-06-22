//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCMediaStreamConfig.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VCAudioStreamConfig : VCMediaStreamConfig
{
    unsigned long long _ptime;
    unsigned long long _maxPtime;
    long long _audioStreamMode;
    _Bool _latencySensitiveMode;
    NSMutableDictionary *_codecConfigurations;
    _Bool _redEnabled;
    unsigned char _numRedundantPayloads;
    NSMutableSet *_supportedNumRedundantPayload;
    _Bool _enableMaxBitrateOnNoChangeCMR;
    _Bool _forceEVSWideBand;
    float _volume;
}

@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool forceEVSWideBand; // @synthesize forceEVSWideBand=_forceEVSWideBand;
@property(nonatomic) _Bool enableMaxBitrateOnNoChangeCMR; // @synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR;
@property(nonatomic) unsigned char numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(readonly, nonatomic, getter=isRedEnabled) _Bool redEnabled; // @synthesize redEnabled=_redEnabled;
@property(readonly, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
@property(nonatomic, getter=isLatencySensitiveMode) _Bool latencySensitiveMode; // @synthesize latencySensitiveMode=_latencySensitiveMode;
@property(nonatomic) unsigned long long maxPtime; // @synthesize maxPtime=_maxPtime;
@property(nonatomic) unsigned long long ptime; // @synthesize ptime=_ptime;
@property(nonatomic) long long audioStreamMode; // @synthesize audioStreamMode=_audioStreamMode;
@property(readonly, nonatomic) NSArray *supportedNumRedundantPayload;
- (void)addSupportedNumRedundantPayload:(unsigned int)arg1;
- (void)addCodecConfiguration:(id)arg1;
- (_Bool)setupDTMFCodecWithClientDictionary:(id)arg1;
- (_Bool)setupCNCodecWithClientDictionary:(id)arg1;
- (void)setupRedWithRxPayload:(unsigned int)arg1 txPayload:(unsigned int)arg2;
- (_Bool)setupCodecWithClientDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;
- (id)init;

@end

