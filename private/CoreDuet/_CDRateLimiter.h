//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDRateLimiting-Protocol.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface _CDRateLimiter : NSObject <_CDRateLimiting>
{
    NSDate *_lastRecorded;
    long long _balance;
    NSObject<OS_dispatch_queue> *_queue;
    double _period;
    long long _count;
}

+ (id)sharedRateLimiter;
@property(readonly) long long count; // @synthesize count=_count;
@property(readonly) double period; // @synthesize period=_period;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)resetRateLimitWithTimeStamp:(id)arg1;
- (void)recordTimeAndRefillIfNeeded;
- (_Bool)debited;
- (_Bool)credit;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
