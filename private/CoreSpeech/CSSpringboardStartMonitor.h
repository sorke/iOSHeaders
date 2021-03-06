//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpringboardStartMonitor : CSEventMonitor
{
    int _notifyToken;
    _Bool _isSpringBoardStarted;
}

+ (id)sharedInstance;
- (_Bool)_checkSpringBoardStarted;
- (_Bool)isSpringboardStarted;
- (void)_notifyObserver:(id)arg1 withStarted:(_Bool)arg2;
- (void)_didReceiveSpringboardStarted:(_Bool)arg1;
- (void)_didReceiveSpringboardStartedInQueue:(_Bool)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

