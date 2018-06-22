//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCAudioPowerSpectrumDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumMeter : NSObject <VCAudioPowerSpectrumDelegate>
{
    id _delegate;
    unsigned short _audioSpectrumBinCount;
    double _audioSpectrumRefreshRate;
    unsigned int _lastDeliveryTime;
    NSMutableDictionary *_audioPowerSpectrums;
    NSMutableDictionary *_outputPowerSpectrums;
}

@property(readonly, nonatomic) NSDictionary *audioPowerSpectrums; // @synthesize audioPowerSpectrums=_audioPowerSpectrums;
- (void)didUpdateAudioPowerSpectrum:(id)arg1;
- (void)releaseAudioPowerSpectrumForStreamToken:(id)arg1;
- (id)newAudioPowerSpectrumForStreamToken:(id)arg1;
- (void)processOutput;
- (id)delegate;
- (void)dealloc;
- (id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

