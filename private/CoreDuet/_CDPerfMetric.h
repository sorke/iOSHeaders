//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface _CDPerfMetric : NSObject
{
    struct XSPerfCollection *_stats;
    NSString *_name;
    NSDictionary *_userInfo;
}

+ (id)perfMetricWithName:(id)arg1 userInfo:(id)arg2;
+ (id)perfMetricForFetchRequest:(id)arg1;
@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)elapsedTimeHistogram;
@property(readonly) unsigned long long errorCount;
@property(readonly) unsigned long long lastResultCount;
@property(readonly) NSDate *lastUpdate;
@property(readonly) double averageElapsedTime;
@property(readonly) double maximumElapsedTime;
@property(readonly) double minimumElapsedTime;
@property(readonly) double lastElapsedTime;
@property(readonly) unsigned long long count;
- (void)dealloc;
-     // Error parsing type: @40@0:8@16@24^{cdpm_shared_memory_region_s=c[1024c][256{cdpm_shared_memory_slot_s=[32c][8{XSPerfCounter=AQ}][1{XSPerfMetric=[32Q]}]}]}32, name: initWithName:userInfo:sharedMemoryRegion:

@end
