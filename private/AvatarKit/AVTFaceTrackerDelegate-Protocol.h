//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ARSession, AVTFaceTracker, AVTFaceTrackingInfo, NSError;

@protocol AVTFaceTrackerDelegate <NSObject>
- (void)faceTrackerDidUpdate:(AVTFaceTracker *)arg1 trackingInfo:(AVTFaceTrackingInfo *)arg2;

@optional
- (void)faceTracker:(AVTFaceTracker *)arg1 session:(ARSession *)arg2 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg3;
- (void)faceTracker:(AVTFaceTracker *)arg1 sessionInterruptionEnded:(ARSession *)arg2;
- (void)faceTracker:(AVTFaceTracker *)arg1 sessionWasInterrupted:(ARSession *)arg2;
- (void)faceTracker:(AVTFaceTracker *)arg1 session:(ARSession *)arg2 didFailWithError:(NSError *)arg3;
- (void)faceTrackerDidLostTrackingWhileRecording:(AVTFaceTracker *)arg1;
@end

