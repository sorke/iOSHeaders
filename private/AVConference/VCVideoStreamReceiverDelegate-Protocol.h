//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, VCVideoStreamReceiver, VideoAttributes;

@protocol VCVideoStreamReceiverDelegate
- (unsigned int)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcVideoStreamReceiverRequestKeyFrame:(VCVideoStreamReceiver *)arg1;
- (_Bool)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 newVideoAttributes:(VideoAttributes *)arg4 isFirstFrame:(_Bool)arg5;
@end
