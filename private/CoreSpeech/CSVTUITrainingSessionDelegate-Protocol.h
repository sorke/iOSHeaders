//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSVTUITrainingSession, NSData, NSString;

@protocol CSVTUITrainingSessionDelegate <NSObject>
- (void)CSVTUITrainingSessionStopListen;
- (void)CSVTUITrainingSessionRMSAvailable:(float)arg1;

@optional
- (void)CSVTUITrainingSession:(CSVTUITrainingSession *)arg1 hasTrainUtterance:(NSData *)arg2 languageCode:(NSString *)arg3;
@end

