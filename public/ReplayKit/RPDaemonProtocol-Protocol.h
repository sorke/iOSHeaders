//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, NSXPCListenerEndpoint;

@protocol RPDaemonProtocol <NSObject>
- (oneway void)setMicrophoneEnabledPersistent:(_Bool)arg1;
- (oneway void)setBroadcastingState:(_Bool)arg1;
- (oneway void)setBroadcastURL:(NSString *)arg1;
- (oneway void)setHasUserConsentForMicrophone:(_Bool)arg1;
- (oneway void)setHasUserConsentForCamera:(_Bool)arg1;
- (oneway void)getBroadcastURL:(void (^)(NSString *))arg1;
- (oneway void)getHasUserConsentForMicrophone:(void (^)(_Bool))arg1;
- (oneway void)getHasUserConsentForCamera:(void (^)(_Bool))arg1;
- (oneway void)getSystemRecordState:(void (^)(_Bool))arg1;
- (oneway void)getMicrophoneEnabaledPersistent:(void (^)(_Bool))arg1;
- (oneway void)getMicrophoneState:(void (^)(_Bool))arg1;
- (oneway void)getBroadcastingState:(void (^)(_Bool))arg1;
- (oneway void)getRecordingState:(void (^)(_Bool))arg1;
- (oneway void)clientDidResignActive;
- (oneway void)clientDidBecomeActive;
- (oneway void)discardRecordingWithHandler:(void (^)(void))arg1;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
- (oneway void)setMicrophoneEnabled:(_Bool)arg1;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)pauseRecording;
- (oneway void)saveVideoToCameraRoll:(NSURL *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(void (^)(NSURL *, NSError *))arg3;
- (oneway void)stopRecordingWithHandler:(void (^)(NSURL *, NSError *))arg1;
- (oneway void)getSystemBroadcastExtensionInfo:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getCurrentBroadcastImages:(void (^)(UIImage *, UIImage *))arg1;
- (oneway void)setupBroadcastWithHostBundleID:(NSString *)arg1 broadcastExtensionBundleID:(NSString *)arg2 broadcastConfigurationData:(NSData *)arg3 userInfo:(NSDictionary *)arg4 handler:(void (^)(NSError *))arg5;
- (oneway void)startRecordingWindowLayerContextIDs:(NSArray *)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 broadcast:(_Bool)arg5 systemRecording:(_Bool)arg6 captureEnabled:(_Bool)arg7 listenerEndpoint:(NSXPCListenerEndpoint *)arg8 withHandler:(void (^)(NSError *, _Bool, _Bool))arg9;
@end
