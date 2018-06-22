//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCObject.h>

#import "VCAudioIOSink.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumSource : VCObject <VCAudioIOSink>
{
    NSMutableArray *_powerSpectrumSinks;
    long long _streamToken;
}

@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)unregisterAudioPowerSpectrumSink:(id)arg1;
- (void)registerAudioPowerSpectrumSink:(id)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

