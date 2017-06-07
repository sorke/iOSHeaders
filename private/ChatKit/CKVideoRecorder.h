//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/AVCaptureFileOutputRecordingDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSObject, NSString, NSURL;
@protocol CKVideoRecorderDelegate, OS_dispatch_queue;

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate>
{
    long long _currentDevice;
    _Bool _previousStatusBarHidden;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDevice *_rearFacingCamera;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    _Bool _canceled;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    id <CKVideoRecorderDelegate> _delegate;
    NSURL *_outputFileURL;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_rearVideoInput;
    AVCaptureDeviceInput *_frontVideoInput;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureMovieFileOutput *_videoOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
}

@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureMovieFileOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVCaptureDeviceInput *frontVideoInput; // @synthesize frontVideoInput=_frontVideoInput;
@property(retain, nonatomic) AVCaptureDeviceInput *rearVideoInput; // @synthesize rearVideoInput=_rearVideoInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(nonatomic) __weak id <CKVideoRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)setupCamera:(id)arg1;
@property(nonatomic) long long cameraDevice;
- (id)_configureRearVideoInput;
- (id)_configureFrontVideoInput;
- (id)rearFacingCamera;
- (id)frontFacingCamera;
- (id)audioDevice;
- (id)_cameraWithPosition:(long long)arg1;
- (void)dealloc;
- (void)takePicture;
- (_Bool)startVideoCapture;
- (void)stopVideoCapture;
- (void)cancel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
