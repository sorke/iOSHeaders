//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID, HMDCameraSnapshotRemoteRelayStream, NSError;

@protocol HMDCameraSnapshotRemoteRelayStreamDelegate <NSObject>
- (void)snapshotRelayStream:(HMDCameraSnapshotRemoteRelayStream *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
- (void)snapshotRelayStream:(HMDCameraSnapshotRemoteRelayStream *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
@end
