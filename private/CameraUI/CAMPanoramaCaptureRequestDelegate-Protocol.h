//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMPanoramaCaptureRequest, CAMPanoramaPaintingStatus, CAMStillImageCaptureResponse, CAMStillImagePersistenceResponse, NSError;

@protocol CAMPanoramaCaptureRequestDelegate <NSObject>

@optional
- (void)panoramaRequestDidCompleteRemotePersistence:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidCompleteLocalPersistence:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidCompleteCapture:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImageCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidStopCapturing:(CAMPanoramaCaptureRequest *)arg1;
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didGeneratePaintingStatus:(CAMPanoramaPaintingStatus *)arg2;
- (void)panoramaRequestDidStartCapturing:(CAMPanoramaCaptureRequest *)arg1;
@end

