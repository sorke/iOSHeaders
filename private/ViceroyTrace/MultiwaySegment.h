//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MultiwaySegment : NSObject
{
    int _duration;
    int _adjustedDuration;
    int _interval;
    int _frequency;
    NSString *_segmentName;
    NSString *_previousSegmentName;
}

@property int adjustedDuration; // @synthesize adjustedDuration=_adjustedDuration;
@property int duration; // @synthesize duration=_duration;
@property(readonly) NSString *previousSegmentName; // @synthesize previousSegmentName=_previousSegmentName;
@property(readonly) NSString *segmentName; // @synthesize segmentName=_segmentName;
- (id)segmentReport;
- (unsigned int)RTPeriod;
- (void)dealloc;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2;

@end

