//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RCWaveformViewController;

@protocol RCWaveformViewDelegate <NSObject>
- (void)waveformViewController:(RCWaveformViewController *)arg1 didChangeToSelectedTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(RCWaveformViewController *)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(RCWaveformViewController *)arg1;
- (void)waveformViewController:(RCWaveformViewController *)arg1 didScrubToTime:(double)arg2 finished:(_Bool)arg3;
@end

