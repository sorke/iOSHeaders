//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCSessionDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionManager : NSObject <VCSessionDelegate>
{
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
- (id)participantConfigFromXPCDictionary:(id)arg1;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (void)vcSession:(id)arg1 participantID:(id)arg2 didChangeProminence:(unsigned char)arg3 description:(id)arg4;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(_Bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(_Bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSession:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (id)sessionForStreamToken:(unsigned int)arg1;
- (id)sessionForUUID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

