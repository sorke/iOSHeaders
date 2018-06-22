//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAudioPlaybackRequest, AFConnection, AceObject<SAAceCommand>, INImage, NSDictionary, NSError, NSString, NSURL;

@protocol AFAssistantUIService <NSObject>

@optional
- (void)assistantConnection:(AFConnection *)arg1 audioSessionDidBecomeActive:(_Bool)arg2;
- (void)assistantConnection:(AFConnection *)arg1 audioSessionWillBecomeActive:(_Bool)arg2;
- (void)assistantConnection:(AFConnection *)arg1 startPlaybackDidFail:(long long)arg2;
- (void)assistantConnection:(AFConnection *)arg1 willProcessStartPlayback:(long long)arg2;
- (void)assistantConnection:(AFConnection *)arg1 didHandleQuickStopWithAction:(unsigned long long)arg2;
- (void)assistantConnection:(AFConnection *)arg1 didStopAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg2 error:(NSError *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 didNotStartAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg2 error:(NSError *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 didStartAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 willStartAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 startUIRequestWithText:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)assistantConnection:(AFConnection *)arg1 extensionRequestFinishedForApplication:(NSString *)arg2 error:(NSError *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 extensionRequestWillStartForApplication:(NSString *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 wantsToCacheImage:(INImage *)arg2;
- (void)assistantConnectionInvalidateCurrentUserActivity:(AFConnection *)arg1;
- (void)assistantConnection:(AFConnection *)arg1 setUserActivtiyInfoAndMakeCurrent:(NSDictionary *)arg2 webpageURL:(NSURL *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 didFinishAcousticIDRequestWithSuccess:(_Bool)arg2;
- (void)assistantConnectionDidDetectMusic:(AFConnection *)arg1;
- (void)assistantConnectionWillStartAcousticIDRequest:(AFConnection *)arg1;
- (void)assistantConnectionAudioSessionDidEndInterruption:(AFConnection *)arg1 shouldResume:(_Bool)arg2;
- (void)assistantConnectionAudioSessionDidBeginInterruption:(AFConnection *)arg1;
- (void)assistantConnection:(AFConnection *)arg1 didChangeAudioSessionID:(unsigned int)arg2;
- (void)assistantConnection:(AFConnection *)arg1 shouldSpeak:(_Bool)arg2;
- (void)assistantConnection:(AFConnection *)arg1 openApplicationWithBundleID:(NSString *)arg2 URL:(NSURL *)arg3 completion:(void (^)(_Bool))arg4;
- (void)assistantConnection:(AFConnection *)arg1 openURL:(NSURL *)arg2 completion:(void (^)(_Bool))arg3;
- (void)assistantConnection:(AFConnection *)arg1 requestFailedWithError:(NSError *)arg2 requestClass:(NSString *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 receivedCommand:(AceObject<SAAceCommand> *)arg2 completion:(void (^)(AceObject<SAAceCommand> *))arg3;
- (void)assistantConnectionRequestFinished:(AFConnection *)arg1;
- (void)assistantConnectionDismissAssistant:(AFConnection *)arg1;
- (void)assistantConnectionRequestWillStart:(AFConnection *)arg1;
@end

