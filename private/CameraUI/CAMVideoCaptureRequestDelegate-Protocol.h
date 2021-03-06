//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMVideoCaptureRequest, CAMVideoCaptureResponse, CAMVideoPersistenceResponse, NSError;

@protocol CAMVideoCaptureRequestDelegate <NSObject>

@optional
- (void)videoRequestDidCompleteRemotePersistence:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidCompleteLocalPersistence:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidCompleteCapture:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidStopCapturing:(CAMVideoCaptureRequest *)arg1;
- (void)videoRequestDidStartCapturing:(CAMVideoCaptureRequest *)arg1;
@end

