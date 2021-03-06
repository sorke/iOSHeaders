//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMCaptureRequest, CAMCaptureRequestIntervalometer;

@protocol CAMCaptureRequestIntervalometerDelegate <NSObject>
- (_Bool)intervalometer:(CAMCaptureRequestIntervalometer *)arg1 didGenerateCaptureRequest:(CAMCaptureRequest *)arg2;

@optional
- (void)intervalometerDidReachMaximumCount:(CAMCaptureRequestIntervalometer *)arg1;
@end

