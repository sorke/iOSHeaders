//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CMKStillImageCaptureRequest.h>

@interface CMKMutableStillImageCaptureRequest : CMKStillImageCaptureRequest
{
}

- (void)setParameter:(id)arg1 forKey:(id)arg2;
@property(nonatomic) __weak id <CMKStillImageCaptureRequestDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool wantsAudioForCapture; // @dynamic wantsAudioForCapture;
@property(nonatomic) _Bool usesStillImageStabilization; // @dynamic usesStillImageStabilization;
@property(nonatomic) int hdrMode; // @dynamic hdrMode;
@property(nonatomic) long long flashMode; // @dynamic flashMode;
@property(nonatomic) long long captureDevice; // @dynamic captureDevice;
@property(nonatomic) long long deviceOrientation; // @dynamic deviceOrientation;
@property(nonatomic, getter=isTransient) _Bool transient; // @dynamic transient;

@end

