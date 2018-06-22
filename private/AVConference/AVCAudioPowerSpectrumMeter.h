//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVConferenceXPCClient, NSObject<OS_dispatch_queue>;

@interface AVCAudioPowerSpectrumMeter : NSObject
{
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _delegate;
    double _audioSpectrumRefreshRate;
    unsigned short _audioSpectrumBinCount;
    unsigned int _sessionToken;
}

@property(readonly, nonatomic) unsigned int sessionToken; // @synthesize sessionToken=_sessionToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)deregisterBlocksForService;
- (void)registerBlocksForNotifications;
- (void)unregisterPowerSpectrumForStreamToken:(long long)arg1;
- (void)registerPowerSpectrumForStreamToken:(long long)arg1;
- (void)dealloc;
@property(readonly, nonatomic) id <AVCAudioPowerSpectrumMeterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithConfig:(struct _AVCAudioPowerSpectrumMeterConfig)arg1 delegate:(id)arg2 queue:(id)arg3;

@end

