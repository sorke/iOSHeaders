//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface ATXFeedbackStateBuilder : NSObject
{
    NSMutableData *_data;
    int _predictionCount;
    _Bool _finished;
}

- (void).cxx_destruct;
- (id)finish;
- (void)recordPrediction:(id)arg1 totalScore:(float)arg2 scoreInputs:(const float *)arg3;
- (id)init;
- (id)initWithABGroup:(id)arg1 assetVersion:(long long)arg2;

@end

