//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _CPLTimingStatistic : NSObject
{
    unsigned long long _recordCount;
    unsigned long long _batchCount;
    unsigned long long _errorCount;
    double _duration;
}

- (id)description;
- (void)updateWithDuration:(double)arg1 recordCount:(unsigned long long)arg2 error:(_Bool)arg3;

@end

