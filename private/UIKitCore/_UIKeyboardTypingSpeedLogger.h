//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UIKeyboardTypingSpeedLogger : NSObject
{
    long long _typingDelaySamples[7];
    long long _typingDelaySampleCount;
}

- (void)logToAggregate;
- (void)recordTypingDelay:(double)arg1;
- (id)init;

@end

