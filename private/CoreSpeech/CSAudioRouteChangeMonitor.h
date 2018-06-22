//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@class NSObject<OS_dispatch_queue>;

@interface CSAudioRouteChangeMonitor : CSEventMonitor
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_fetchAudioRouteState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)preferredExternalRouteDidChange:(id)arg1;
- (id)init;

@end

